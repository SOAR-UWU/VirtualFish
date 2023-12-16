// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterManagerConfig_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterManagerConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterManagerConfig_Request & msg, bool use_flow_style = false)
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

}  // namespace uuv_thruster_manager

namespace rosidl_generator_traits
{

[[deprecated("use uuv_thruster_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::GetThrusterManagerConfig_Request & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>()
{
  return "uuv_thruster_manager::srv::GetThrusterManagerConfig_Request";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>()
{
  return "uuv_thruster_manager/srv/GetThrusterManagerConfig_Request";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterManagerConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: tf_prefix
  {
    out << "tf_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.tf_prefix, out);
    out << ", ";
  }

  // member: base_link
  {
    out << "base_link: ";
    rosidl_generator_traits::value_to_yaml(msg.base_link, out);
    out << ", ";
  }

  // member: thruster_frame_base
  {
    out << "thruster_frame_base: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_frame_base, out);
    out << ", ";
  }

  // member: thruster_topic_prefix
  {
    out << "thruster_topic_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_topic_prefix, out);
    out << ", ";
  }

  // member: thruster_topic_suffix
  {
    out << "thruster_topic_suffix: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_topic_suffix, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: max_thrust
  {
    out << "max_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.max_thrust, out);
    out << ", ";
  }

  // member: n_thrusters
  {
    out << "n_thrusters: ";
    rosidl_generator_traits::value_to_yaml(msg.n_thrusters, out);
    out << ", ";
  }

  // member: allocation_matrix
  {
    if (msg.allocation_matrix.size() == 0) {
      out << "allocation_matrix: []";
    } else {
      out << "allocation_matrix: [";
      size_t pending_items = msg.allocation_matrix.size();
      for (auto item : msg.allocation_matrix) {
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
  const GetThrusterManagerConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tf_prefix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tf_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.tf_prefix, out);
    out << "\n";
  }

  // member: base_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_link: ";
    rosidl_generator_traits::value_to_yaml(msg.base_link, out);
    out << "\n";
  }

  // member: thruster_frame_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_frame_base: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_frame_base, out);
    out << "\n";
  }

  // member: thruster_topic_prefix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_topic_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_topic_prefix, out);
    out << "\n";
  }

  // member: thruster_topic_suffix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_topic_suffix: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_topic_suffix, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: max_thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.max_thrust, out);
    out << "\n";
  }

  // member: n_thrusters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_thrusters: ";
    rosidl_generator_traits::value_to_yaml(msg.n_thrusters, out);
    out << "\n";
  }

  // member: allocation_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allocation_matrix.size() == 0) {
      out << "allocation_matrix: []\n";
    } else {
      out << "allocation_matrix:\n";
      for (auto item : msg.allocation_matrix) {
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

inline std::string to_yaml(const GetThrusterManagerConfig_Response & msg, bool use_flow_style = false)
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

}  // namespace uuv_thruster_manager

namespace rosidl_generator_traits
{

[[deprecated("use uuv_thruster_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>()
{
  return "uuv_thruster_manager::srv::GetThrusterManagerConfig_Response";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>()
{
  return "uuv_thruster_manager/srv/GetThrusterManagerConfig_Response";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterManagerConfig>()
{
  return "uuv_thruster_manager::srv::GetThrusterManagerConfig";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterManagerConfig>()
{
  return "uuv_thruster_manager/srv/GetThrusterManagerConfig";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterManagerConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>::value &&
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterManagerConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>::value &&
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>::value
  >
{
};

template<>
struct is_service<uuv_thruster_manager::srv::GetThrusterManagerConfig>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_
