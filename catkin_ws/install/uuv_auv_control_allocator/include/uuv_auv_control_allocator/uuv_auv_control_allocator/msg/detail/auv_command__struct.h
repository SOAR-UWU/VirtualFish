// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_

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
// Member 'command'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in msg/AUVCommand in the package uuv_auv_control_allocator.
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
typedef struct uuv_auv_control_allocator__msg__AUVCommand
{
  std_msgs__msg__Header header;
  double surge_speed;
  geometry_msgs__msg__Wrench command;
} uuv_auv_control_allocator__msg__AUVCommand;

// Struct for a sequence of uuv_auv_control_allocator__msg__AUVCommand.
typedef struct uuv_auv_control_allocator__msg__AUVCommand__Sequence
{
  uuv_auv_control_allocator__msg__AUVCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_auv_control_allocator__msg__AUVCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_H_
