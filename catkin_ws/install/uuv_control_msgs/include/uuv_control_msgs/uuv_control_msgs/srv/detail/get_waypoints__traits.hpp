// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetWaypoints_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetWaypoints_Request>()
{
  return "uuv_control_msgs::srv::GetWaypoints_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetWaypoints_Request>()
{
  return "uuv_control_msgs/srv/GetWaypoints_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GetWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetWaypoints_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetWaypoints_Response>()
{
  return "uuv_control_msgs::srv::GetWaypoints_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetWaypoints_Response>()
{
  return "uuv_control_msgs/srv/GetWaypoints_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GetWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetWaypoints>()
{
  return "uuv_control_msgs::srv::GetWaypoints";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetWaypoints>()
{
  return "uuv_control_msgs/srv/GetWaypoints";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GetWaypoints_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GetWaypoints_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GetWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GetWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GetWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
