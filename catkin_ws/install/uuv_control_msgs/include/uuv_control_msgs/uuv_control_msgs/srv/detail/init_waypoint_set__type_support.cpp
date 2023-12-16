// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InitWaypointSet_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_control_msgs::srv::InitWaypointSet_Request(_init);
}

void InitWaypointSet_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_control_msgs::srv::InitWaypointSet_Request *>(message_memory);
  typed_message->~InitWaypointSet_Request();
}

size_t size_function__InitWaypointSet_Request__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InitWaypointSet_Request__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void * get_function__InitWaypointSet_Request__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__InitWaypointSet_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uuv_control_msgs::msg::Waypoint *>(
    get_const_function__InitWaypointSet_Request__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<uuv_control_msgs::msg::Waypoint *>(untyped_value);
  value = item;
}

void assign_function__InitWaypointSet_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uuv_control_msgs::msg::Waypoint *>(
    get_function__InitWaypointSet_Request__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const uuv_control_msgs::msg::Waypoint *>(untyped_value);
  item = value;
}

void resize_function__InitWaypointSet_Request__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uuv_control_msgs::msg::Waypoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InitWaypointSet_Request_message_member_array[6] = {
  {
    "start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_now",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, start_now),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<uuv_control_msgs::msg::Waypoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__InitWaypointSet_Request__waypoints,  // size() function pointer
    get_const_function__InitWaypointSet_Request__waypoints,  // get_const(index) function pointer
    get_function__InitWaypointSet_Request__waypoints,  // get(index) function pointer
    fetch_function__InitWaypointSet_Request__waypoints,  // fetch(index, &value) function pointer
    assign_function__InitWaypointSet_Request__waypoints,  // assign(index, value) function pointer
    resize_function__InitWaypointSet_Request__waypoints  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, max_forward_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, heading_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "interpolator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::String>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Request, interpolator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InitWaypointSet_Request_message_members = {
  "uuv_control_msgs::srv",  // message namespace
  "InitWaypointSet_Request",  // message name
  6,  // number of fields
  sizeof(uuv_control_msgs::srv::InitWaypointSet_Request),
  InitWaypointSet_Request_message_member_array,  // message members
  InitWaypointSet_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InitWaypointSet_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InitWaypointSet_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InitWaypointSet_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::InitWaypointSet_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, InitWaypointSet_Request)() {
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::InitWaypointSet_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InitWaypointSet_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_control_msgs::srv::InitWaypointSet_Response(_init);
}

void InitWaypointSet_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_control_msgs::srv::InitWaypointSet_Response *>(message_memory);
  typed_message->~InitWaypointSet_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InitWaypointSet_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::InitWaypointSet_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InitWaypointSet_Response_message_members = {
  "uuv_control_msgs::srv",  // message namespace
  "InitWaypointSet_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs::srv::InitWaypointSet_Response),
  InitWaypointSet_Response_message_member_array,  // message members
  InitWaypointSet_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InitWaypointSet_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InitWaypointSet_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InitWaypointSet_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::InitWaypointSet_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, InitWaypointSet_Response)() {
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::InitWaypointSet_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers InitWaypointSet_service_members = {
  "uuv_control_msgs::srv",  // service namespace
  "InitWaypointSet",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<uuv_control_msgs::srv::InitWaypointSet>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t InitWaypointSet_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InitWaypointSet_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_control_msgs::srv::InitWaypointSet>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::InitWaypointSet_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_control_msgs::srv::InitWaypointSet_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_control_msgs::srv::InitWaypointSet_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, InitWaypointSet)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<uuv_control_msgs::srv::InitWaypointSet>();
}

#ifdef __cplusplus
}
#endif