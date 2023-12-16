// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace uuv_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << ", ";
  }

  // member: use_fixed_heading
  {
    out << "use_fixed_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_fixed_heading, out);
    out << ", ";
  }

  // member: radius_of_acceptance
  {
    out << "radius_of_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_of_acceptance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
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

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: max_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << "\n";
  }

  // member: heading_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << "\n";
  }

  // member: use_fixed_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_fixed_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.use_fixed_heading, out);
    out << "\n";
  }

  // member: radius_of_acceptance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_of_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_of_acceptance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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

}  // namespace uuv_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_control_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::msg::Waypoint & msg)
{
  return uuv_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::msg::Waypoint>()
{
  return "uuv_control_msgs::msg::Waypoint";
}

template<>
inline const char * name<uuv_control_msgs::msg::Waypoint>()
{
  return "uuv_control_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<uuv_control_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_control_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
