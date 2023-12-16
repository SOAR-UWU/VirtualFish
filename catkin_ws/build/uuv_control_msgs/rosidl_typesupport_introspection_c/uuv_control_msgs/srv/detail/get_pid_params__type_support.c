// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/GetPIDParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/get_pid_params__functions.h"
#include "uuv_control_msgs/srv/detail/get_pid_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetPIDParams_Request__init(message_memory);
}

void uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetPIDParams_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetPIDParams_Request",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__GetPIDParams_Request),
  uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_member_array,  // message members
  uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle = {
  0,
  &uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)() {
  if (!uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_control_msgs__srv__GetPIDParams_Request__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__struct.h"


// Include directives for member types
// Member `kp`
// Member `kd`
// Member `ki`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetPIDParams_Response__init(message_memory);
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetPIDParams_Response__fini(message_memory);
}

size_t uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__kp(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kp(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kp(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__kp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__kd(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kd(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kd(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__kd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__ki(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__ki(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__ki(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__ki(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__ki(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__ki(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__ki(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__ki(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_member_array[3] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, kp),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__kp,  // size() function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kp,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kp,  // get(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__kp,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__kp,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__kp  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, kd),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__kd,  // size() function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__kd,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__kd,  // get(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__kd,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__kd,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__kd  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetPIDParams_Response, ki),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__size_function__GetPIDParams_Response__ki,  // size() function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetPIDParams_Response__ki,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__get_function__GetPIDParams_Response__ki,  // get(index) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetPIDParams_Response__ki,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__assign_function__GetPIDParams_Response__ki,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__resize_function__GetPIDParams_Response__ki  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetPIDParams_Response",  // message name
  3,  // number of fields
  sizeof(uuv_control_msgs__srv__GetPIDParams_Response),
  uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_member_array,  // message members
  uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle = {
  0,
  &uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)() {
  if (!uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_control_msgs__srv__GetPIDParams_Response__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_pid_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "GetPIDParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams)() {
  if (!uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetPIDParams_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__get_pid_params__rosidl_typesupport_introspection_c__GetPIDParams_service_type_support_handle;
}
