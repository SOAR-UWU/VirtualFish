// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint'
#include "uuv_control_msgs/msg/detail/waypoint__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoTo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint
  {
    out << "waypoint: ";
    to_flow_style_yaml(msg.waypoint, out);
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << ", ";
  }

  // member: interpolator
  {
    out << "interpolator: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint:\n";
    to_block_style_yaml(msg.waypoint, out, indentation + 2);
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

  // member: interpolator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interpolator: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GoTo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GoTo_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo_Request>()
{
  return "uuv_control_msgs::srv::GoTo_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo_Request>()
{
  return "uuv_control_msgs/srv/GoTo_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GoTo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoTo_Response & msg,
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
  const GoTo_Response & msg,
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

inline std::string to_yaml(const GoTo_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GoTo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GoTo_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo_Response>()
{
  return "uuv_control_msgs::srv::GoTo_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo_Response>()
{
  return "uuv_control_msgs/srv/GoTo_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GoTo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo>()
{
  return "uuv_control_msgs::srv::GoTo";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo>()
{
  return "uuv_control_msgs/srv/GoTo";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GoTo_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GoTo_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GoTo_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GoTo_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GoTo>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GoTo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GoTo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_
