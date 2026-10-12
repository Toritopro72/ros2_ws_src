// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robx7_interfaces/srv/detail/check_system__functions.h"
#include "robx7_interfaces/srv/detail/check_system__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckSystem_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Request_type_support_ids_t;

static const _CheckSystem_Request_type_support_ids_t _CheckSystem_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, srv, CheckSystem_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, srv, CheckSystem_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Request>()
{
  return &::robx7_interfaces::srv::rosidl_typesupport_cpp::CheckSystem_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robx7_interfaces, srv, CheckSystem_Request)() {
  return get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__functions.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckSystem_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Response_type_support_ids_t;

static const _CheckSystem_Response_type_support_ids_t _CheckSystem_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, srv, CheckSystem_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, srv, CheckSystem_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Response>()
{
  return &::robx7_interfaces::srv::rosidl_typesupport_cpp::CheckSystem_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robx7_interfaces, srv, CheckSystem_Response)() {
  return get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__functions.h"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckSystem_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_Event_type_support_ids_t;

static const _CheckSystem_Event_type_support_ids_t _CheckSystem_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, srv, CheckSystem_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, srv, CheckSystem_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_hash,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_description,
  &robx7_interfaces__srv__CheckSystem_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Event>()
{
  return &::robx7_interfaces::srv::rosidl_typesupport_cpp::CheckSystem_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robx7_interfaces, srv, CheckSystem_Event)() {
  return get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robx7_interfaces/srv/detail/check_system__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robx7_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckSystem_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckSystem_type_support_ids_t;

static const _CheckSystem_type_support_ids_t _CheckSystem_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, srv, CheckSystem)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, srv, CheckSystem)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckSystem_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robx7_interfaces::srv::CheckSystem_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robx7_interfaces::srv::CheckSystem>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robx7_interfaces::srv::CheckSystem>,
  &robx7_interfaces__srv__CheckSystem__get_type_hash,
  &robx7_interfaces__srv__CheckSystem__get_type_description,
  &robx7_interfaces__srv__CheckSystem__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robx7_interfaces::srv::CheckSystem>()
{
  return &::robx7_interfaces::srv::rosidl_typesupport_cpp::CheckSystem_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robx7_interfaces, srv, CheckSystem)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robx7_interfaces::srv::CheckSystem>();
}

#ifdef __cplusplus
}
#endif
