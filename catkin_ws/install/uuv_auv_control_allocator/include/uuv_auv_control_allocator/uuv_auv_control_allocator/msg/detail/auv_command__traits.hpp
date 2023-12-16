// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_auv_control_allocator/msg/detail/auv_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'command'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace uuv_auv_control_allocator
{

namespace msg
{

inline void to_flow_style_yaml(
  const AUVCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: surge_speed
  {
    out << "surge_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_speed, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AUVCommand & msg,
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

  // member: surge_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_speed, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AUVCommand & msg, bool use_flow_style = false)
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

}  // namespace uuv_auv_control_allocator

namespace rosidl_generator_traits
{

[[deprecated("use uuv_auv_control_allocator::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_auv_control_allocator::msg::AUVCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_auv_control_allocator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_auv_control_allocator::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_auv_control_allocator::msg::AUVCommand & msg)
{
  return uuv_auv_control_allocator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_auv_control_allocator::msg::AUVCommand>()
{
  return "uuv_auv_control_allocator::msg::AUVCommand";
}

template<>
inline const char * name<uuv_auv_control_allocator::msg::AUVCommand>()
{
  return "uuv_auv_control_allocator/msg/AUVCommand";
}

template<>
struct has_fixed_size<uuv_auv_control_allocator::msg::AUVCommand>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Wrench>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_auv_control_allocator::msg::AUVCommand>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Wrench>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_auv_control_allocator::msg::AUVCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_
