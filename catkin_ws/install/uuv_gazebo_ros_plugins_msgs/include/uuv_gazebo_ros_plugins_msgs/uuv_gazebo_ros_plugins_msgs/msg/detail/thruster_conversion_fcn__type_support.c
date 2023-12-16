// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.h"


// Include directives for member types
// Member `function_name`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
// Member `lookup_table_input`
// Member `lookup_table_output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(message_memory);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__lookup_table_input(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_input(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_input(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__lookup_table_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__lookup_table_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__lookup_table_input(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__lookup_table_output(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_output(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_output(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__lookup_table_output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_output(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__lookup_table_output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_output(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__lookup_table_output(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_member_array[5] = {
  {
    "function_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, function_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, tags),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__tags,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__tags,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__tags,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__tags,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__tags,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__tags  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, data),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__data,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__data,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__data,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__data,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__data,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__data  // resize(index) function pointer
  },
  {
    "lookup_table_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, lookup_table_input),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__lookup_table_input,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_input,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_input,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__lookup_table_input,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__lookup_table_input,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__lookup_table_input  // resize(index) function pointer
  },
  {
    "lookup_table_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, lookup_table_output),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__size_function__ThrusterConversionFcn__lookup_table_output,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_const_function__ThrusterConversionFcn__lookup_table_output,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__get_function__ThrusterConversionFcn__lookup_table_output,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__fetch_function__ThrusterConversionFcn__lookup_table_output,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__assign_function__ThrusterConversionFcn__lookup_table_output,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__resize_function__ThrusterConversionFcn__lookup_table_output  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_members = {
  "uuv_gazebo_ros_plugins_msgs__msg",  // message namespace
  "ThrusterConversionFcn",  // message name
  5,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn),
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, msg, ThrusterConversionFcn)() {
  if (!uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
