// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/SetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/set_sm_controller_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSMControllerParams_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: k
  {
    if (msg.k.size() == 0) {
      out << "k: []";
    } else {
      out << "k: [";
      size_t pending_items = msg.k.size();
      for (auto item : msg.k) {
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
    out << ", ";
  }

  // member: slope
  {
    if (msg.slope.size() == 0) {
      out << "slope: []";
    } else {
      out << "slope: [";
      size_t pending_items = msg.slope.size();
      for (auto item : msg.slope) {
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
  const SetSMControllerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.k.size() == 0) {
      out << "k: []\n";
    } else {
      out << "k:\n";
      for (auto item : msg.k) {
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

  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slope.size() == 0) {
      out << "slope: []\n";
    } else {
      out << "slope:\n";
      for (auto item : msg.slope) {
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

inline std::string to_yaml(const SetSMControllerParams_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::SetSMControllerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::SetSMControllerParams_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::SetSMControllerParams_Request>()
{
  return "uuv_control_msgs::srv::SetSMControllerParams_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::SetSMControllerParams_Request>()
{
  return "uuv_control_msgs/srv/SetSMControllerParams_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::SetSMControllerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::SetSMControllerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::SetSMControllerParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSMControllerParams_Response & msg,
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
  const SetSMControllerParams_Response & msg,
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

inline std::string to_yaml(const SetSMControllerParams_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::SetSMControllerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::SetSMControllerParams_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::SetSMControllerParams_Response>()
{
  return "uuv_control_msgs::srv::SetSMControllerParams_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::SetSMControllerParams_Response>()
{
  return "uuv_control_msgs/srv/SetSMControllerParams_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::SetSMControllerParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::SetSMControllerParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::SetSMControllerParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::SetSMControllerParams>()
{
  return "uuv_control_msgs::srv::SetSMControllerParams";
}

template<>
inline const char * name<uuv_control_msgs::srv::SetSMControllerParams>()
{
  return "uuv_control_msgs/srv/SetSMControllerParams";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::SetSMControllerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::SetSMControllerParams_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::SetSMControllerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::SetSMControllerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::SetSMControllerParams_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::SetSMControllerParams_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::SetSMControllerParams>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::SetSMControllerParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::SetSMControllerParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__TRAITS_HPP_
