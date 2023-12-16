// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_conversion_fcn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterConversionFcn_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterConversionFcn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterConversionFcn_Request & msg, bool use_flow_style = false)
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

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'fcn'
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterConversionFcn_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: fcn
  {
    out << "fcn: ";
    to_flow_style_yaml(msg.fcn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterConversionFcn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fcn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fcn:\n";
    to_block_style_yaml(msg.fcn, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterConversionFcn_Response & msg, bool use_flow_style = false)
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

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::integral_constant<bool, has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>::value> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::integral_constant<bool, has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>::value> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_
