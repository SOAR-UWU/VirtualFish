// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.h"
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // base_link, thruster_frame_base, thruster_topic_prefix, thruster_topic_suffix
#include "rosidl_runtime_c/string_functions.h"  // base_link, thruster_frame_base, thruster_topic_prefix, thruster_topic_suffix

// forward declare type support functions


using _SetThrusterManagerConfig_Request__ros_msg_type = uuv_thruster_manager__srv__SetThrusterManagerConfig_Request;

static bool _SetThrusterManagerConfig_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<const _SetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: base_link
  {
    const rosidl_runtime_c__String * str = &ros_message->base_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_frame_base
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_frame_base;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_topic_prefix
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_topic_prefix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: thruster_topic_suffix
  {
    const rosidl_runtime_c__String * str = &ros_message->thruster_topic_suffix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  // Field name: max_thrust
  {
    cdr << ros_message->max_thrust;
  }

  return true;
}

static bool _SetThrusterManagerConfig_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<_SetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: base_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->base_link.data) {
      rosidl_runtime_c__String__init(&ros_message->base_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->base_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'base_link'\n");
      return false;
    }
  }

  // Field name: thruster_frame_base
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_frame_base.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_frame_base);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_frame_base,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_frame_base'\n");
      return false;
    }
  }

  // Field name: thruster_topic_prefix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_topic_prefix.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_topic_prefix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_topic_prefix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_topic_prefix'\n");
      return false;
    }
  }

  // Field name: thruster_topic_suffix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->thruster_topic_suffix.data) {
      rosidl_runtime_c__String__init(&ros_message->thruster_topic_suffix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->thruster_topic_suffix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'thruster_topic_suffix'\n");
      return false;
    }
  }

  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  // Field name: max_thrust
  {
    cdr >> ros_message->max_thrust;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetThrusterManagerConfig_Request__ros_msg_type * ros_message = static_cast<const _SetThrusterManagerConfig_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_link.size + 1);
  // field.name thruster_frame_base
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_frame_base.size + 1);
  // field.name thruster_topic_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_topic_prefix.size + 1);
  // field.name thruster_topic_suffix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->thruster_topic_suffix.size + 1);
  // field.name timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_thrust
  {
    size_t item_size = sizeof(ros_message->max_thrust);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetThrusterManagerConfig_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: base_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_frame_base
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_topic_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: thruster_topic_suffix
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_thrust
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = uuv_thruster_manager__srv__SetThrusterManagerConfig_Request;
    is_plain =
      (
      offsetof(DataType, max_thrust) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetThrusterManagerConfig_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetThrusterManagerConfig_Request = {
  "uuv_thruster_manager::srv",
  "SetThrusterManagerConfig_Request",
  _SetThrusterManagerConfig_Request__cdr_serialize,
  _SetThrusterManagerConfig_Request__cdr_deserialize,
  _SetThrusterManagerConfig_Request__get_serialized_size,
  _SetThrusterManagerConfig_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetThrusterManagerConfig_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetThrusterManagerConfig_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, SetThrusterManagerConfig_Request)() {
  return &_SetThrusterManagerConfig_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetThrusterManagerConfig_Response__ros_msg_type = uuv_thruster_manager__srv__SetThrusterManagerConfig_Response;

static bool _SetThrusterManagerConfig_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<const _SetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetThrusterManagerConfig_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<_SetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t get_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetThrusterManagerConfig_Response__ros_msg_type * ros_message = static_cast<const _SetThrusterManagerConfig_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetThrusterManagerConfig_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_thruster_manager
size_t max_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = uuv_thruster_manager__srv__SetThrusterManagerConfig_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetThrusterManagerConfig_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_uuv_thruster_manager__srv__SetThrusterManagerConfig_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetThrusterManagerConfig_Response = {
  "uuv_thruster_manager::srv",
  "SetThrusterManagerConfig_Response",
  _SetThrusterManagerConfig_Response__cdr_serialize,
  _SetThrusterManagerConfig_Response__cdr_deserialize,
  _SetThrusterManagerConfig_Response__get_serialized_size,
  _SetThrusterManagerConfig_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetThrusterManagerConfig_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetThrusterManagerConfig_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, SetThrusterManagerConfig_Response)() {
  return &_SetThrusterManagerConfig_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_thruster_manager/srv/set_thruster_manager_config.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetThrusterManagerConfig__callbacks = {
  "uuv_thruster_manager::srv",
  "SetThrusterManagerConfig",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, SetThrusterManagerConfig_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, SetThrusterManagerConfig_Response)(),
};

static rosidl_service_type_support_t SetThrusterManagerConfig__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetThrusterManagerConfig__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, SetThrusterManagerConfig)() {
  return &SetThrusterManagerConfig__handle;
}

#if defined(__cplusplus)
}
#endif
