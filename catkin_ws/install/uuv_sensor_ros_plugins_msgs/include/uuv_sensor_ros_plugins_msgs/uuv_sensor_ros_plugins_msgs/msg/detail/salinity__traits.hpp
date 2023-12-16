// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_sensor_ros_plugins_msgs/msg/detail/salinity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Salinity & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: salinity
  {
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Salinity & msg,
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

  // member: salinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Salinity & msg, bool use_flow_style = false)
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
  const uuv_sensor_ros_plugins_msgs::msg::Salinity & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::msg::Salinity & msg)
{
  return uuv_sensor_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::Salinity>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::Salinity";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::Salinity>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/Salinity";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::Salinity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::Salinity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::Salinity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__TRAITS_HPP_
