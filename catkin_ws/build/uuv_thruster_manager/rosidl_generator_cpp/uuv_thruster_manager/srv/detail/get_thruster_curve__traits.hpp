// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterCurve_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << ", ";
  }

  // member: n_points
  {
    out << "n_points: ";
    rosidl_generator_traits::value_to_yaml(msg.n_points, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetThrusterCurve_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetThrusterCurve_Request & msg, bool use_flow_style = false)
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
  const uuv_thruster_manager::srv::GetThrusterCurve_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::GetThrusterCurve_Request & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve_Request";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve_Request";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uuv_thruster_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetThrusterCurve_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    if (msg.input.size() == 0) {
      out << "input: []";
    } else {
      out << "input: [";
      size_t pending_items = msg.input.size();
      for (auto item : msg.input) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thrust
  {
    if (msg.thrust.size() == 0) {
      out << "thrust: []";
    } else {
      out << "thrust: [";
      size_t pending_items = msg.thrust.size();
      for (auto item : msg.thrust) {
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
  const GetThrusterCurve_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input.size() == 0) {
      out << "input: []\n";
    } else {
      out << "input:\n";
      for (auto item : msg.input) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thrust.size() == 0) {
      out << "thrust: []\n";
    } else {
      out << "thrust:\n";
      for (auto item : msg.thrust) {
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

inline std::string to_yaml(const GetThrusterCurve_Response & msg, bool use_flow_style = false)
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
  const uuv_thruster_manager::srv::GetThrusterCurve_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_thruster_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_thruster_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_thruster_manager::srv::GetThrusterCurve_Response & msg)
{
  return uuv_thruster_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve_Response";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve_Response";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>::value &&
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>::value &&
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>::value
  >
{
};

template<>
struct is_service<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_
