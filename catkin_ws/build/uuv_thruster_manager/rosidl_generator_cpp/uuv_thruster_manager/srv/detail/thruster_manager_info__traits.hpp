// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__TRAITS_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_thruster_manager/srv/detail/thruster_manager_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const ThrusterManagerInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThrusterManagerInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThrusterManagerInfo_Request & msg, bool use_flow_style = false)
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
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::ThrusterManagerInfo_Request & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>()
{
  return "uuv_thruster_manager::srv::ThrusterManagerInfo_Request";
}

template<>
inline const char * name<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>()
{
  return "uuv_thruster_manager/srv/ThrusterManagerInfo_Request";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const ThrusterManagerInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: reference_frame
  {
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThrusterManagerInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThrusterManagerInfo_Response & msg, bool use_flow_style = false)
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
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::ThrusterManagerInfo_Response & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>()
{
  return "uuv_thruster_manager::srv::ThrusterManagerInfo_Response";
}

template<>
inline const char * name<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>()
{
  return "uuv_thruster_manager/srv/ThrusterManagerInfo_Response";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::ThrusterManagerInfo>()
{
  return "uuv_thruster_manager::srv::ThrusterManagerInfo";
}

template<>
inline const char * name<uuv_thruster_manager::srv::ThrusterManagerInfo>()
{
  return "uuv_thruster_manager/srv/ThrusterManagerInfo";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::ThrusterManagerInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>::value &&
    has_fixed_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::ThrusterManagerInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>::value &&
    has_bounded_size<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>::value
  >
{
};

template<>
struct is_service<uuv_thruster_manager::srv::ThrusterManagerInfo>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__TRAITS_HPP_
