// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__rosidl_typesupport_introspection_c.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__functions.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.h"


// Include directives for member types
// Member `pos`
#include "geometry_msgs/msg/point.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(message_memory);
}

void uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_fini_function(void * message_memory)
{
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(message_memory);
}

size_t uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__size_function__PositionWithCovariance__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PositionWithCovariance__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_function__PositionWithCovariance__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__fetch_function__PositionWithCovariance__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PositionWithCovariance__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__assign_function__PositionWithCovariance__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_function__PositionWithCovariance__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_member_array[2] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance, covariance),  // bytes offset in struct
    NULL,  // default value
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__size_function__PositionWithCovariance__covariance,  // size() function pointer
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PositionWithCovariance__covariance,  // get_const(index) function pointer
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__get_function__PositionWithCovariance__covariance,  // get(index) function pointer
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__fetch_function__PositionWithCovariance__covariance,  // fetch(index, &value) function pointer
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__assign_function__PositionWithCovariance__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_members = {
  "uuv_sensor_ros_plugins_msgs__msg",  // message namespace
  "PositionWithCovariance",  // message name
  2,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance),
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_member_array,  // message members
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_type_support_handle = {
  0,
  &uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance)() {
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_type_support_handle.typesupport_identifier) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__rosidl_typesupport_introspection_c__PositionWithCovariance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
