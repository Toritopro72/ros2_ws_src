// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice
#include "robx7_interfaces/srv/detail/check_system__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robx7_interfaces__srv__CheckSystem_Request__init(robx7_interfaces__srv__CheckSystem_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robx7_interfaces__srv__CheckSystem_Request__fini(robx7_interfaces__srv__CheckSystem_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
robx7_interfaces__srv__CheckSystem_Request__are_equal(const robx7_interfaces__srv__CheckSystem_Request * lhs, const robx7_interfaces__srv__CheckSystem_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Request__copy(
  const robx7_interfaces__srv__CheckSystem_Request * input,
  robx7_interfaces__srv__CheckSystem_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

robx7_interfaces__srv__CheckSystem_Request *
robx7_interfaces__srv__CheckSystem_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Request * msg = (robx7_interfaces__srv__CheckSystem_Request *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robx7_interfaces__srv__CheckSystem_Request));
  bool success = robx7_interfaces__srv__CheckSystem_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robx7_interfaces__srv__CheckSystem_Request__destroy(robx7_interfaces__srv__CheckSystem_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robx7_interfaces__srv__CheckSystem_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robx7_interfaces__srv__CheckSystem_Request__Sequence__init(robx7_interfaces__srv__CheckSystem_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Request)) {
      return false;
    }
    data = (robx7_interfaces__srv__CheckSystem_Request *)allocator.zero_allocate(size, sizeof(robx7_interfaces__srv__CheckSystem_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robx7_interfaces__srv__CheckSystem_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robx7_interfaces__srv__CheckSystem_Request__fini(&data[i - 1]);
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
robx7_interfaces__srv__CheckSystem_Request__Sequence__fini(robx7_interfaces__srv__CheckSystem_Request__Sequence * array)
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
      robx7_interfaces__srv__CheckSystem_Request__fini(&array->data[i]);
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

robx7_interfaces__srv__CheckSystem_Request__Sequence *
robx7_interfaces__srv__CheckSystem_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Request__Sequence * array = (robx7_interfaces__srv__CheckSystem_Request__Sequence *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robx7_interfaces__srv__CheckSystem_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robx7_interfaces__srv__CheckSystem_Request__Sequence__destroy(robx7_interfaces__srv__CheckSystem_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robx7_interfaces__srv__CheckSystem_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robx7_interfaces__srv__CheckSystem_Request__Sequence__are_equal(const robx7_interfaces__srv__CheckSystem_Request__Sequence * lhs, const robx7_interfaces__srv__CheckSystem_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Request__Sequence__copy(
  const robx7_interfaces__srv__CheckSystem_Request__Sequence * input,
  robx7_interfaces__srv__CheckSystem_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robx7_interfaces__srv__CheckSystem_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robx7_interfaces__srv__CheckSystem_Request * data =
      (robx7_interfaces__srv__CheckSystem_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robx7_interfaces__srv__CheckSystem_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robx7_interfaces__srv__CheckSystem_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `mensaje`
#include "rosidl_runtime_c/string_functions.h"

bool
robx7_interfaces__srv__CheckSystem_Response__init(robx7_interfaces__srv__CheckSystem_Response * msg)
{
  if (!msg) {
    return false;
  }
  // seguro
  // mensaje
  if (!rosidl_runtime_c__String__init(&msg->mensaje)) {
    robx7_interfaces__srv__CheckSystem_Response__fini(msg);
    return false;
  }
  return true;
}

void
robx7_interfaces__srv__CheckSystem_Response__fini(robx7_interfaces__srv__CheckSystem_Response * msg)
{
  if (!msg) {
    return;
  }
  // seguro
  // mensaje
  rosidl_runtime_c__String__fini(&msg->mensaje);
}

bool
robx7_interfaces__srv__CheckSystem_Response__are_equal(const robx7_interfaces__srv__CheckSystem_Response * lhs, const robx7_interfaces__srv__CheckSystem_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seguro
  if (lhs->seguro != rhs->seguro) {
    return false;
  }
  // mensaje
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mensaje), &(rhs->mensaje)))
  {
    return false;
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Response__copy(
  const robx7_interfaces__srv__CheckSystem_Response * input,
  robx7_interfaces__srv__CheckSystem_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // seguro
  output->seguro = input->seguro;
  // mensaje
  if (!rosidl_runtime_c__String__copy(
      &(input->mensaje), &(output->mensaje)))
  {
    return false;
  }
  return true;
}

robx7_interfaces__srv__CheckSystem_Response *
robx7_interfaces__srv__CheckSystem_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Response * msg = (robx7_interfaces__srv__CheckSystem_Response *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robx7_interfaces__srv__CheckSystem_Response));
  bool success = robx7_interfaces__srv__CheckSystem_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robx7_interfaces__srv__CheckSystem_Response__destroy(robx7_interfaces__srv__CheckSystem_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robx7_interfaces__srv__CheckSystem_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robx7_interfaces__srv__CheckSystem_Response__Sequence__init(robx7_interfaces__srv__CheckSystem_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Response)) {
      return false;
    }
    data = (robx7_interfaces__srv__CheckSystem_Response *)allocator.zero_allocate(size, sizeof(robx7_interfaces__srv__CheckSystem_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robx7_interfaces__srv__CheckSystem_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robx7_interfaces__srv__CheckSystem_Response__fini(&data[i - 1]);
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
robx7_interfaces__srv__CheckSystem_Response__Sequence__fini(robx7_interfaces__srv__CheckSystem_Response__Sequence * array)
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
      robx7_interfaces__srv__CheckSystem_Response__fini(&array->data[i]);
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

robx7_interfaces__srv__CheckSystem_Response__Sequence *
robx7_interfaces__srv__CheckSystem_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Response__Sequence * array = (robx7_interfaces__srv__CheckSystem_Response__Sequence *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robx7_interfaces__srv__CheckSystem_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robx7_interfaces__srv__CheckSystem_Response__Sequence__destroy(robx7_interfaces__srv__CheckSystem_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robx7_interfaces__srv__CheckSystem_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robx7_interfaces__srv__CheckSystem_Response__Sequence__are_equal(const robx7_interfaces__srv__CheckSystem_Response__Sequence * lhs, const robx7_interfaces__srv__CheckSystem_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Response__Sequence__copy(
  const robx7_interfaces__srv__CheckSystem_Response__Sequence * input,
  robx7_interfaces__srv__CheckSystem_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robx7_interfaces__srv__CheckSystem_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robx7_interfaces__srv__CheckSystem_Response * data =
      (robx7_interfaces__srv__CheckSystem_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robx7_interfaces__srv__CheckSystem_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robx7_interfaces__srv__CheckSystem_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "robx7_interfaces/srv/detail/check_system__functions.h"

bool
robx7_interfaces__srv__CheckSystem_Event__init(robx7_interfaces__srv__CheckSystem_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robx7_interfaces__srv__CheckSystem_Event__fini(msg);
    return false;
  }
  // request
  if (!robx7_interfaces__srv__CheckSystem_Request__Sequence__init(&msg->request, 0)) {
    robx7_interfaces__srv__CheckSystem_Event__fini(msg);
    return false;
  }
  // response
  if (!robx7_interfaces__srv__CheckSystem_Response__Sequence__init(&msg->response, 0)) {
    robx7_interfaces__srv__CheckSystem_Event__fini(msg);
    return false;
  }
  return true;
}

void
robx7_interfaces__srv__CheckSystem_Event__fini(robx7_interfaces__srv__CheckSystem_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robx7_interfaces__srv__CheckSystem_Request__Sequence__fini(&msg->request);
  // response
  robx7_interfaces__srv__CheckSystem_Response__Sequence__fini(&msg->response);
}

bool
robx7_interfaces__srv__CheckSystem_Event__are_equal(const robx7_interfaces__srv__CheckSystem_Event * lhs, const robx7_interfaces__srv__CheckSystem_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!robx7_interfaces__srv__CheckSystem_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robx7_interfaces__srv__CheckSystem_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Event__copy(
  const robx7_interfaces__srv__CheckSystem_Event * input,
  robx7_interfaces__srv__CheckSystem_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!robx7_interfaces__srv__CheckSystem_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robx7_interfaces__srv__CheckSystem_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robx7_interfaces__srv__CheckSystem_Event *
robx7_interfaces__srv__CheckSystem_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Event * msg = (robx7_interfaces__srv__CheckSystem_Event *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robx7_interfaces__srv__CheckSystem_Event));
  bool success = robx7_interfaces__srv__CheckSystem_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robx7_interfaces__srv__CheckSystem_Event__destroy(robx7_interfaces__srv__CheckSystem_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robx7_interfaces__srv__CheckSystem_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robx7_interfaces__srv__CheckSystem_Event__Sequence__init(robx7_interfaces__srv__CheckSystem_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Event)) {
      return false;
    }
    data = (robx7_interfaces__srv__CheckSystem_Event *)allocator.zero_allocate(size, sizeof(robx7_interfaces__srv__CheckSystem_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robx7_interfaces__srv__CheckSystem_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robx7_interfaces__srv__CheckSystem_Event__fini(&data[i - 1]);
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
robx7_interfaces__srv__CheckSystem_Event__Sequence__fini(robx7_interfaces__srv__CheckSystem_Event__Sequence * array)
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
      robx7_interfaces__srv__CheckSystem_Event__fini(&array->data[i]);
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

robx7_interfaces__srv__CheckSystem_Event__Sequence *
robx7_interfaces__srv__CheckSystem_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__srv__CheckSystem_Event__Sequence * array = (robx7_interfaces__srv__CheckSystem_Event__Sequence *)allocator.allocate(sizeof(robx7_interfaces__srv__CheckSystem_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robx7_interfaces__srv__CheckSystem_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robx7_interfaces__srv__CheckSystem_Event__Sequence__destroy(robx7_interfaces__srv__CheckSystem_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robx7_interfaces__srv__CheckSystem_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robx7_interfaces__srv__CheckSystem_Event__Sequence__are_equal(const robx7_interfaces__srv__CheckSystem_Event__Sequence * lhs, const robx7_interfaces__srv__CheckSystem_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robx7_interfaces__srv__CheckSystem_Event__Sequence__copy(
  const robx7_interfaces__srv__CheckSystem_Event__Sequence * input,
  robx7_interfaces__srv__CheckSystem_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robx7_interfaces__srv__CheckSystem_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robx7_interfaces__srv__CheckSystem_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robx7_interfaces__srv__CheckSystem_Event * data =
      (robx7_interfaces__srv__CheckSystem_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robx7_interfaces__srv__CheckSystem_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robx7_interfaces__srv__CheckSystem_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robx7_interfaces__srv__CheckSystem_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
