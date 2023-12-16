// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCurrentModel_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCurrentModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCurrentModel_Request & msg, bool use_flow_style = false)
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

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCurrentModel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: mean
  {
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << ", ";
  }

  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << ", ";
  }

  // member: noise
  {
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
    out << ", ";
  }

  // member: mu
  {
    out << "mu: ";
    rosidl_generator_traits::value_to_yaml(msg.mu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCurrentModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }

  // member: noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
    out << "\n";
  }

  // member: mu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mu: ";
    rosidl_generator_traits::value_to_yaml(msg.mu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCurrentModel_Response & msg, bool use_flow_style = false)
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

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_
