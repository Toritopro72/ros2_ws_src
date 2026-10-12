// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/check_system.hpp"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__TRAITS_HPP_
#define ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robx7_interfaces/srv/detail/check_system__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robx7_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckSystem_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckSystem_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckSystem_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robx7_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robx7_interfaces::srv::CheckSystem_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robx7_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robx7_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robx7_interfaces::srv::CheckSystem_Request & msg)
{
  return robx7_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robx7_interfaces::srv::CheckSystem_Request>()
{
  return "robx7_interfaces::srv::CheckSystem_Request";
}

template<>
inline const char * name<robx7_interfaces::srv::CheckSystem_Request>()
{
  return "robx7_interfaces/srv/CheckSystem_Request";
}

template<>
struct has_fixed_size<robx7_interfaces::srv::CheckSystem_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robx7_interfaces::srv::CheckSystem_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robx7_interfaces::srv::CheckSystem_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robx7_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckSystem_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: seguro
  {
    out << "seguro: ";
    rosidl_generator_traits::value_to_yaml(msg.seguro, out);
    out << ", ";
  }

  // member: mensaje
  {
    out << "mensaje: ";
    rosidl_generator_traits::value_to_yaml(msg.mensaje, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckSystem_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seguro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seguro: ";
    rosidl_generator_traits::value_to_yaml(msg.seguro, out);
    out << "\n";
  }

  // member: mensaje
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mensaje: ";
    rosidl_generator_traits::value_to_yaml(msg.mensaje, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckSystem_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robx7_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robx7_interfaces::srv::CheckSystem_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robx7_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robx7_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robx7_interfaces::srv::CheckSystem_Response & msg)
{
  return robx7_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robx7_interfaces::srv::CheckSystem_Response>()
{
  return "robx7_interfaces::srv::CheckSystem_Response";
}

template<>
inline const char * name<robx7_interfaces::srv::CheckSystem_Response>()
{
  return "robx7_interfaces/srv/CheckSystem_Response";
}

template<>
struct has_fixed_size<robx7_interfaces::srv::CheckSystem_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robx7_interfaces::srv::CheckSystem_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robx7_interfaces::srv::CheckSystem_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robx7_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckSystem_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckSystem_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckSystem_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robx7_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robx7_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robx7_interfaces::srv::CheckSystem_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robx7_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robx7_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robx7_interfaces::srv::CheckSystem_Event & msg)
{
  return robx7_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robx7_interfaces::srv::CheckSystem_Event>()
{
  return "robx7_interfaces::srv::CheckSystem_Event";
}

template<>
inline const char * name<robx7_interfaces::srv::CheckSystem_Event>()
{
  return "robx7_interfaces/srv/CheckSystem_Event";
}

template<>
struct has_fixed_size<robx7_interfaces::srv::CheckSystem_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robx7_interfaces::srv::CheckSystem_Event>
  : std::integral_constant<bool, has_bounded_size<robx7_interfaces::srv::CheckSystem_Request>::value && has_bounded_size<robx7_interfaces::srv::CheckSystem_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robx7_interfaces::srv::CheckSystem_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robx7_interfaces::srv::CheckSystem>()
{
  return "robx7_interfaces::srv::CheckSystem";
}

template<>
inline const char * name<robx7_interfaces::srv::CheckSystem>()
{
  return "robx7_interfaces/srv/CheckSystem";
}

template<>
struct has_fixed_size<robx7_interfaces::srv::CheckSystem>
  : std::integral_constant<
    bool,
    has_fixed_size<robx7_interfaces::srv::CheckSystem_Request>::value &&
    has_fixed_size<robx7_interfaces::srv::CheckSystem_Response>::value
  >
{
};

template<>
struct has_bounded_size<robx7_interfaces::srv::CheckSystem>
  : std::integral_constant<
    bool,
    has_bounded_size<robx7_interfaces::srv::CheckSystem_Request>::value &&
    has_bounded_size<robx7_interfaces::srv::CheckSystem_Response>::value
  >
{
};

template<>
struct is_service<robx7_interfaces::srv::CheckSystem>
  : std::true_type
{
};

template<>
struct is_service_request<robx7_interfaces::srv::CheckSystem_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robx7_interfaces::srv::CheckSystem_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__TRAITS_HPP_
