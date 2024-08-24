// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_msgs:msg/SteeringAngle.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_H_
#define UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SteeringAngle in the package unity_robotics_msgs.
typedef struct unity_robotics_msgs__msg__SteeringAngle
{
  double x;
  double y;
  double z;
  double w;
} unity_robotics_msgs__msg__SteeringAngle;

// Struct for a sequence of unity_robotics_msgs__msg__SteeringAngle.
typedef struct unity_robotics_msgs__msg__SteeringAngle__Sequence
{
  unity_robotics_msgs__msg__SteeringAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_msgs__msg__SteeringAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_H_
