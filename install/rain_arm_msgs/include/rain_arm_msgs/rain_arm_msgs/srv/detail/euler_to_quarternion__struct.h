// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rain_arm_msgs:srv/EulerToQuarternion.idl
// generated code does not contain a copyright notice

#ifndef RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__STRUCT_H_
#define RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EulerToQuarternion in the package rain_arm_msgs.
typedef struct rain_arm_msgs__srv__EulerToQuarternion_Request
{
  double roll;
  double pitch;
  double yaw;
} rain_arm_msgs__srv__EulerToQuarternion_Request;

// Struct for a sequence of rain_arm_msgs__srv__EulerToQuarternion_Request.
typedef struct rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence
{
  rain_arm_msgs__srv__EulerToQuarternion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EulerToQuarternion in the package rain_arm_msgs.
typedef struct rain_arm_msgs__srv__EulerToQuarternion_Response
{
  double x;
  double y;
  double z;
  double w;
} rain_arm_msgs__srv__EulerToQuarternion_Response;

// Struct for a sequence of rain_arm_msgs__srv__EulerToQuarternion_Response.
typedef struct rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence
{
  rain_arm_msgs__srv__EulerToQuarternion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__STRUCT_H_
