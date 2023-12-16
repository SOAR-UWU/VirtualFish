// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMBSMControllerParams_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMBSMControllerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMBSMControllerParams_Request & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetMBSMControllerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetMBSMControllerParams_Request & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams_Request>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams_Request>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMBSMControllerParams_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: lambda_array
  {
    if (msg.lambda_array.size() == 0) {
      out << "lambda_array: []";
    } else {
      out << "lambda_array: [";
      size_t pending_items = msg.lambda_array.size();
      for (auto item : msg.lambda_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rho_constant
  {
    if (msg.rho_constant.size() == 0) {
      out << "rho_constant: []";
    } else {
      out << "rho_constant: [";
      size_t pending_items = msg.rho_constant.size();
      for (auto item : msg.rho_constant) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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

  // member: c
  {
    if (msg.c.size() == 0) {
      out << "c: []";
    } else {
      out << "c: [";
      size_t pending_items = msg.c.size();
      for (auto item : msg.c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: adapt_slope
  {
    if (msg.adapt_slope.size() == 0) {
      out << "adapt_slope: []";
    } else {
      out << "adapt_slope: [";
      size_t pending_items = msg.adapt_slope.size();
      for (auto item : msg.adapt_slope) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rho_0
  {
    if (msg.rho_0.size() == 0) {
      out << "rho_0: []";
    } else {
      out << "rho_0: [";
      size_t pending_items = msg.rho_0.size();
      for (auto item : msg.rho_0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drift_prevent
  {
    out << "drift_prevent: ";
    rosidl_generator_traits::value_to_yaml(msg.drift_prevent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMBSMControllerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lambda_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lambda_array.size() == 0) {
      out << "lambda_array: []\n";
    } else {
      out << "lambda_array:\n";
      for (auto item : msg.lambda_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rho_constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rho_constant.size() == 0) {
      out << "rho_constant: []\n";
    } else {
      out << "rho_constant:\n";
      for (auto item : msg.rho_constant) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.c.size() == 0) {
      out << "c: []\n";
    } else {
      out << "c:\n";
      for (auto item : msg.c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: adapt_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.adapt_slope.size() == 0) {
      out << "adapt_slope: []\n";
    } else {
      out << "adapt_slope:\n";
      for (auto item : msg.adapt_slope) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rho_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rho_0.size() == 0) {
      out << "rho_0: []\n";
    } else {
      out << "rho_0:\n";
      for (auto item : msg.rho_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: drift_prevent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drift_prevent: ";
    rosidl_generator_traits::value_to_yaml(msg.drift_prevent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMBSMControllerParams_Response & msg, bool use_flow_style = false)
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
  const uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
{
  return uuv_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams_Response>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams_Response>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_
