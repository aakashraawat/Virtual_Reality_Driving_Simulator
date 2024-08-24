// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_msgs:msg/SteeringAngle.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__BUILDER_HPP_
#define UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__BUILDER_HPP_

#include "unity_robotics_msgs/msg/detail/steering_angle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringAngle_w
{
public:
  explicit Init_SteeringAngle_w(::unity_robotics_msgs::msg::SteeringAngle & msg)
  : msg_(msg)
  {}
  ::unity_robotics_msgs::msg::SteeringAngle w(::unity_robotics_msgs::msg::SteeringAngle::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_msgs::msg::SteeringAngle msg_;
};

class Init_SteeringAngle_z
{
public:
  explicit Init_SteeringAngle_z(::unity_robotics_msgs::msg::SteeringAngle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngle_w z(::unity_robotics_msgs::msg::SteeringAngle::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SteeringAngle_w(msg_);
  }

private:
  ::unity_robotics_msgs::msg::SteeringAngle msg_;
};

class Init_SteeringAngle_y
{
public:
  explicit Init_SteeringAngle_y(::unity_robotics_msgs::msg::SteeringAngle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngle_z y(::unity_robotics_msgs::msg::SteeringAngle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SteeringAngle_z(msg_);
  }

private:
  ::unity_robotics_msgs::msg::SteeringAngle msg_;
};

class Init_SteeringAngle_x
{
public:
  Init_SteeringAngle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringAngle_y x(::unity_robotics_msgs::msg::SteeringAngle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SteeringAngle_y(msg_);
  }

private:
  ::unity_robotics_msgs::msg::SteeringAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_msgs::msg::SteeringAngle>()
{
  return unity_robotics_msgs::msg::builder::Init_SteeringAngle_x();
}

}  // namespace unity_robotics_msgs

#endif  // UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__BUILDER_HPP_
