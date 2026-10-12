// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robx7_interfaces:srv/CheckSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/check_system.hpp"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_HPP_
#define ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Request __attribute__((deprecated))
#else
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Request __declspec(deprecated)
#endif

namespace robx7_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSystem_Request_
{
  using Type = CheckSystem_Request_<ContainerAllocator>;

  explicit CheckSystem_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CheckSystem_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Request
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Request
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSystem_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSystem_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSystem_Request_

// alias to use template instance with default allocator
using CheckSystem_Request =
  robx7_interfaces::srv::CheckSystem_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robx7_interfaces


#ifndef _WIN32
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Response __attribute__((deprecated))
#else
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Response __declspec(deprecated)
#endif

namespace robx7_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSystem_Response_
{
  using Type = CheckSystem_Response_<ContainerAllocator>;

  explicit CheckSystem_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seguro = false;
      this->mensaje = "";
    }
  }

  explicit CheckSystem_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mensaje(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seguro = false;
      this->mensaje = "";
    }
  }

  // field types and members
  using _seguro_type =
    bool;
  _seguro_type seguro;
  using _mensaje_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mensaje_type mensaje;

  // setters for named parameter idiom
  Type & set__seguro(
    const bool & _arg)
  {
    this->seguro = _arg;
    return *this;
  }
  Type & set__mensaje(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mensaje = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Response
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Response
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSystem_Response_ & other) const
  {
    if (this->seguro != other.seguro) {
      return false;
    }
    if (this->mensaje != other.mensaje) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSystem_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSystem_Response_

// alias to use template instance with default allocator
using CheckSystem_Response =
  robx7_interfaces::srv::CheckSystem_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robx7_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Event __attribute__((deprecated))
#else
# define DEPRECATED__robx7_interfaces__srv__CheckSystem_Event __declspec(deprecated)
#endif

namespace robx7_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSystem_Event_
{
  using Type = CheckSystem_Event_<ContainerAllocator>;

  explicit CheckSystem_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CheckSystem_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robx7_interfaces::srv::CheckSystem_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robx7_interfaces::srv::CheckSystem_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Event
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robx7_interfaces__srv__CheckSystem_Event
    std::shared_ptr<robx7_interfaces::srv::CheckSystem_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSystem_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSystem_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSystem_Event_

// alias to use template instance with default allocator
using CheckSystem_Event =
  robx7_interfaces::srv::CheckSystem_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robx7_interfaces

namespace robx7_interfaces
{

namespace srv
{

struct CheckSystem
{
  using Request = robx7_interfaces::srv::CheckSystem_Request;
  using Response = robx7_interfaces::srv::CheckSystem_Response;
  using Event = robx7_interfaces::srv::CheckSystem_Event;
};

}  // namespace srv

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__SRV__DETAIL__CHECK_SYSTEM__STRUCT_HPP_
