import rclpy
from rclpy.node import Node
from robx7_interfaces.srv import CheckSystem

class OperatorNode(Node):

    def __init__(self):
        super().__init__('operator_node')
        self.client = self.create_client(CheckSystem, '/check_system')
        
        # Esperar a que el servicio este disponible
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando disponibilidad del servicio /check_system...')
            
        self.get_logger().info('Nodo Operador conectado al servicio /check_system.')
        self.timer = self.create_timer(3.0, self.send_request)  # Peticion cada 3 segundos

    def send_request(self):
        req = CheckSystem.Request()
        future = self.client.call_async(req)
        future.add_done_callback(self.response_callback)

    def response_callback(self, future):
        try:
            response = future.result()
            if response.seguro:
                self.get_logger().info(f'RESPUESTA DEL MONITOR: [OK] - {response.mensaje}')
            else:
                self.get_logger().error(f'RESPUESTA DEL MONITOR: [ALERTA] - {response.mensaje}')
        except Exception as e:
            self.get_logger().error(f'Fallo la llamada al servicio: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = OperatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
