// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_msgs:msg/SteeringAngle.idl
// generated code does not contain a copyright notice
#include "unity_robotics_msgs/msg/detail/steering_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unity_robotics_msgs__msg__SteeringAngle__init(unity_robotics_msgs__msg__SteeringAngle * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // w
  return true;
}

void
unity_robotics_msgs__msg__SteeringAngle__fini(unity_robotics_msgs__msg__SteeringAngle * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

bool
unity_robotics_msgs__msg__SteeringAngle__are_equal(const unity_robotics_msgs__msg__SteeringAngle * lhs, const unity_robotics_msgs__msg__SteeringAngle * rhs)
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
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
unity_robotics_msgs__msg__SteeringAngle__copy(
  const unity_robotics_msgs__msg__SteeringAngle * input,
  unity_robotics_msgs__msg__SteeringAngle * output)
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
  // w
  output->w = input->w;
  return true;
}

unity_robotics_msgs__msg__SteeringAngle *
unity_robotics_msgs__msg__SteeringAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__SteeringAngle * msg = (unity_robotics_msgs__msg__SteeringAngle *)allocator.allocate(sizeof(unity_robotics_msgs__msg__SteeringAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_msgs__msg__SteeringAngle));
  bool success = unity_robotics_msgs__msg__SteeringAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_robotics_msgs__msg__SteeringAngle__destroy(unity_robotics_msgs__msg__SteeringAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_robotics_msgs__msg__SteeringAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_robotics_msgs__msg__SteeringAngle__Sequence__init(unity_robotics_msgs__msg__SteeringAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__SteeringAngle * data = NULL;

  if (size) {
    data = (unity_robotics_msgs__msg__SteeringAngle *)allocator.zero_allocate(size, sizeof(unity_robotics_msgs__msg__SteeringAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_msgs__msg__SteeringAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_msgs__msg__SteeringAngle__fini(&data[i - 1]);
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
unity_robotics_msgs__msg__SteeringAngle__Sequence__fini(unity_robotics_msgs__msg__SteeringAngle__Sequence * array)
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
      unity_robotics_msgs__msg__SteeringAngle__fini(&array->data[i]);
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

unity_robotics_msgs__msg__SteeringAngle__Sequence *
unity_robotics_msgs__msg__SteeringAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__msg__SteeringAngle__Sequence * array = (unity_robotics_msgs__msg__SteeringAngle__Sequence *)allocator.allocate(sizeof(unity_robotics_msgs__msg__SteeringAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_msgs__msg__SteeringAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_robotics_msgs__msg__SteeringAngle__Sequence__destroy(unity_robotics_msgs__msg__SteeringAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_robotics_msgs__msg__SteeringAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_robotics_msgs__msg__SteeringAngle__Sequence__are_equal(const unity_robotics_msgs__msg__SteeringAngle__Sequence * lhs, const unity_robotics_msgs__msg__SteeringAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_robotics_msgs__msg__SteeringAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_robotics_msgs__msg__SteeringAngle__Sequence__copy(
  const unity_robotics_msgs__msg__SteeringAngle__Sequence * input,
  unity_robotics_msgs__msg__SteeringAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_robotics_msgs__msg__SteeringAngle);
    unity_robotics_msgs__msg__SteeringAngle * data =
      (unity_robotics_msgs__msg__SteeringAngle *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_robotics_msgs__msg__SteeringAngle__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unity_robotics_msgs__msg__SteeringAngle__fini(&data[i]);
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
    if (!unity_robotics_msgs__msg__SteeringAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
