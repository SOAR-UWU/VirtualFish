// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionWithCovariance & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const PositionWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionWithCovariance & msg, bool use_flow_style = false)
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
  const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & msg)
{
  return uuv_sensor_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/PositionWithCovariance";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_
