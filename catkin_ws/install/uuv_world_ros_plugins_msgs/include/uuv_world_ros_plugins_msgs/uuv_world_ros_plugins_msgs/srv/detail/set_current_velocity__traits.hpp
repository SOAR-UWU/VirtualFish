// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentVelocity.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCurrentVelocity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: horizontal_angle
  {
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << ", ";
  }

  // member: vertical_angle
  {
    out << "vertical_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCurrentVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: horizontal_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << "\n";
  }

  // member: vertical_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCurrentVelocity_Request & msg, bool use_flow_style = false)
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
  const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentVelocity_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCurrentVelocity_Response & msg,
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
  const SetCurrentVelocity_Response & msg,
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

inline std::string to_yaml(const SetCurrentVelocity_Response & msg, bool use_flow_style = false)
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
  const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentVelocity_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentVelocity";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__TRAITS_HPP_
