import rclpy 
from rclpy.node import Node
from std_msgs.msg import String

class SimpleSubscriber(Node):
    def __init__(self):
        super().__init__('subscriber')
        self.sub = self.create_subscription(String,'Chatting',self.Subscribercallback,10)
        self.get_logger().info("Subscribed to Chatting")
    def Subscribercallback(self,msg):
        self.get_logger().info(f"i heard: {msg.data}")



def main():
    rclpy.init()
    my_subscriber = SimpleSubscriber()
    rclpy.spin(my_subscriber)
    my_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
