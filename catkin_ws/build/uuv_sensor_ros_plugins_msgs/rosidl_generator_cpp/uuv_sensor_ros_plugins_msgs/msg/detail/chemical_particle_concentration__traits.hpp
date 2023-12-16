// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChemicalParticleConcentration & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: concentration
  {
    out << "concentration: ";
    rosidl_generator_traits::value_to_yaml(msg.concentration, out);
    out << ", ";
  }

  // member: is_measuring
  {
    out << "is_measuring: ";
    rosidl_generator_traits::value_to_yaml(msg.is_measuring, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChemicalParticleConcentration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: concentration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "concentration: ";
    rosidl_generator_traits::value_to_yaml(msg.concentration, out);
    out << "\n";
  }

  // member: is_measuring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_measuring: ";
    rosidl_generator_traits::value_to_yaml(msg.is_measuring, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChemicalParticleConcentration & msg, bool use_flow_style = false)
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

}  // namespace uuv_sensor_ros_plugins_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg,
  std::ostream & out, size_t indentation = 0)
{
  uuv_sensor_ros_plugins_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uuv_sensor_ros_plugins_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
{
  return uuv_sensor_ros_plugins_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/ChemicalParticleConcentration";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_
