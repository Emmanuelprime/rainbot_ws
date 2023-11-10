#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rain_arm_msgs.srv import EulerToQuarternion, QuarternionToEuler
from tf_transformations import quaternion_from_euler,euler_from_quaternion

class AngleConversion(Node):
    def __init__(self):
        super().__init__("angle_conversion_service_server")
        self.euler_to_quaternion_ = self.create_service(EulerToQuarternion,"euler_to_quaternion",self.EulerToQuaternionServiceCallback)
        self.quaternion_to_euler_ = self.create_service(QuarternionToEuler,"quaternion_to_euler",self.QuaternionatoEulerServiceCallback)
        self.get_logger().info("Angle Conversion Services are ready")

    def EulerToQuaternionServiceCallback(self,req,res):
        self.get_logger().info(f"I was requested to convert the euler angles {req.roll},{req.pitch} and {req.yaw} to quarternion")
        (res.x,res.y,res.z,res.w) = quaternion_from_euler(req.roll,req.pitch,req.yaw)
        self.get_logger().info(f"The Corresponding Quaternions are: {res.x} {res.y} {res.z} {res.w}")
        return res
    



    def QuaternionatoEulerServiceCallback(self,req,res):
        self.get_logger().info(f"I was requested to convert the quaternions to euler angles {req.x},{req.y},{req.z}and {req.w}")
        (res.roll,res.pitch,res.yaw) = euler_from_quaternion([req.x,req.y,req.z,req.w])
        self.get_logger().info(f"The Corresponding Euler angles are: {res.roll} {res.pitch} {res.yaw}")
        return res

def main():
    rclpy.init()
    angle_converter = AngleConversion()
    rclpy.spin(angle_converter)
    angle_converter.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


