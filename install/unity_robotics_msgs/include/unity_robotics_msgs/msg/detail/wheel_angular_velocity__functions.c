// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_msgs:msg/WheelAngularVelocity.idl
// generated code does not contain a copyright notice
#include "unity_robotics_msgs/msg/detail/wheel_angular_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unity_robotics_msgs__msg__WheelAngularVelocity__init(unity_robotics_msgs__msg__WheelAngularVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
unity_robotics_msgs__msg__WheelAngularVelocity__fini(unity_robotics_msgs__msg__WheelAngularVelocity * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
unity_robotics_msgs__msg__WheelAngularVelocity__are_equal(const unity_robotics_msgs__msg__WheelAngularVelocity * lhs, const unity_robotics_msgs__msg__WheelAngularVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
unity_robotics_msgs__msg__WheelAngularVelocity__copy(
  const unity_robotics_msgs__msg__WheelAngularVelocity * input,
  unity_robotics_msgs__msg__WheelAngularVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

unity_robotics_msgs__msg__WheelAngularVelocity *
unity_robotics_msgs__msg__WheelAngularVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__WheelAngularVelocity * msg = (unity_robotics_msgs__msg__WheelAngularVelocity *)allocator.allocate(sizeof(unity_robotics_msgs__msg__WheelAngularVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_msgs__msg__WheelAngularVelocity));
  bool success = unity_robotics_msgs__msg__WheelAngularVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_robotics_msgs__msg__WheelAngularVelocity__destroy(unity_robotics_msgs__msg__WheelAngularVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_robotics_msgs__msg__WheelAngularVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__init(unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__WheelAngularVelocity * data = NULL;

  if (size) {
    data = (unity_robotics_msgs__msg__WheelAngularVelocity *)allocator.zero_allocate(size, sizeof(unity_robotics_msgs__msg__WheelAngularVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_msgs__msg__WheelAngularVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_msgs__msg__WheelAngularVelocity__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__fini(unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_msgs__msg__WheelAngularVelocity__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unity_robotics_msgs__msg__WheelAngularVelocity__Sequence *
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * array = (unity_robotics_msgs__msg__WheelAngularVelocity__Sequence *)allocator.allocate(sizeof(unity_robotics_msgs__msg__WheelAngularVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__destroy(unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__are_equal(const unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * lhs, const unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_robotics_msgs__msg__WheelAngularVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_robotics_msgs__msg__WheelAngularVelocity__Sequence__copy(
  const unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * input,
  unity_robotics_msgs__msg__WheelAngularVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_robotics_msgs__msg__WheelAngularVelocity);
    unity_robotics_msgs__msg__WheelAngularVelocity * data =
      (unity_robotics_msgs__msg__WheelAngularVelocity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_robotics_msgs__msg__WheelAngularVelocity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unity_robotics_msgs__msg__WheelAngularVelocity__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_robotics_msgs__msg__WheelAngularVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
