// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/hardware_status.hpp"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robx7_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robx7_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperatura
  {
    out << "temperatura: ";
    rosidl_generator_traits::value_to_yaml(msg.temperatura, out);
    out << ", ";
  }

  // member: motores_listos
  {
    out << "motores_listos: ";
    rosidl_generator_traits::value_to_yaml(msg.motores_listos, out);
    out << ", ";
  }

  // member: debug_msg
  {
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperatura
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperatura: ";
    rosidl_generator_traits::value_to_yaml(msg.temperatura, out);
    out << "\n";
  }

  // member: motores_listos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motores_listos: ";
    rosidl_generator_traits::value_to_yaml(msg.motores_listos, out);
    out << "\n";
  }

  // member: debug_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robx7_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robx7_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robx7_interfaces::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  robx7_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robx7_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robx7_interfaces::msg::HardwareStatus & msg)
{
  return robx7_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robx7_interfaces::msg::HardwareStatus>()
{
  return "robx7_interfaces::msg::HardwareStatus";
}

template<>
inline const char * name<robx7_interfaces::msg::HardwareStatus>()
{
  return "robx7_interfaces/msg/HardwareStatus";
}

template<>
struct has_fixed_size<robx7_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robx7_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robx7_interfaces::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
