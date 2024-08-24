// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unity_robotics_msgs:msg/SteeringAngle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unity_robotics_msgs/msg/detail/steering_angle__rosidl_typesupport_introspection_c.h"
#include "unity_robotics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unity_robotics_msgs/msg/detail/steering_angle__functions.h"
#include "unity_robotics_msgs/msg/detail/steering_angle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_msgs__msg__SteeringAngle__init(message_memory);
}

void SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_fini_function(void * message_memory)
{
  unity_robotics_msgs__msg__SteeringAngle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs__msg__SteeringAngle, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs__msg__SteeringAngle, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs__msg__SteeringAngle, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_msgs__msg__SteeringAngle, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_members = {
  "unity_robotics_msgs__msg",  // message namespace
  "SteeringAngle",  // message name
  4,  // number of fields
  sizeof(unity_robotics_msgs__msg__SteeringAngle),
  SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_member_array,  // message members
  SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_type_support_handle = {
  0,
  &SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_msgs, msg, SteeringAngle)() {
  if (!SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_type_support_handle.typesupport_identifier) {
    SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SteeringAngle__rosidl_typesupport_introspection_c__SteeringAngle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
