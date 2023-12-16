// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__traits.hpp"
// Member 'interpolator'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitWaypointSet_Request & msg,
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
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
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
  const InitWaypointSet_Request & msg,
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

  // member: max_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << "\n";
  }

  // member: heading_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << "\n";
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

inline std::string to_yaml(const InitWaypointSet_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitWaypointSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitWaypointSet_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return "uuv_control_msgs::srv::InitWaypointSet_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return "uuv_control_msgs/srv/InitWaypointSet_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitWaypointSet_Response & msg,
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
  const InitWaypointSet_Response & msg,
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

inline std::string to_yaml(const InitWaypointSet_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitWaypointSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitWaypointSet_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return "uuv_control_msgs::srv::InitWaypointSet_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return "uuv_control_msgs/srv/InitWaypointSet_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet>()
{
  return "uuv_control_msgs::srv::InitWaypointSet";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet>()
{
  return "uuv_control_msgs/srv/InitWaypointSet";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitWaypointSet>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_
