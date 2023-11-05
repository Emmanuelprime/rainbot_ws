import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Subscriber(Node):
    def __init__(self):
        super().__init__("new_listener")

        self.sub = self.create_subscription(String,'mancity',self.subcallback,10)
        self.get_logger().info("I am waiting for A Topic to be published: ")

    def subcallback(self,msg):
        self.get_logger().info(f"message received: {msg.data}")



def main():
    rclpy.init()
    my_sub = Subscriber()
    rclpy.spin(my_sub)
    my_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()