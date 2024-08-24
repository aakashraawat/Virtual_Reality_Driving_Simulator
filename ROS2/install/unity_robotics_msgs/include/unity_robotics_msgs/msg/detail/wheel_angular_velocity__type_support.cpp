// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_msgs:msg/WheelAngularVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unity_robotics_msgs/msg/detail/wheel_angular_velocity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unity_robotics_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelAngularVelocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unity_robotics_msgs::msg::WheelAngularVelocity(_init);
}

void WheelAngularVelocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unity_robotics_msgs::msg::WheelAngularVelocity *>(message_memory);
  typed_message->~WheelAngularVelocity();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelAngularVelocity_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs::msg::WheelAngularVelocity, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs::msg::WheelAngularVelocity, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs::msg::WheelAngularVelocity, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelAngularVelocity_message_members = {
  "unity_robotics_msgs::msg",  // message namespace
  "WheelAngularVelocity",  // message name
  3,  // number of fields
  sizeof(unity_robotics_msgs::msg::WheelAngularVelocity),
  WheelAngularVelocity_message_member_array,  // message members
  WheelAngularVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelAngularVelocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelAngularVelocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelAngularVelocity_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unity_robotics_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_robotics_msgs::msg::WheelAngularVelocity>()
{
  return &::unity_robotics_msgs::msg::rosidl_typesupport_introspection_cpp::WheelAngularVelocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unity_robotics_msgs, msg, WheelAngularVelocity)() {
  return &::unity_robotics_msgs::msg::rosidl_typesupport_introspection_cpp::WheelAngularVelocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
