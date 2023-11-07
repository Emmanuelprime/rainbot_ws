from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import DeclareLaunchArgument,SetEnvironmentVariable,IncludeLaunchDescription
from launch.substitutions import Command,LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory,get_package_prefix
from launch.launch_description_sources import PythonLaunchDescriptionSource



def generate_launch_description():
    #to simulate the robot in gazebo, we need to start the robot publisher node
    model_arg  = DeclareLaunchArgument(
        name = "model",
        default_value=os.path.join(get_package_share_directory("rain_arm_description"),"urdf","rain_arm.urdf.xacro"),
        description="This is the absolute path to your URDF file"
    )
    env_var = SetEnvironmentVariable("GAZEBO_MODEL_PATH",os.path.join(get_package_prefix("rain_arm_description"),"share"))
    robot_description = ParameterValue(Command(["xacro ",LaunchConfiguration("model")]))

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable= "robot_state_publisher",
        parameters=[{"robot_description": robot_description}]
    )
    #we are ading another launch file into this launch file
    start_gazebo_server = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory("gazebo_ros"),"launch","gzserver.launch.py"))
        )

    start_gazebo_client = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory("gazebo_ros"),"launch","gzclient.launch.py"))
        )
    #spawn our robot

    spawn_robot = Node(
        package= "gazebo_ros",
        executable="spawn_entity.py",
        arguments=["-entity","rain_arm","-topic", "robot_description"]
    )

    return LaunchDescription([
        env_var,
        model_arg,
        robot_state_publisher,
        start_gazebo_server,
        start_gazebo_client,
        spawn_robot
    ])