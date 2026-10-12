// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/check_system.hpp"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__BUILDER_HPP_
#define ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robx7_interfaces/srv/detail/check_system__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robx7_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::CheckSystem_Request>()
{
  return ::robx7_interfaces::srv::CheckSystem_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robx7_interfaces


namespace robx7_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckSystem_Response_mensaje
{
public:
  explicit Init_CheckSystem_Response_mensaje(::robx7_interfaces::srv::CheckSystem_Response & msg)
  : msg_(msg)
  {}
  ::robx7_interfaces::srv::CheckSystem_Response mensaje(::robx7_interfaces::srv::CheckSystem_Response::_mensaje_type arg)
  {
    msg_.mensaje = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::srv::CheckSystem_Response msg_;
};

class Init_CheckSystem_Response_seguro
{
public:
  Init_CheckSystem_Response_seguro()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckSystem_Response_mensaje seguro(::robx7_interfaces::srv::CheckSystem_Response::_seguro_type arg)
  {
    msg_.seguro = std::move(arg);
    return Init_CheckSystem_Response_mensaje(msg_);
  }

private:
  ::robx7_interfaces::srv::CheckSystem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::CheckSystem_Response>()
{
  return robx7_interfaces::srv::builder::Init_CheckSystem_Response_seguro();
}

}  // namespace robx7_interfaces


namespace robx7_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckSystem_Event_response
{
public:
  explicit Init_CheckSystem_Event_response(::robx7_interfaces::srv::CheckSystem_Event & msg)
  : msg_(msg)
  {}
  ::robx7_interfaces::srv::CheckSystem_Event response(::robx7_interfaces::srv::CheckSystem_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::srv::CheckSystem_Event msg_;
};

class Init_CheckSystem_Event_request
{
public:
  explicit Init_CheckSystem_Event_request(::robx7_interfaces::srv::CheckSystem_Event & msg)
  : msg_(msg)
  {}
  Init_CheckSystem_Event_response request(::robx7_interfaces::srv::CheckSystem_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CheckSystem_Event_response(msg_);
  }

private:
  ::robx7_interfaces::srv::CheckSystem_Event msg_;
};

class Init_CheckSystem_Event_info
{
public:
  Init_CheckSystem_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckSystem_Event_request info(::robx7_interfaces::srv::CheckSystem_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CheckSystem_Event_request(msg_);
  }

private:
  ::robx7_interfaces::srv::CheckSystem_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::CheckSystem_Event>()
{
  return robx7_interfaces::srv::builder::Init_CheckSystem_Event_info();
}

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__BUILDER_HPP_
