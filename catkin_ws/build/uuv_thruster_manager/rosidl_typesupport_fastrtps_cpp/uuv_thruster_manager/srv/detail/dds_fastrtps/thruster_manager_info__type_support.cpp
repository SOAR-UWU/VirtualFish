// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/thruster_manager_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_thruster_manager/srv/detail/thruster_manager_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_serialize(
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::ThrusterManagerInfo_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_ThrusterManagerInfo_Request(
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


  // Member: structure_needs_at_least_one_member
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
    using DataType = uuv_thruster_manager::srv::ThrusterManagerInfo_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ThrusterManagerInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::ThrusterManagerInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ThrusterManagerInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::ThrusterManagerInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ThrusterManagerInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::ThrusterManagerInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ThrusterManagerInfo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ThrusterManagerInfo_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ThrusterManagerInfo_Request__callbacks = {
  "uuv_thruster_manager::srv",
  "ThrusterManagerInfo_Request",
  _ThrusterManagerInfo_Request__cdr_serialize,
  _ThrusterManagerInfo_Request__cdr_deserialize,
  _ThrusterManagerInfo_Request__get_serialized_size,
  _ThrusterManagerInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterManagerInfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterManagerInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::ThrusterManagerInfo_Request>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, ThrusterManagerInfo_Request)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_serialize(
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: n_thrusters
  cdr << ros_message.n_thrusters;
  // Member: allocation_matrix
  {
    cdr << ros_message.allocation_matrix;
  }
  // Member: reference_frame
  cdr << ros_message.reference_frame;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_thruster_manager::srv::ThrusterManagerInfo_Response & ros_message)
{
  // Member: n_thrusters
  cdr >> ros_message.n_thrusters;

  // Member: allocation_matrix
  {
    cdr >> ros_message.allocation_matrix;
  }

  // Member: reference_frame
  cdr >> ros_message.reference_frame;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
get_serialized_size(
  const uuv_thruster_manager::srv::ThrusterManagerInfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: n_thrusters
  {
    size_t item_size = sizeof(ros_message.n_thrusters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: allocation_matrix
  {
    size_t array_size = ros_message.allocation_matrix.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.allocation_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reference_frame.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
max_serialized_size_ThrusterManagerInfo_Response(
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


  // Member: n_thrusters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: allocation_matrix
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reference_frame
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = uuv_thruster_manager::srv::ThrusterManagerInfo_Response;
    is_plain =
      (
      offsetof(DataType, reference_frame) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ThrusterManagerInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::ThrusterManagerInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ThrusterManagerInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_thruster_manager::srv::ThrusterManagerInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ThrusterManagerInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_thruster_manager::srv::ThrusterManagerInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ThrusterManagerInfo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ThrusterManagerInfo_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ThrusterManagerInfo_Response__callbacks = {
  "uuv_thruster_manager::srv",
  "ThrusterManagerInfo_Response",
  _ThrusterManagerInfo_Response__cdr_serialize,
  _ThrusterManagerInfo_Response__cdr_deserialize,
  _ThrusterManagerInfo_Response__get_serialized_size,
  _ThrusterManagerInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterManagerInfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterManagerInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_thruster_manager::srv::ThrusterManagerInfo_Response>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, ThrusterManagerInfo_Response)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace uuv_thruster_manager
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ThrusterManagerInfo__callbacks = {
  "uuv_thruster_manager::srv",
  "ThrusterManagerInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, ThrusterManagerInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, ThrusterManagerInfo_Response)(),
};

static rosidl_service_type_support_t _ThrusterManagerInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterManagerInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_thruster_manager::srv::ThrusterManagerInfo>()
{
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_thruster_manager, srv, ThrusterManagerInfo)() {
  return &uuv_thruster_manager::srv::typesupport_fastrtps_cpp::_ThrusterManagerInfo__handle;
}

#ifdef __cplusplus
}
#endif
