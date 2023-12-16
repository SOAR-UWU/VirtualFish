// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'filename'
// Member 'interpolator'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitWaypointsFromFile_Request & msg,
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

  // member: filename
  {
    out << "filename: ";
    to_flow_style_yaml(msg.filename, out);
    out << ", ";
  }

  // member: interpolator
  {
    out << "interpolator: ";
    to_flow_style_yaml(msg.interpolator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitWaypointsFromFile_Request & msg,
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

  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename:\n";
    to_block_style_yaml(msg.filename, out, indentation + 2);
  }

  // member: interpolator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interpolator:\n";
    to_block_style_yaml(msg.interpolator, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitWaypointsFromFile_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitWaypointsFromFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitWaypointsFromFile_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile_Request>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile_Request>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitWaypointsFromFile_Response & msg,
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
  const InitWaypointsFromFile_Response & msg,
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

inline std::string to_yaml(const InitWaypointsFromFile_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitWaypointsFromFile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitWaypointsFromFile_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile_Response>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile_Response>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_
