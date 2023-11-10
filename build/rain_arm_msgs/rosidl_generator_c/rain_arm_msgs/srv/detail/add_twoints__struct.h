// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rain_arm_msgs:srv/AddTwoints.idl
// generated code does not contain a copyright notice

#ifndef RAIN_ARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_
#define RAIN_ARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoints in the package rain_arm_msgs.
typedef struct rain_arm_msgs__srv__AddTwoints_Request
{
  int64_t a;
  int64_t b;
} rain_arm_msgs__srv__AddTwoints_Request;

// Struct for a sequence of rain_arm_msgs__srv__AddTwoints_Request.
typedef struct rain_arm_msgs__srv__AddTwoints_Request__Sequence
{
  rain_arm_msgs__srv__AddTwoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rain_arm_msgs__srv__AddTwoints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoints in the package rain_arm_msgs.
typedef struct rain_arm_msgs__srv__AddTwoints_Response
{
  int64_t sum;
} rain_arm_msgs__srv__AddTwoints_Response;

// Struct for a sequence of rain_arm_msgs__srv__AddTwoints_Response.
typedef struct rain_arm_msgs__srv__AddTwoints_Response__Sequence
{
  rain_arm_msgs__srv__AddTwoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rain_arm_msgs__srv__AddTwoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAIN_ARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_
