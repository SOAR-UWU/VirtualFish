// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "GetModelProperties_Request",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request),
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Request)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__functions.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.h"


// Include directives for member types
// Member `link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `models`
#include "uuv_gazebo_ros_plugins_msgs/msg/underwater_object_model.h"
// Member `models`
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__fini(message_memory);
}

size_t uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__size_function__GetModelProperties_Response__link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetModelProperties_Response__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetModelProperties_Response__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetModelProperties_Response__link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__size_function__GetModelProperties_Response__models(
  const void * untyped_member)
{
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * member =
    (const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__models(
  const void * untyped_member, size_t index)
{
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * member =
    (const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__models(
  void * untyped_member, size_t index)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * member =
    (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetModelProperties_Response__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * item =
    ((const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__models(untyped_member, index));
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * value =
    (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetModelProperties_Response__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * item =
    ((uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__models(untyped_member, index));
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * value =
    (const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetModelProperties_Response__models(
  void * untyped_member, size_t size)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * member =
    (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)(untyped_member);
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(member);
  return uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_member_array[2] = {
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response, link_names),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__size_function__GetModelProperties_Response__link_names,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__link_names,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__link_names,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetModelProperties_Response__link_names,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetModelProperties_Response__link_names,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetModelProperties_Response__link_names  // resize(index) function pointer
  },
  {
    "models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response, models),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__size_function__GetModelProperties_Response__models,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetModelProperties_Response__models,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__get_function__GetModelProperties_Response__models,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetModelProperties_Response__models,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetModelProperties_Response__models,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetModelProperties_Response__models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "GetModelProperties_Response",  // message name
  2,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response),
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Response)() {
  uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)();
  if (!uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // service namespace
  "GetModelProperties",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_Request_message_type_support_handle,
  NULL  // response message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Response)()->data;
  }

  return &uuv_gazebo_ros_plugins_msgs__srv__detail__get_model_properties__rosidl_typesupport_introspection_c__GetModelProperties_service_type_support_handle;
}
