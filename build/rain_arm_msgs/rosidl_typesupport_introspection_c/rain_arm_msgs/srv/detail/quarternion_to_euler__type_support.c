// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rain_arm_msgs:srv/QuarternionToEuler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rain_arm_msgs/srv/detail/quarternion_to_euler__rosidl_typesupport_introspection_c.h"
#include "rain_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rain_arm_msgs/srv/detail/quarternion_to_euler__functions.h"
#include "rain_arm_msgs/srv/detail/quarternion_to_euler__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rain_arm_msgs__srv__QuarternionToEuler_Request__init(message_memory);
}

void rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_fini_function(void * message_memory)
{
  rain_arm_msgs__srv__QuarternionToEuler_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Request, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_members = {
  "rain_arm_msgs__srv",  // message namespace
  "QuarternionToEuler_Request",  // message name
  4,  // number of fields
  sizeof(rain_arm_msgs__srv__QuarternionToEuler_Request),
  rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_member_array,  // message members
  rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_type_support_handle = {
  0,
  &rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rain_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Request)() {
  if (!rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_type_support_handle.typesupport_identifier) {
    rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rain_arm_msgs__srv__QuarternionToEuler_Request__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rain_arm_msgs/srv/detail/quarternion_to_euler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rain_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rain_arm_msgs/srv/detail/quarternion_to_euler__functions.h"
// already included above
// #include "rain_arm_msgs/srv/detail/quarternion_to_euler__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rain_arm_msgs__srv__QuarternionToEuler_Response__init(message_memory);
}

void rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_fini_function(void * message_memory)
{
  rain_arm_msgs__srv__QuarternionToEuler_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Response, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Response, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rain_arm_msgs__srv__QuarternionToEuler_Response, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_members = {
  "rain_arm_msgs__srv",  // message namespace
  "QuarternionToEuler_Response",  // message name
  3,  // number of fields
  sizeof(rain_arm_msgs__srv__QuarternionToEuler_Response),
  rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_member_array,  // message members
  rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_type_support_handle = {
  0,
  &rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rain_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Response)() {
  if (!rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_type_support_handle.typesupport_identifier) {
    rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rain_arm_msgs__srv__QuarternionToEuler_Response__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rain_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rain_arm_msgs/srv/detail/quarternion_to_euler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_members = {
  "rain_arm_msgs__srv",  // service namespace
  "QuarternionToEuler",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_Request_message_type_support_handle,
  NULL  // response message
  // rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_Response_message_type_support_handle
};

static rosidl_service_type_support_t rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_type_support_handle = {
  0,
  &rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rain_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler)() {
  if (!rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_type_support_handle.typesupport_identifier) {
    rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rain_arm_msgs, srv, QuarternionToEuler_Response)()->data;
  }

  return &rain_arm_msgs__srv__detail__quarternion_to_euler__rosidl_typesupport_introspection_c__QuarternionToEuler_service_type_support_handle;
}
