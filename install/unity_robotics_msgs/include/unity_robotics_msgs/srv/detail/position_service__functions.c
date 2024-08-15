// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice
#include "unity_robotics_msgs/srv/detail/position_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "unity_robotics_msgs/msg/detail/pos_rot__functions.h"

bool
unity_robotics_msgs__srv__PositionService_Request__init(unity_robotics_msgs__srv__PositionService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!unity_robotics_msgs__msg__PosRot__init(&msg->input)) {
    unity_robotics_msgs__srv__PositionService_Request__fini(msg);
    return false;
  }
  return true;
}

void
unity_robotics_msgs__srv__PositionService_Request__fini(unity_robotics_msgs__srv__PositionService_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  unity_robotics_msgs__msg__PosRot__fini(&msg->input);
}

bool
unity_robotics_msgs__srv__PositionService_Request__are_equal(const unity_robotics_msgs__srv__PositionService_Request * lhs, const unity_robotics_msgs__srv__PositionService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!unity_robotics_msgs__msg__PosRot__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
unity_robotics_msgs__srv__PositionService_Request__copy(
  const unity_robotics_msgs__srv__PositionService_Request * input,
  unity_robotics_msgs__srv__PositionService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!unity_robotics_msgs__msg__PosRot__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

unity_robotics_msgs__srv__PositionService_Request *
unity_robotics_msgs__srv__PositionService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Request * msg = (unity_robotics_msgs__srv__PositionService_Request *)allocator.allocate(sizeof(unity_robotics_msgs__srv__PositionService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_msgs__srv__PositionService_Request));
  bool success = unity_robotics_msgs__srv__PositionService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_robotics_msgs__srv__PositionService_Request__destroy(unity_robotics_msgs__srv__PositionService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_robotics_msgs__srv__PositionService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_robotics_msgs__srv__PositionService_Request__Sequence__init(unity_robotics_msgs__srv__PositionService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Request * data = NULL;

  if (size) {
    data = (unity_robotics_msgs__srv__PositionService_Request *)allocator.zero_allocate(size, sizeof(unity_robotics_msgs__srv__PositionService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_msgs__srv__PositionService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_msgs__srv__PositionService_Request__fini(&data[i - 1]);
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
unity_robotics_msgs__srv__PositionService_Request__Sequence__fini(unity_robotics_msgs__srv__PositionService_Request__Sequence * array)
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
      unity_robotics_msgs__srv__PositionService_Request__fini(&array->data[i]);
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

unity_robotics_msgs__srv__PositionService_Request__Sequence *
unity_robotics_msgs__srv__PositionService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Request__Sequence * array = (unity_robotics_msgs__srv__PositionService_Request__Sequence *)allocator.allocate(sizeof(unity_robotics_msgs__srv__PositionService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_msgs__srv__PositionService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_robotics_msgs__srv__PositionService_Request__Sequence__destroy(unity_robotics_msgs__srv__PositionService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_robotics_msgs__srv__PositionService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_robotics_msgs__srv__PositionService_Request__Sequence__are_equal(const unity_robotics_msgs__srv__PositionService_Request__Sequence * lhs, const unity_robotics_msgs__srv__PositionService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_robotics_msgs__srv__PositionService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_robotics_msgs__srv__PositionService_Request__Sequence__copy(
  const unity_robotics_msgs__srv__PositionService_Request__Sequence * input,
  unity_robotics_msgs__srv__PositionService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_robotics_msgs__srv__PositionService_Request);
    unity_robotics_msgs__srv__PositionService_Request * data =
      (unity_robotics_msgs__srv__PositionService_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_robotics_msgs__srv__PositionService_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unity_robotics_msgs__srv__PositionService_Request__fini(&data[i]);
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
    if (!unity_robotics_msgs__srv__PositionService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
// already included above
// #include "unity_robotics_msgs/msg/detail/pos_rot__functions.h"

bool
unity_robotics_msgs__srv__PositionService_Response__init(unity_robotics_msgs__srv__PositionService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!unity_robotics_msgs__msg__PosRot__init(&msg->output)) {
    unity_robotics_msgs__srv__PositionService_Response__fini(msg);
    return false;
  }
  return true;
}

void
unity_robotics_msgs__srv__PositionService_Response__fini(unity_robotics_msgs__srv__PositionService_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  unity_robotics_msgs__msg__PosRot__fini(&msg->output);
}

bool
unity_robotics_msgs__srv__PositionService_Response__are_equal(const unity_robotics_msgs__srv__PositionService_Response * lhs, const unity_robotics_msgs__srv__PositionService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (!unity_robotics_msgs__msg__PosRot__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
unity_robotics_msgs__srv__PositionService_Response__copy(
  const unity_robotics_msgs__srv__PositionService_Response * input,
  unity_robotics_msgs__srv__PositionService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  if (!unity_robotics_msgs__msg__PosRot__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

unity_robotics_msgs__srv__PositionService_Response *
unity_robotics_msgs__srv__PositionService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Response * msg = (unity_robotics_msgs__srv__PositionService_Response *)allocator.allocate(sizeof(unity_robotics_msgs__srv__PositionService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_msgs__srv__PositionService_Response));
  bool success = unity_robotics_msgs__srv__PositionService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_robotics_msgs__srv__PositionService_Response__destroy(unity_robotics_msgs__srv__PositionService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_robotics_msgs__srv__PositionService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_robotics_msgs__srv__PositionService_Response__Sequence__init(unity_robotics_msgs__srv__PositionService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Response * data = NULL;

  if (size) {
    data = (unity_robotics_msgs__srv__PositionService_Response *)allocator.zero_allocate(size, sizeof(unity_robotics_msgs__srv__PositionService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_msgs__srv__PositionService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_msgs__srv__PositionService_Response__fini(&data[i - 1]);
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
unity_robotics_msgs__srv__PositionService_Response__Sequence__fini(unity_robotics_msgs__srv__PositionService_Response__Sequence * array)
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
      unity_robotics_msgs__srv__PositionService_Response__fini(&array->data[i]);
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

unity_robotics_msgs__srv__PositionService_Response__Sequence *
unity_robotics_msgs__srv__PositionService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_msgs__srv__PositionService_Response__Sequence * array = (unity_robotics_msgs__srv__PositionService_Response__Sequence *)allocator.allocate(sizeof(unity_robotics_msgs__srv__PositionService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_msgs__srv__PositionService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_robotics_msgs__srv__PositionService_Response__Sequence__destroy(unity_robotics_msgs__srv__PositionService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_robotics_msgs__srv__PositionService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_robotics_msgs__srv__PositionService_Response__Sequence__are_equal(const unity_robotics_msgs__srv__PositionService_Response__Sequence * lhs, const unity_robotics_msgs__srv__PositionService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_robotics_msgs__srv__PositionService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_robotics_msgs__srv__PositionService_Response__Sequence__copy(
  const unity_robotics_msgs__srv__PositionService_Response__Sequence * input,
  unity_robotics_msgs__srv__PositionService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_robotics_msgs__srv__PositionService_Response);
    unity_robotics_msgs__srv__PositionService_Response * data =
      (unity_robotics_msgs__srv__PositionService_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_robotics_msgs__srv__PositionService_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          unity_robotics_msgs__srv__PositionService_Response__fini(&data[i]);
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
    if (!unity_robotics_msgs__srv__PositionService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
