// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThrusterConversionFcn & msg,
  std::ostream & out)
{
  out << "{";
  // member: function_name
  {
    out << "function_name: ";
    rosidl_generator_traits::value_to_yaml(msg.function_name, out);
    out << ", ";
  }

  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lookup_table_input
  {
    if (msg.lookup_table_input.size() == 0) {
      out << "lookup_table_input: []";
    } else {
      out << "lookup_table_input: [";
      size_t pending_items = msg.lookup_table_input.size();
      for (auto item : msg.lookup_table_input) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lookup_table_output
  {
    if (msg.lookup_table_output.size() == 0) {
      out << "lookup_table_output: []";
    } else {
      out << "lookup_table_output: [";
      size_t pending_items = msg.lookup_table_output.size();
      for (auto item : msg.lookup_table_output) {
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
  const ThrusterConversionFcn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: function_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function_name: ";
    rosidl_generator_traits::value_to_yaml(msg.function_name, out);
    out << "\n";
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lookup_table_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lookup_table_input.size() == 0) {
      out << "lookup_table_input: []\n";
    } else {
      out << "lookup_table_input:\n";
      for (auto item : msg.lookup_table_input) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lookup_table_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lookup_table_output.size() == 0) {
      out << "lookup_table_output: []\n";
    } else {
      out << "lookup_table_output:\n";
      for (auto item : msg.lookup_table_output) {
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

inline std::string to_yaml(const ThrusterConversionFcn & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_gazebo_ros_plugins_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg)
{
  return uuv_gazebo_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs/msg/ThrusterConversionFcn";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_
