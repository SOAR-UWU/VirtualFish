// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.h"


// Include directives for member types
// Member `added_mass`
// Member `linear_damping`
// Member `linear_damping_forward_speed`
// Member `quadratic_damping`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cob`
#include "geometry_msgs/msg/vector3.h"
// Member `cob`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `inertia`
#include "geometry_msgs/msg/inertia.h"
// Member `inertia`
#include "geometry_msgs/msg/detail/inertia__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(message_memory);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__added_mass(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__added_mass(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__added_mass(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__added_mass(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__added_mass(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__added_mass(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__added_mass(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__added_mass(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__linear_damping(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__linear_damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__linear_damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__linear_damping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__linear_damping_forward_speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping_forward_speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping_forward_speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__linear_damping_forward_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping_forward_speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__linear_damping_forward_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping_forward_speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__linear_damping_forward_speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__quadratic_damping(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__quadratic_damping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__quadratic_damping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__quadratic_damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__quadratic_damping(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__quadratic_damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__quadratic_damping(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__quadratic_damping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[12] = {
  {
    "added_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, added_mass),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__added_mass,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__added_mass,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__added_mass,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__added_mass,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__added_mass,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__added_mass  // resize(index) function pointer
  },
  {
    "linear_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, linear_damping),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__linear_damping,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__linear_damping,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__linear_damping,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__linear_damping  // resize(index) function pointer
  },
  {
    "linear_damping_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, linear_damping_forward_speed),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__linear_damping_forward_speed,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__linear_damping_forward_speed,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__linear_damping_forward_speed,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__linear_damping_forward_speed,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__linear_damping_forward_speed,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__linear_damping_forward_speed  // resize(index) function pointer
  },
  {
    "quadratic_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, quadratic_damping),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__size_function__UnderwaterObjectModel__quadratic_damping,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_const_function__UnderwaterObjectModel__quadratic_damping,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__get_function__UnderwaterObjectModel__quadratic_damping,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__fetch_function__UnderwaterObjectModel__quadratic_damping,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__assign_function__UnderwaterObjectModel__quadratic_damping,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__resize_function__UnderwaterObjectModel__quadratic_damping  // resize(index) function pointer
  },
  {
    "volume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, volume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fluid_density",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, fluid_density),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cob",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, cob),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "neutrally_buoyant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, neutrally_buoyant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, inertia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_members = {
  "uuv_gazebo_ros_plugins_msgs__msg",  // message namespace
  "UnderwaterObjectModel",  // message name
  12,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel),
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)() {
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Inertia)();
  if (!uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
