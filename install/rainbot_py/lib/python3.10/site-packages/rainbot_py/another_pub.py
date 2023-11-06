import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Publisher(Node):
    def __init__(self):
        super().__init__("new_node")

        self.pub_ = self.create_publisher(String,'mancity',10)
        self.counter_ = 0
        self.get_logger().info("Started the Publisher Node")
        self.create_timer(1.0,self.publishercallback)

    def publishercallback(self):
        self.msg = String()
        self.msg.data = "I am in a Hotel Room"
        self.pub_.publish(self.msg)
        self.counter_ +=1

def main():
    rclpy.init()
    my_pub = Publisher()
    rclpy.spin(my_pub)
    my_pub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()