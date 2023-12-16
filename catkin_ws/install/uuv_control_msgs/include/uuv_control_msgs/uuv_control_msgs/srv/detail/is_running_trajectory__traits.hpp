// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/IsRunningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/is_running_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsRunningTrajectory_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsRunningTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsRunningTrajectory_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::IsRunningTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::IsRunningTrajectory_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory_Request>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory_Request>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsRunningTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsRunningTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsRunningTrajectory_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::IsRunningTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::IsRunningTrajectory_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory_Response>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory_Response>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_
