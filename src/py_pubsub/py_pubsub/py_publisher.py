import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class PyPublisher(Node):

    def __init__(self):
        super().__init__('py_publisher_node')
        self.publisher_ = self.create_publisher(String, '/mi_topico', 10)
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.get_logger().info('Nodo Python Publisher iniciado.')

    def timer_callback(self):
        msg = String()
        msg.data = f'Hola desde Python! [ID: {self.i}]'
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicando: "{msg.data}"')
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    py_publisher = PyPublisher()
    rclpy.spin(py_publisher)
    py_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
