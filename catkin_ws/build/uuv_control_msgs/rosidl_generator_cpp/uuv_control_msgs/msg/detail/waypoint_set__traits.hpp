// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__TRAITS_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/msg/detail/waypoint_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__traits.hpp"

namespace uuv_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
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
  const WaypointSet & msg,
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

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointSet & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::msg::WaypointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::msg::WaypointSet & msg)
{
  return uuv_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::msg::WaypointSet>()
{
  return "uuv_control_msgs::msg::WaypointSet";
}

template<>
inline const char * name<uuv_control_msgs::msg::WaypointSet>()
{
  return "uuv_control_msgs/msg/WaypointSet";
}

template<>
struct has_fixed_size<uuv_control_msgs::msg::WaypointSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::msg::WaypointSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::msg::WaypointSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__TRAITS_HPP_
