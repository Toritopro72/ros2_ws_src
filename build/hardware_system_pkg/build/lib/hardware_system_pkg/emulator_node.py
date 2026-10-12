import rclpy
from rclpy.node import Node
import random
from robx7_interfaces.msg import HardwareStatus

class EmulatorNode(Node):

    def __init__(self):
        super().__init__('hardware_emulator')
        self.publisher_ = self.create_publisher(HardwareStatus, '/hardware_status', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # 1 Hz
        self.temp_actual = 40
        self.get_logger().info('Nodo Emulador de Hardware iniciado.')

    def timer_callback(self):
        msg = HardwareStatus()
        
        # Simulación de variación de temperatura
        self.temp_actual += random.randint(-5, 8)
        if self.temp_actual < 25:
            self.temp_actual = 25
        elif self.temp_actual > 90:
            self.temp_actual = 40  # Reiniciar ciclo de temperatura

        msg.temperatura = int(self.temp_actual)

        # Lógica de estado de motores y mensajes debug
        if self.temp_actual < 50:
            msg.motores_listos = True
            msg.debug_msg = "Operacion normal"
        elif self.temp_actual < 75:
            msg.motores_listos = True
            msg.debug_msg = "Calentando"
        else:
            msg.motores_listos = False
            msg.debug_msg = "Fallo de sensor / Sobrecalentamiento"

        self.publisher_.publish(msg)
        self.get_logger().info(
            f'Publicando -> Temp: {msg.temperatura}°C | Motores: {msg.motores_listos} | Status: "{msg.debug_msg}"'
        )

def main(args=None):
    rclpy.init(args=args)
    node = EmulatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
