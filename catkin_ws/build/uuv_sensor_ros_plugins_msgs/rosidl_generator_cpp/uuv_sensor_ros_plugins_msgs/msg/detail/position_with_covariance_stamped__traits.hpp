// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos'
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__traits.hpp"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionWithCovarianceStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionWithCovarianceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionWithCovarianceStamped & msg, bool use_flow_style = false)
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

}  // namespace uuv_sensor_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped & msg)
{
  return uuv_sensor_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/PositionWithCovarianceStamped";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>::value> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>::value> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
