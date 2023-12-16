// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GoToIncremental.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/go_to_incremental__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'step'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToIncremental_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: step
  {
    out << "step: ";
    to_flow_style_yaml(msg.step, out);
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
  const GoToIncremental_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step:\n";
    to_block_style_yaml(msg.step, out, indentation + 2);
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

inline std::string to_yaml(const GoToIncremental_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GoToIncremental_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GoToIncremental_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GoToIncremental_Request>()
{
  return "uuv_control_msgs::srv::GoToIncremental_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoToIncremental_Request>()
{
  return "uuv_control_msgs/srv/GoToIncremental_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoToIncremental_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoToIncremental_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GoToIncremental_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToIncremental_Response & msg,
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
  const GoToIncremental_Response & msg,
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

inline std::string to_yaml(const GoToIncremental_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GoToIncremental_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GoToIncremental_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GoToIncremental_Response>()
{
  return "uuv_control_msgs::srv::GoToIncremental_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoToIncremental_Response>()
{
  return "uuv_control_msgs/srv/GoToIncremental_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoToIncremental_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoToIncremental_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GoToIncremental_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GoToIncremental>()
{
  return "uuv_control_msgs::srv::GoToIncremental";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoToIncremental>()
{
  return "uuv_control_msgs/srv/GoToIncremental";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoToIncremental>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GoToIncremental_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GoToIncremental_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoToIncremental>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GoToIncremental_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GoToIncremental_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GoToIncremental>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GoToIncremental_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GoToIncremental_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__TRAITS_HPP_
