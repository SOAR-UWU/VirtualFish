// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pos'
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped __attribute__((deprecated))
#else
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped __declspec(deprecated)
#endif

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionWithCovarianceStamped_
{
  using Type = PositionWithCovarianceStamped_<ContainerAllocator>;

  explicit PositionWithCovarianceStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pos(_init)
  {
    (void)_init;
  }

  explicit PositionWithCovarianceStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pos_type =
    uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>;
  _pos_type pos;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pos(
    const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionWithCovarianceStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionWithCovarianceStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionWithCovarianceStamped_

// alias to use template instance with default allocator
using PositionWithCovarianceStamped =
  uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_