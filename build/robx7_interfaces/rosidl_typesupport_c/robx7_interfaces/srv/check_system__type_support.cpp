// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robx7_interfaces/srv/detail/check_system__struct.h"
#include "robx7_interfaces/srv/detail/check_system__type_support.h"
#include "robx7_interfaces/srv/detail/check_system__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckSystem_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Request_type_support_ids_t;

static const _CheckSystem_Request_type_support_ids_t _CheckSystem_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckSystem_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckSystem_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckSystem_Request_type_support_symbol_names_t _CheckSystem_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, CheckSystem_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, CheckSystem_Request)),
  }
};

typedef struct _CheckSystem_Request_type_support_data_t
{
  void * data[2];
} _CheckSystem_Request_type_support_data_t;

static _CheckSystem_Request_type_support_data_t _CheckSystem_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckSystem_Request_message_typesupport_map = {
  2,
  "robx7_interfaces",
  &_CheckSystem_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CheckSystem_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CheckSystem_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckSystem_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robx7_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robx7_interfaces, srv, CheckSystem_Request)() {
  return &::robx7_interfaces::srv::rosidl_typesupport_c::CheckSystem_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__type_support.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckSystem_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Response_type_support_ids_t;

static const _CheckSystem_Response_type_support_ids_t _CheckSystem_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckSystem_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckSystem_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckSystem_Response_type_support_symbol_names_t _CheckSystem_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, CheckSystem_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, CheckSystem_Response)),
  }
};

typedef struct _CheckSystem_Response_type_support_data_t
{
  void * data[2];
} _CheckSystem_Response_type_support_data_t;

static _CheckSystem_Response_type_support_data_t _CheckSystem_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckSystem_Response_message_typesupport_map = {
  2,
  "robx7_interfaces",
  &_CheckSystem_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CheckSystem_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CheckSystem_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckSystem_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robx7_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robx7_interfaces, srv, CheckSystem_Response)() {
  return &::robx7_interfaces::srv::rosidl_typesupport_c::CheckSystem_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__type_support.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckSystem_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Event_type_support_ids_t;

static const _CheckSystem_Event_type_support_ids_t _CheckSystem_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckSystem_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckSystem_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckSystem_Event_type_support_symbol_names_t _CheckSystem_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, CheckSystem_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, CheckSystem_Event)),
  }
};

typedef struct _CheckSystem_Event_type_support_data_t
{
  void * data[2];
} _CheckSystem_Event_type_support_data_t;

static _CheckSystem_Event_type_support_data_t _CheckSystem_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckSystem_Event_message_typesupport_map = {
  2,
  "robx7_interfaces",
  &_CheckSystem_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CheckSystem_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CheckSystem_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckSystem_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robx7_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robx7_interfaces, srv, CheckSystem_Event)() {
  return &::robx7_interfaces::srv::rosidl_typesupport_c::CheckSystem_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CheckSystem_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_type_support_ids_t;

static const _CheckSystem_type_support_ids_t _CheckSystem_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckSystem_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckSystem_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckSystem_type_support_symbol_names_t _CheckSystem_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, CheckSystem)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, CheckSystem)),
  }
};

typedef struct _CheckSystem_type_support_data_t
{
  void * data[2];
} _CheckSystem_type_support_data_t;

static _CheckSystem_type_support_data_t _CheckSystem_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckSystem_service_typesupport_map = {
  2,
  "robx7_interfaces",
  &_CheckSystem_service_typesupport_ids.typesupport_identifier[0],
  &_CheckSystem_service_typesupport_symbol_names.symbol_name[0],
  &_CheckSystem_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CheckSystem_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CheckSystem_Request_message_type_support_handle,
  &CheckSystem_Response_message_type_support_handle,
  &CheckSystem_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robx7_interfaces,
    srv,
    CheckSystem
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robx7_interfaces,
    srv,
    CheckSystem
  ),
  &robx7_interfaces__srv__CheckSystem__get_type_hash,
  &robx7_interfaces__srv__CheckSystem__get_type_description,
  &robx7_interfaces__srv__CheckSystem__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robx7_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robx7_interfaces, srv, CheckSystem)() {
  return &::robx7_interfaces::srv::rosidl_typesupport_c::CheckSystem_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
