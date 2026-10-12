import rclpy
from rclpy.node import Node
from robx7_interfaces.msg import HardwareStatus
from robx7_interfaces.srv import CheckSystem

class MonitorNode(Node):

    def __init__(self):
        super().__init__('monitor_node')

        # 1. Declarar y leer parametro estatico (umbral_temperatura)
        self.declare_parameter('umbral_temperatura', 50)
        self.umbral_temperatura = self.get_parameter('umbral_temperatura').get_parameter_value().integer_value
        self.get_logger().info(f'Nodo Monitor iniciado. Umbral de temperatura cargado: {self.umbral_temperatura}°C')

        # Estado interno del hardware
        self.ultima_temperatura = 0
        self.motores_listos = False
        self.ultimo_debug_msg = "Sin datos"

        # 2. Suscripcion al topico /hardware_status
        self.subscription = self.create_subscription(
            HardwareStatus,
            '/hardware_status',
            self.hardware_callback,
            10
        )

        # 3. Servidor del Servicio /check_system
        self.srv = self.create_service(
            CheckSystem,
            '/check_system',
            self.check_system_callback
        )

    def hardware_callback(self, msg):
        self.ultima_temperatura = msg.temperatura
        self.motores_listos = msg.motores_listos
        self.ultimo_debug_msg = msg.debug_msg

        # Evaluar contra el umbral de temperatura
        if self.ultima_temperatura > self.umbral_temperatura:
            self.get_logger().warn(
                f'¡ADVERTENCIA DE SOBRECALENTAMIENTO! Temperatura actual ({self.ultima_temperatura}°C) excede el umbral ({self.umbral_temperatura}°C)'
            )

    def check_system_callback(self, request, response):
        self.get_logger().info('Petición de diagnostico recibida en /check_system')
        
        # Evaluar si el sistema es seguro
        if self.ultima_temperatura <= self.umbral_temperatura and self.motores_listos:
            response.seguro = True
            response.mensaje = f"Autorización de movimiento concedida. (Temp: {self.ultima_temperatura}°C)"
        else:
            response.seguro = False
            if self.ultima_temperatura > self.umbral_temperatura:
                response.mensaje = f"Bloqueo por temperatura alta ({self.ultima_temperatura}°C > {self.umbral_temperatura}°C)"
            else:
                response.mensaje = f"Bloqueo por fallas en motores ({self.ultimo_debug_msg})"
                
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MonitorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
