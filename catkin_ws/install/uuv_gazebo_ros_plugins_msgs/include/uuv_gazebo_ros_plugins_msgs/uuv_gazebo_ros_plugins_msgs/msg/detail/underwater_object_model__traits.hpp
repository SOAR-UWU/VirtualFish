// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cob'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'inertia'
#include "geometry_msgs/msg/detail/inertia__traits.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UnderwaterObjectModel & msg,
  std::ostream & out)
{
  out << "{";
  // member: added_mass
  {
    if (msg.added_mass.size() == 0) {
      out << "added_mass: []";
    } else {
      out << "added_mass: [";
      size_t pending_items = msg.added_mass.size();
      for (auto item : msg.added_mass) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear_damping
  {
    if (msg.linear_damping.size() == 0) {
      out << "linear_damping: []";
    } else {
      out << "linear_damping: [";
      size_t pending_items = msg.linear_damping.size();
      for (auto item : msg.linear_damping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear_damping_forward_speed
  {
    if (msg.linear_damping_forward_speed.size() == 0) {
      out << "linear_damping_forward_speed: []";
    } else {
      out << "linear_damping_forward_speed: [";
      size_t pending_items = msg.linear_damping_forward_speed.size();
      for (auto item : msg.linear_damping_forward_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quadratic_damping
  {
    if (msg.quadratic_damping.size() == 0) {
      out << "quadratic_damping: []";
    } else {
      out << "quadratic_damping: [";
      size_t pending_items = msg.quadratic_damping.size();
      for (auto item : msg.quadratic_damping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << ", ";
  }

  // member: bbox_height
  {
    out << "bbox_height: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_height, out);
    out << ", ";
  }

  // member: bbox_length
  {
    out << "bbox_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_length, out);
    out << ", ";
  }

  // member: bbox_width
  {
    out << "bbox_width: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_width, out);
    out << ", ";
  }

  // member: fluid_density
  {
    out << "fluid_density: ";
    rosidl_generator_traits::value_to_yaml(msg.fluid_density, out);
    out << ", ";
  }

  // member: cob
  {
    out << "cob: ";
    to_flow_style_yaml(msg.cob, out);
    out << ", ";
  }

  // member: neutrally_buoyant
  {
    out << "neutrally_buoyant: ";
    rosidl_generator_traits::value_to_yaml(msg.neutrally_buoyant, out);
    out << ", ";
  }

  // member: inertia
  {
    out << "inertia: ";
    to_flow_style_yaml(msg.inertia, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnderwaterObjectModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: added_mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.added_mass.size() == 0) {
      out << "added_mass: []\n";
    } else {
      out << "added_mass:\n";
      for (auto item : msg.added_mass) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear_damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_damping.size() == 0) {
      out << "linear_damping: []\n";
    } else {
      out << "linear_damping:\n";
      for (auto item : msg.linear_damping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear_damping_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_damping_forward_speed.size() == 0) {
      out << "linear_damping_forward_speed: []\n";
    } else {
      out << "linear_damping_forward_speed:\n";
      for (auto item : msg.linear_damping_forward_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quadratic_damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quadratic_damping.size() == 0) {
      out << "quadratic_damping: []\n";
    } else {
      out << "quadratic_damping:\n";
      for (auto item : msg.quadratic_damping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }

  // member: bbox_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox_height: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_height, out);
    out << "\n";
  }

  // member: bbox_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_length, out);
    out << "\n";
  }

  // member: bbox_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox_width: ";
    rosidl_generator_traits::value_to_yaml(msg.bbox_width, out);
    out << "\n";
  }

  // member: fluid_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fluid_density: ";
    rosidl_generator_traits::value_to_yaml(msg.fluid_density, out);
    out << "\n";
  }

  // member: cob
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cob:\n";
    to_block_style_yaml(msg.cob, out, indentation + 2);
  }

  // member: neutrally_buoyant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "neutrally_buoyant: ";
    rosidl_generator_traits::value_to_yaml(msg.neutrally_buoyant, out);
    out << "\n";
  }

  // member: inertia
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inertia:\n";
    to_block_style_yaml(msg.inertia, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnderwaterObjectModel & msg, bool use_flow_style = false)
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
  const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_gazebo_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_gazebo_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
{
  return uuv_gazebo_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return "uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return "uuv_gazebo_ros_plugins_msgs/msg/UnderwaterObjectModel";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_
