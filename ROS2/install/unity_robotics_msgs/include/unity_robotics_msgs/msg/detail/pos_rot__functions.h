// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from unity_robotics_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_MSGS__MSG__DETAIL__POS_ROT__FUNCTIONS_H_
#define UNITY_ROBOTICS_MSGS__MSG__DETAIL__POS_ROT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "unity_robotics_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "unity_robotics_msgs/msg/detail/pos_rot__struct.h"

/// Initialize msg/PosRot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unity_robotics_msgs__msg__PosRot
 * )) before or use
 * unity_robotics_msgs__msg__PosRot__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__init(unity_robotics_msgs__msg__PosRot * msg);

/// Finalize msg/PosRot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
void
unity_robotics_msgs__msg__PosRot__fini(unity_robotics_msgs__msg__PosRot * msg);

/// Create msg/PosRot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unity_robotics_msgs__msg__PosRot__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
unity_robotics_msgs__msg__PosRot *
unity_robotics_msgs__msg__PosRot__create();

/// Destroy msg/PosRot message.
/**
 * It calls
 * unity_robotics_msgs__msg__PosRot__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
void
unity_robotics_msgs__msg__PosRot__destroy(unity_robotics_msgs__msg__PosRot * msg);

/// Check for msg/PosRot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__are_equal(const unity_robotics_msgs__msg__PosRot * lhs, const unity_robotics_msgs__msg__PosRot * rhs);

/// Copy a msg/PosRot message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__copy(
  const unity_robotics_msgs__msg__PosRot * input,
  unity_robotics_msgs__msg__PosRot * output);

/// Initialize array of msg/PosRot messages.
/**
 * It allocates the memory for the number of elements and calls
 * unity_robotics_msgs__msg__PosRot__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__Sequence__init(unity_robotics_msgs__msg__PosRot__Sequence * array, size_t size);

/// Finalize array of msg/PosRot messages.
/**
 * It calls
 * unity_robotics_msgs__msg__PosRot__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
void
unity_robotics_msgs__msg__PosRot__Sequence__fini(unity_robotics_msgs__msg__PosRot__Sequence * array);

/// Create array of msg/PosRot messages.
/**
 * It allocates the memory for the array and calls
 * unity_robotics_msgs__msg__PosRot__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
unity_robotics_msgs__msg__PosRot__Sequence *
unity_robotics_msgs__msg__PosRot__Sequence__create(size_t size);

/// Destroy array of msg/PosRot messages.
/**
 * It calls
 * unity_robotics_msgs__msg__PosRot__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
void
unity_robotics_msgs__msg__PosRot__Sequence__destroy(unity_robotics_msgs__msg__PosRot__Sequence * array);

/// Check for msg/PosRot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__Sequence__are_equal(const unity_robotics_msgs__msg__PosRot__Sequence * lhs, const unity_robotics_msgs__msg__PosRot__Sequence * rhs);

/// Copy an array of msg/PosRot messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_msgs
bool
unity_robotics_msgs__msg__PosRot__Sequence__copy(
  const unity_robotics_msgs__msg__PosRot__Sequence * input,
  unity_robotics_msgs__msg__PosRot__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_MSGS__MSG__DETAIL__POS_ROT__FUNCTIONS_H_
