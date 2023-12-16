// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitHelicalTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/init_helical_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitHelicalTrajectory_Request & msg,
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

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: is_clockwise
  {
    out << "is_clockwise: ";
    rosidl_generator_traits::value_to_yaml(msg.is_clockwise, out);
    out << ", ";
  }

  // member: angle_offset
  {
    out << "angle_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_offset, out);
    out << ", ";
  }

  // member: n_points
  {
    out << "n_points: ";
    rosidl_generator_traits::value_to_yaml(msg.n_points, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: n_turns
  {
    out << "n_turns: ";
    rosidl_generator_traits::value_to_yaml(msg.n_turns, out);
    out << ", ";
  }

  // member: delta_z
  {
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitHelicalTrajectory_Request & msg,
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

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: is_clockwise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_clockwise: ";
    rosidl_generator_traits::value_to_yaml(msg.is_clockwise, out);
    out << "\n";
  }

  // member: angle_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_offset, out);
    out << "\n";
  }

  // member: n_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_points: ";
    rosidl_generator_traits::value_to_yaml(msg.n_points, out);
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

  // member: max_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: n_turns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_turns: ";
    rosidl_generator_traits::value_to_yaml(msg.n_turns, out);
    out << "\n";
  }

  // member: delta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitHelicalTrajectory_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitHelicalTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitHelicalTrajectory_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory_Request>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory_Request>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitHelicalTrajectory_Response & msg,
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
  const InitHelicalTrajectory_Response & msg,
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

inline std::string to_yaml(const InitHelicalTrajectory_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::InitHelicalTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::InitHelicalTrajectory_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory_Response>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory_Response>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_
