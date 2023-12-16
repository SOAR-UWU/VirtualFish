// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

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
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Waypoint in the package uuv_control_msgs.
/**
  * Copyright (c) 2020 The Plankton Authors.
  * All rights reserved.
  *
  * This source code is derived from UUV Simulator
  * (https://github.com/uuvsimulator/uuv_simulator)
  * Copyright (c) 2016-2019 The UUV Simulator Authors
  * licensed under the Apache license, Version 2.0
  * cf. 3rd-party-licenses.txt file in the root directory of this source tree.
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
typedef struct uuv_control_msgs__msg__Waypoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point point;
  double max_forward_speed;
  double heading_offset;
  bool use_fixed_heading;
  double radius_of_acceptance;
} uuv_control_msgs__msg__Waypoint;

// Struct for a sequence of uuv_control_msgs__msg__Waypoint.
typedef struct uuv_control_msgs__msg__Waypoint__Sequence
{
  uuv_control_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
