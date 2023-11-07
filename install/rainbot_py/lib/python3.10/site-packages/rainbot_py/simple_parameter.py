import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from rclpy.parameter import Parameter

class Simple_Parameter(Node):
    def __init__(self):
        super().__init__("simple_parameter")
        self.declare_parameter("simple_int_parameter",10) #declaring a parameter with a default value
        self.declare_parameter("simple_string_parameter",'Emmanuel') #declaring a parameter with a default value

        self.add_on_set_parameters_callback(self.paramChangeCallback) # to change the parameters during runtime(not compulsory)
        
    def paramChangeCallback(self,params):
        result = SetParametersResult()

        for param in params:
            if param.name == "simple_int_parameter" and param.type == Parameter.Type.INTEGER:
                self.get_logger().info(f'Parameter simple_int_parameter changed to {param.value}')
                result.successful = True
            if param.name == "simple_string_parameter" and param.type == Parameter.Type.STRING:
                self.get_logger().info(f'Parameter simple_string_parameter changed to {param.value}')
                result.successful = True

        return result

def main():
    rclpy.init()
    my_node = Simple_Parameter()
    rclpy.spin(my_node)
    rclpy.shutdown()
    my_node.shutdown()


if __name__ == '__main__':
    main()