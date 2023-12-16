// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModelProperties_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetModelProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetModelProperties_Request & msg, bool use_flow_style = false)
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

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'models'
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModelProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_names
  {
    if (msg.link_names.size() == 0) {
      out << "link_names: []";
    } else {
      out << "link_names: [";
      size_t pending_items = msg.link_names.size();
      for (auto item : msg.link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: models
  {
    if (msg.models.size() == 0) {
      out << "models: []";
    } else {
      out << "models: [";
      size_t pending_items = msg.models.size();
      for (auto item : msg.models) {
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
  const GetModelProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_names.size() == 0) {
      out << "link_names: []\n";
    } else {
      out << "link_names:\n";
      for (auto item : msg.link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: models
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.models.size() == 0) {
      out << "models: []\n";
    } else {
      out << "models:\n";
      for (auto item : msg.models) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetModelProperties_Response & msg, bool use_flow_style = false)
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

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response & msg)
{
  return uuv_gazebo_ros_plugins_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_
