import rclpy
from rclpy.node import Node
from rain_arm_msgs.srv import AddTwoints

class SimpleServiceServer(Node):
    def __init__(self):
        super().__init__("simple_service_server")
        self.service_ = self.create_service(AddTwoints,"add_two_ints",self.serviceCallback)
        self.get_logger().info("Add two ints Server is Ready")

    def serviceCallback(self,req,res):
        self.get_logger().info(f"I received a request to add the numbers {req.a} and {req.b}")
        res.sum = req.a + req.b
        self.get_logger().info(f"Returning the sum: {res.sum}")
        return res
    

def main():
    rclpy.init()
    service_node = SimpleServiceServer()
    rclpy.spin(service_node)
    service_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


