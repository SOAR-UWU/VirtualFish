// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitRectTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/init_rect_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitRectTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: start_now
  {
    out << "start_now: ";
    rosidl_generator_traits::value_to_yaml(msg.start_now, out);
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: angle_offset
  {
    out << "angle_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_offset, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitRectTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: start_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_now: ";
    rosidl_generator_traits::value_to_yaml(msg.start_now, out);
    out << "\n";
  }

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: angle_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_offset, out);
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

  // member: max_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitRectTrajectory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uuv_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_control_msgs::srv::InitRectTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory_Request>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory_Request>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitRectTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitRectTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitRectTrajectory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uuv_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_control_msgs::srv::InitRectTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitRectTrajectory_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory_Response>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory_Response>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitRectTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_
