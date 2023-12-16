// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/GoToIncremental.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'step'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoToIncremental_Request_
{
  using Type = GoToIncremental_Request_<ContainerAllocator>;

  explicit GoToIncremental_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : step(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_forward_speed = 0.0;
      this->interpolator = "";
    }
  }

  explicit GoToIncremental_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : step(_alloc, _init),
    interpolator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_forward_speed = 0.0;
      this->interpolator = "";
    }
  }

  // field types and members
  using _step_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _step_type step;
  using _max_forward_speed_type =
    double;
  _max_forward_speed_type max_forward_speed;
  using _interpolator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _interpolator_type interpolator;

  // setters for named parameter idiom
  Type & set__step(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->step = _arg;
    return *this;
  }
  Type & set__max_forward_speed(
    const double & _arg)
  {
    this->max_forward_speed = _arg;
    return *this;
  }
  Type & set__interpolator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->interpolator = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LIPB;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CUBIC;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DUBINS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LINEAR;

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Request
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Request
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToIncremental_Request_ & other) const
  {
    if (this->step != other.step) {
      return false;
    }
    if (this->max_forward_speed != other.max_forward_speed) {
      return false;
    }
    if (this->interpolator != other.interpolator) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToIncremental_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToIncremental_Request_

// alias to use template instance with default allocator
using GoToIncremental_Request =
  uuv_control_msgs::srv::GoToIncremental_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GoToIncremental_Request_<ContainerAllocator>::LIPB = "lipb";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GoToIncremental_Request_<ContainerAllocator>::CUBIC = "cubic";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GoToIncremental_Request_<ContainerAllocator>::DUBINS = "dubins";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GoToIncremental_Request_<ContainerAllocator>::LINEAR = "linear";

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoToIncremental_Response_
{
  using Type = GoToIncremental_Response_<ContainerAllocator>;

  explicit GoToIncremental_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GoToIncremental_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Response
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GoToIncremental_Response
    std::shared_ptr<uuv_control_msgs::srv::GoToIncremental_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToIncremental_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToIncremental_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToIncremental_Response_

// alias to use template instance with default allocator
using GoToIncremental_Response =
  uuv_control_msgs::srv::GoToIncremental_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct GoToIncremental
{
  using Request = uuv_control_msgs::srv::GoToIncremental_Request;
  using Response = uuv_control_msgs::srv::GoToIncremental_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__STRUCT_HPP_
