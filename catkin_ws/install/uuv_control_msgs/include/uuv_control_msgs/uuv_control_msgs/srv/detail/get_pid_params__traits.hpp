// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GetPIDParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/get_pid_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPIDParams_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPIDParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPIDParams_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetPIDParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetPIDParams_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetPIDParams_Request>()
{
  return "uuv_control_msgs::srv::GetPIDParams_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetPIDParams_Request>()
{
  return "uuv_control_msgs/srv/GetPIDParams_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetPIDParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetPIDParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GetPIDParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPIDParams_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd
  {
    if (msg.kd.size() == 0) {
      out << "kd: []";
    } else {
      out << "kd: [";
      size_t pending_items = msg.kd.size();
      for (auto item : msg.kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ki
  {
    if (msg.ki.size() == 0) {
      out << "ki: []";
    } else {
      out << "ki: [";
      size_t pending_items = msg.ki.size();
      for (auto item : msg.ki) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetPIDParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd.size() == 0) {
      out << "kd: []\n";
    } else {
      out << "kd:\n";
      for (auto item : msg.kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ki.size() == 0) {
      out << "ki: []\n";
    } else {
      out << "ki:\n";
      for (auto item : msg.ki) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPIDParams_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetPIDParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetPIDParams_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetPIDParams_Response>()
{
  return "uuv_control_msgs::srv::GetPIDParams_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetPIDParams_Response>()
{
  return "uuv_control_msgs/srv/GetPIDParams_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetPIDParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetPIDParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GetPIDParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetPIDParams>()
{
  return "uuv_control_msgs::srv::GetPIDParams";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetPIDParams>()
{
  return "uuv_control_msgs/srv/GetPIDParams";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetPIDParams>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GetPIDParams_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GetPIDParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetPIDParams>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GetPIDParams_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GetPIDParams_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GetPIDParams>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GetPIDParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GetPIDParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__TRAITS_HPP_
