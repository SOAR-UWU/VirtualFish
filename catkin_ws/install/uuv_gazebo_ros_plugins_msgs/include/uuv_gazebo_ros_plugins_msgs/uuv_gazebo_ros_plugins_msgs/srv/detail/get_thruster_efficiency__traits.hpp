// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_efficiency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterEfficiency_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterEfficiency_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterEfficiency_Request & msg, bool use_flow_style = false)
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
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterEfficiency_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: efficiency
  {
    out << "efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.efficiency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterEfficiency_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: efficiency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.efficiency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterEfficiency_Response & msg, bool use_flow_style = false)
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
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__TRAITS_HPP_
