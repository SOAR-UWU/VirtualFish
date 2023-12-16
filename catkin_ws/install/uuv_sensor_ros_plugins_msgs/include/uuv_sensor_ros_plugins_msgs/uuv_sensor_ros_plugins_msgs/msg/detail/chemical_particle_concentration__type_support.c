// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__rosidl_typesupport_introspection_c.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__functions.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(message_memory);
}

void uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_fini_function(void * message_memory)
{
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "concentration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, concentration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_measuring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration, is_measuring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_members = {
  "uuv_sensor_ros_plugins_msgs__msg",  // message namespace
  "ChemicalParticleConcentration",  // message name
  7,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration),
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_member_array,  // message members
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_type_support_handle = {
  0,
  &uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, msg, ChemicalParticleConcentration)() {
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_type_support_handle.typesupport_identifier) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__rosidl_typesupport_introspection_c__ChemicalParticleConcentration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif