// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rain_arm_msgs:srv/QuarternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef RAIN_ARM_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__BUILDER_HPP_
#define RAIN_ARM_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rain_arm_msgs/srv/detail/quarternion_to_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rain_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_QuarternionToEuler_Request_w
{
public:
  explicit Init_QuarternionToEuler_Request_w(::rain_arm_msgs::srv::QuarternionToEuler_Request & msg)
  : msg_(msg)
  {}
  ::rain_arm_msgs::srv::QuarternionToEuler_Request w(::rain_arm_msgs::srv::QuarternionToEuler_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Request msg_;
};

class Init_QuarternionToEuler_Request_z
{
public:
  explicit Init_QuarternionToEuler_Request_z(::rain_arm_msgs::srv::QuarternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuarternionToEuler_Request_w z(::rain_arm_msgs::srv::QuarternionToEuler_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_QuarternionToEuler_Request_w(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Request msg_;
};

class Init_QuarternionToEuler_Request_y
{
public:
  explicit Init_QuarternionToEuler_Request_y(::rain_arm_msgs::srv::QuarternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuarternionToEuler_Request_z y(::rain_arm_msgs::srv::QuarternionToEuler_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_QuarternionToEuler_Request_z(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Request msg_;
};

class Init_QuarternionToEuler_Request_x
{
public:
  Init_QuarternionToEuler_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuarternionToEuler_Request_y x(::rain_arm_msgs::srv::QuarternionToEuler_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_QuarternionToEuler_Request_y(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rain_arm_msgs::srv::QuarternionToEuler_Request>()
{
  return rain_arm_msgs::srv::builder::Init_QuarternionToEuler_Request_x();
}

}  // namespace rain_arm_msgs


namespace rain_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_QuarternionToEuler_Response_yaw
{
public:
  explicit Init_QuarternionToEuler_Response_yaw(::rain_arm_msgs::srv::QuarternionToEuler_Response & msg)
  : msg_(msg)
  {}
  ::rain_arm_msgs::srv::QuarternionToEuler_Response yaw(::rain_arm_msgs::srv::QuarternionToEuler_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Response msg_;
};

class Init_QuarternionToEuler_Response_pitch
{
public:
  explicit Init_QuarternionToEuler_Response_pitch(::rain_arm_msgs::srv::QuarternionToEuler_Response & msg)
  : msg_(msg)
  {}
  Init_QuarternionToEuler_Response_yaw pitch(::rain_arm_msgs::srv::QuarternionToEuler_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuarternionToEuler_Response_yaw(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Response msg_;
};

class Init_QuarternionToEuler_Response_roll
{
public:
  Init_QuarternionToEuler_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuarternionToEuler_Response_pitch roll(::rain_arm_msgs::srv::QuarternionToEuler_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuarternionToEuler_Response_pitch(msg_);
  }

private:
  ::rain_arm_msgs::srv::QuarternionToEuler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rain_arm_msgs::srv::QuarternionToEuler_Response>()
{
  return rain_arm_msgs::srv::builder::Init_QuarternionToEuler_Response_roll();
}

}  // namespace rain_arm_msgs

#endif  // RAIN_ARM_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__BUILDER_HPP_
