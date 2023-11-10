// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rain_arm_msgs:srv/EulerToQuarternion.idl
// generated code does not contain a copyright notice

#ifndef RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__BUILDER_HPP_
#define RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rain_arm_msgs/srv/detail/euler_to_quarternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rain_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_EulerToQuarternion_Request_yaw
{
public:
  explicit Init_EulerToQuarternion_Request_yaw(::rain_arm_msgs::srv::EulerToQuarternion_Request & msg)
  : msg_(msg)
  {}
  ::rain_arm_msgs::srv::EulerToQuarternion_Request yaw(::rain_arm_msgs::srv::EulerToQuarternion_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Request msg_;
};

class Init_EulerToQuarternion_Request_pitch
{
public:
  explicit Init_EulerToQuarternion_Request_pitch(::rain_arm_msgs::srv::EulerToQuarternion_Request & msg)
  : msg_(msg)
  {}
  Init_EulerToQuarternion_Request_yaw pitch(::rain_arm_msgs::srv::EulerToQuarternion_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerToQuarternion_Request_yaw(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Request msg_;
};

class Init_EulerToQuarternion_Request_roll
{
public:
  Init_EulerToQuarternion_Request_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuarternion_Request_pitch roll(::rain_arm_msgs::srv::EulerToQuarternion_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EulerToQuarternion_Request_pitch(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rain_arm_msgs::srv::EulerToQuarternion_Request>()
{
  return rain_arm_msgs::srv::builder::Init_EulerToQuarternion_Request_roll();
}

}  // namespace rain_arm_msgs


namespace rain_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_EulerToQuarternion_Response_w
{
public:
  explicit Init_EulerToQuarternion_Response_w(::rain_arm_msgs::srv::EulerToQuarternion_Response & msg)
  : msg_(msg)
  {}
  ::rain_arm_msgs::srv::EulerToQuarternion_Response w(::rain_arm_msgs::srv::EulerToQuarternion_Response::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Response msg_;
};

class Init_EulerToQuarternion_Response_z
{
public:
  explicit Init_EulerToQuarternion_Response_z(::rain_arm_msgs::srv::EulerToQuarternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuarternion_Response_w z(::rain_arm_msgs::srv::EulerToQuarternion_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EulerToQuarternion_Response_w(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Response msg_;
};

class Init_EulerToQuarternion_Response_y
{
public:
  explicit Init_EulerToQuarternion_Response_y(::rain_arm_msgs::srv::EulerToQuarternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuarternion_Response_z y(::rain_arm_msgs::srv::EulerToQuarternion_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EulerToQuarternion_Response_z(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Response msg_;
};

class Init_EulerToQuarternion_Response_x
{
public:
  Init_EulerToQuarternion_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuarternion_Response_y x(::rain_arm_msgs::srv::EulerToQuarternion_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EulerToQuarternion_Response_y(msg_);
  }

private:
  ::rain_arm_msgs::srv::EulerToQuarternion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rain_arm_msgs::srv::EulerToQuarternion_Response>()
{
  return rain_arm_msgs::srv::builder::Init_EulerToQuarternion_Response_x();
}

}  // namespace rain_arm_msgs

#endif  // RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__BUILDER_HPP_
