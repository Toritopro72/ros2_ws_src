// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/check_system.h"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_H_
#define ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CheckSystem in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__CheckSystem_Request
{
  uint8_t structure_needs_at_least_one_member;
} robx7_interfaces__srv__CheckSystem_Request;

// Struct for a sequence of robx7_interfaces__srv__CheckSystem_Request.
typedef struct robx7_interfaces__srv__CheckSystem_Request__Sequence
{
  robx7_interfaces__srv__CheckSystem_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__CheckSystem_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'mensaje'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckSystem in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__CheckSystem_Response
{
  bool seguro;
  rosidl_runtime_c__String mensaje;
} robx7_interfaces__srv__CheckSystem_Response;

// Struct for a sequence of robx7_interfaces__srv__CheckSystem_Response.
typedef struct robx7_interfaces__srv__CheckSystem_Response__Sequence
{
  robx7_interfaces__srv__CheckSystem_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__CheckSystem_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robx7_interfaces__srv__CheckSystem_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robx7_interfaces__srv__CheckSystem_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CheckSystem in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__CheckSystem_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robx7_interfaces__srv__CheckSystem_Request__Sequence request;
  robx7_interfaces__srv__CheckSystem_Response__Sequence response;
} robx7_interfaces__srv__CheckSystem_Event;

// Struct for a sequence of robx7_interfaces__srv__CheckSystem_Event.
typedef struct robx7_interfaces__srv__CheckSystem_Event__Sequence
{
  robx7_interfaces__srv__CheckSystem_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__CheckSystem_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_H_
