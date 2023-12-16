// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetOriginSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_world_ros_plugins_msgs/srv/detail/set_origin_spherical_coord__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetOriginSphericalCoord_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude_deg
  {
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << ", ";
  }

  // member: longitude_deg
  {
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetOriginSphericalCoord_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << "\n";
  }

  // member: longitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetOriginSphericalCoord_Request & msg, bool use_flow_style = false)
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
  const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetOriginSphericalCoord_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetOriginSphericalCoord_Response & msg,
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
  const SetOriginSphericalCoord_Response & msg,
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

inline std::string to_yaml(const SetOriginSphericalCoord_Response & msg, bool use_flow_style = false)
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
  const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_world_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_world_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response & msg)
{
  return uuv_world_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetOriginSphericalCoord_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetOriginSphericalCoord";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__TRAITS_HPP_
