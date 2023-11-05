import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SimplePublisher(Node):
    def __init__(self):
        #name the node
        super().__init__("Publisher")
        self.pub = self.create_publisher(String,"Chatting",10)
        self.counter_ = 0
        self.freq_ = 1.0
        self.get_logger().info(f"Publishing at {self.freq_}")
        self.timer_ = self.create_timer(self.freq_,self.Timercallback)

    def Timercallback(self):
        msg =  String()
        msg.data = f"Hello Rain {self.counter_}"
        self.pub.publish(msg)
        self.counter_ += 1


def main():
    rclpy.init() #start the ros client python library
    my_publisher = SimplePublisher() #creates an obect of our class
    rclpy.spin(my_publisher) # loops our node
    my_publisher.destroy_node() #destroy the node when we hit crtl c
    rclpy.shutdown() #close the ros client python library


if __name__ == "__main__":
    main()