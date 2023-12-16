// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__rosidl_typesupport_introspection_c.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__functions.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_thruster_manager__srv__GetThrusterCurve_Request__init(message_memory);
}

void uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_fini_function(void * message_memory)
{
  uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_member_array[3] = {
  {
    "min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterCurve_Request, min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterCurve_Request, max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterCurve_Request, n_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_members = {
  "uuv_thruster_manager__srv",  // message namespace
  "GetThrusterCurve_Request",  // message name
  3,  // number of fields
  sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request),
  uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_member_array,  // message members
  uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_type_support_handle = {
  0,
  &uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)() {
  if (!uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_type_support_handle.typesupport_identifier) {
    uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_thruster_manager__srv__GetThrusterCurve_Request__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__functions.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"


// Include directives for member types
// Member `input`
// Member `thrust`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_thruster_manager__srv__GetThrusterCurve_Response__init(message_memory);
}

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_fini_function(void * message_memory)
{
  uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(message_memory);
}

size_t uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__size_function__GetThrusterCurve_Response__input(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__input(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__input(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__fetch_function__GetThrusterCurve_Response__input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__assign_function__GetThrusterCurve_Response__input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__resize_function__GetThrusterCurve_Response__input(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__size_function__GetThrusterCurve_Response__thrust(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__thrust(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__thrust(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__fetch_function__GetThrusterCurve_Response__thrust(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__thrust(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__assign_function__GetThrusterCurve_Response__thrust(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__thrust(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__resize_function__GetThrusterCurve_Response__thrust(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_member_array[2] = {
  {
    "input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterCurve_Response, input),  // bytes offset in struct
    NULL,  // default value
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__size_function__GetThrusterCurve_Response__input,  // size() function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__input,  // get_const(index) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__input,  // get(index) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__fetch_function__GetThrusterCurve_Response__input,  // fetch(index, &value) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__assign_function__GetThrusterCurve_Response__input,  // assign(index, value) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__resize_function__GetThrusterCurve_Response__input  // resize(index) function pointer
  },
  {
    "thrust",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_thruster_manager__srv__GetThrusterCurve_Response, thrust),  // bytes offset in struct
    NULL,  // default value
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__size_function__GetThrusterCurve_Response__thrust,  // size() function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_const_function__GetThrusterCurve_Response__thrust,  // get_const(index) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__get_function__GetThrusterCurve_Response__thrust,  // get(index) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__fetch_function__GetThrusterCurve_Response__thrust,  // fetch(index, &value) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__assign_function__GetThrusterCurve_Response__thrust,  // assign(index, value) function pointer
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__resize_function__GetThrusterCurve_Response__thrust  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_members = {
  "uuv_thruster_manager__srv",  // message namespace
  "GetThrusterCurve_Response",  // message name
  2,  // number of fields
  sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response),
  uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_member_array,  // message members
  uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_type_support_handle = {
  0,
  &uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)() {
  if (!uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_type_support_handle.typesupport_identifier) {
    uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_thruster_manager__srv__GetThrusterCurve_Response__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_members = {
  "uuv_thruster_manager__srv",  // service namespace
  "GetThrusterCurve",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_Request_message_type_support_handle,
  NULL  // response message
  // uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_type_support_handle = {
  0,
  &uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_thruster_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve)() {
  if (!uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_type_support_handle.typesupport_identifier) {
    uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)()->data;
  }

  return &uuv_thruster_manager__srv__detail__get_thruster_curve__rosidl_typesupport_introspection_c__GetThrusterCurve_service_type_support_handle;
}
