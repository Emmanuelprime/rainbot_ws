import rclpy
from rclpy.node import Node
from rain_arm_msgs.srv import AddTwoints
import sys

class SimpleServerClient(Node):
    def __init__(self,a,b):
        super().__init__("simple_server_client")
        self.client_ = self.create_client(AddTwoints,"add_two_ints")
        while not self.client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for service to become available")

        self.request_ = AddTwoints.Request()
        self.request_.a = a
        self.request_.b = b

        self.future_ = self.client_.call_async(self.request_)
        self.future_.add_done_callback(self.OurCallback)
    def OurCallback(self,future):
        self.get_logger().info(f"Server response: {future.result().sum}")


def main():
    rclpy.init()
    if len(sys.argv) != 3: # the numbers we will pass is two but by default, the system needs 1 extra
        print("Incorrect number of Arguments ")
        return -1
    
    simple_server_client = SimpleServerClient(int(sys.argv[1]),int(sys.argv[2])) 
    rclpy.spin(simple_server_client)
    simple_server_client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()