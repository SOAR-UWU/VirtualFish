// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ChemicalParticleConcentration in the package uuv_sensor_ros_plugins_msgs.
/**
  * Copyright (c) 2016 The UUV Simulator Authors.
  * All rights reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration
{
  std_msgs__msg__Header header;
  /// Sensor link position
  geometry_msgs__msg__Vector3 position;
  /// Latitude in degrees (WGS84 coordinates)
  double latitude;
  /// Longiture in degrees (WGS84 coordinates)
  double longitude;
  /// Depth in meters (WGS84 coordinates)
  double depth;
  /// Particle concentration
  double concentration;
  /// Status, false if no plume particles are received
  bool is_measuring;
} uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration.
typedef struct uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence
{
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_H_
