// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:srv/ChangeSensorState.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_sensor_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeSensorState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: on
  {
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeSensorState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeSensorState_Request & msg, bool use_flow_style = false)
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

}  // namespace uuv_sensor_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_sensor_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request & msg)
{
  return uuv_sensor_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState_Request";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_sensor_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeSensorState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeSensorState_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeSensorState_Response & msg, bool use_flow_style = false)
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

}  // namespace uuv_sensor_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_sensor_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response & msg)
{
  return uuv_sensor_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState_Response";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>::value &&
    has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>::value &&
    has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>::value
  >
{
};

template<>
struct is_service<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_
