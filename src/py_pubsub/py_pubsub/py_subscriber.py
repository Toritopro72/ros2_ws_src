import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class PySubscriber(Node):

    def __init__(self):
        super().__init__('py_subscriber_node')
        self.subscription = self.create_subscription(
            String,
            '/mi_topico',
            self.listener_callback,
            10)
        self.subscription
        self.get_logger().info('Nodo Python Subscriber iniciado.')

    def listener_callback(self, msg):
        self.get_logger().info(f'Python Subscriber recibio: "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)
    py_subscriber = PySubscriber()
    rclpy.spin(py_subscriber)
    py_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
