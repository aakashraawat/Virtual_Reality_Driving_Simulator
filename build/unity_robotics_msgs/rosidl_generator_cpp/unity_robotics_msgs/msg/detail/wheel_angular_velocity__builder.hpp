// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_msgs:msg/WheelAngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_MSGS__MSG__DETAIL__WHEEL_ANGULAR_VELOCITY__BUILDER_HPP_
#define UNITY_ROBOTICS_MSGS__MSG__DETAIL__WHEEL_ANGULAR_VELOCITY__BUILDER_HPP_

#include "unity_robotics_msgs/msg/detail/wheel_angular_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelAngularVelocity_z
{
public:
  explicit Init_WheelAngularVelocity_z(::unity_robotics_msgs::msg::WheelAngularVelocity & msg)
  : msg_(msg)
  {}
  ::unity_robotics_msgs::msg::WheelAngularVelocity z(::unity_robotics_msgs::msg::WheelAngularVelocity::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_msgs::msg::WheelAngularVelocity msg_;
};

class Init_WheelAngularVelocity_y
{
public:
  explicit Init_WheelAngularVelocity_y(::unity_robotics_msgs::msg::WheelAngularVelocity & msg)
  : msg_(msg)
  {}
  Init_WheelAngularVelocity_z y(::unity_robotics_msgs::msg::WheelAngularVelocity::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_WheelAngularVelocity_z(msg_);
  }

private:
  ::unity_robotics_msgs::msg::WheelAngularVelocity msg_;
};

class Init_WheelAngularVelocity_x
{
public:
  Init_WheelAngularVelocity_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelAngularVelocity_y x(::unity_robotics_msgs::msg::WheelAngularVelocity::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_WheelAngularVelocity_y(msg_);
  }

private:
  ::unity_robotics_msgs::msg::WheelAngularVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_msgs::msg::WheelAngularVelocity>()
{
  return unity_robotics_msgs::msg::builder::Init_WheelAngularVelocity_x();
}

}  // namespace unity_robotics_msgs

#endif  // UNITY_ROBOTICS_MSGS__MSG__DETAIL__WHEEL_ANGULAR_VELOCITY__BUILDER_HPP_
