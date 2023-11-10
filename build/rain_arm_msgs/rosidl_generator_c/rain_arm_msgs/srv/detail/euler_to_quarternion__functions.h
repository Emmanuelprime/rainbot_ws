// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rain_arm_msgs:srv/EulerToQuarternion.idl
// generated code does not contain a copyright notice

#ifndef RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__FUNCTIONS_H_
#define RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rain_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rain_arm_msgs/srv/detail/euler_to_quarternion__struct.h"

/// Initialize srv/EulerToQuarternion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rain_arm_msgs__srv__EulerToQuarternion_Request
 * )) before or use
 * rain_arm_msgs__srv__EulerToQuarternion_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__init(rain_arm_msgs__srv__EulerToQuarternion_Request * msg);

/// Finalize srv/EulerToQuarternion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Request__fini(rain_arm_msgs__srv__EulerToQuarternion_Request * msg);

/// Create srv/EulerToQuarternion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
rain_arm_msgs__srv__EulerToQuarternion_Request *
rain_arm_msgs__srv__EulerToQuarternion_Request__create();

/// Destroy srv/EulerToQuarternion message.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Request__destroy(rain_arm_msgs__srv__EulerToQuarternion_Request * msg);

/// Check for srv/EulerToQuarternion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__are_equal(const rain_arm_msgs__srv__EulerToQuarternion_Request * lhs, const rain_arm_msgs__srv__EulerToQuarternion_Request * rhs);

/// Copy a srv/EulerToQuarternion message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__copy(
  const rain_arm_msgs__srv__EulerToQuarternion_Request * input,
  rain_arm_msgs__srv__EulerToQuarternion_Request * output);

/// Initialize array of srv/EulerToQuarternion messages.
/**
 * It allocates the memory for the number of elements and calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__init(rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * array, size_t size);

/// Finalize array of srv/EulerToQuarternion messages.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__fini(rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * array);

/// Create array of srv/EulerToQuarternion messages.
/**
 * It allocates the memory for the array and calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence *
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__create(size_t size);

/// Destroy array of srv/EulerToQuarternion messages.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__destroy(rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * array);

/// Check for srv/EulerToQuarternion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__are_equal(const rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * lhs, const rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * rhs);

/// Copy an array of srv/EulerToQuarternion messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence__copy(
  const rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * input,
  rain_arm_msgs__srv__EulerToQuarternion_Request__Sequence * output);

/// Initialize srv/EulerToQuarternion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rain_arm_msgs__srv__EulerToQuarternion_Response
 * )) before or use
 * rain_arm_msgs__srv__EulerToQuarternion_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__init(rain_arm_msgs__srv__EulerToQuarternion_Response * msg);

/// Finalize srv/EulerToQuarternion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Response__fini(rain_arm_msgs__srv__EulerToQuarternion_Response * msg);

/// Create srv/EulerToQuarternion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
rain_arm_msgs__srv__EulerToQuarternion_Response *
rain_arm_msgs__srv__EulerToQuarternion_Response__create();

/// Destroy srv/EulerToQuarternion message.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Response__destroy(rain_arm_msgs__srv__EulerToQuarternion_Response * msg);

/// Check for srv/EulerToQuarternion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__are_equal(const rain_arm_msgs__srv__EulerToQuarternion_Response * lhs, const rain_arm_msgs__srv__EulerToQuarternion_Response * rhs);

/// Copy a srv/EulerToQuarternion message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__copy(
  const rain_arm_msgs__srv__EulerToQuarternion_Response * input,
  rain_arm_msgs__srv__EulerToQuarternion_Response * output);

/// Initialize array of srv/EulerToQuarternion messages.
/**
 * It allocates the memory for the number of elements and calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__init(rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * array, size_t size);

/// Finalize array of srv/EulerToQuarternion messages.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__fini(rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * array);

/// Create array of srv/EulerToQuarternion messages.
/**
 * It allocates the memory for the array and calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence *
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__create(size_t size);

/// Destroy array of srv/EulerToQuarternion messages.
/**
 * It calls
 * rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
void
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__destroy(rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * array);

/// Check for srv/EulerToQuarternion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__are_equal(const rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * lhs, const rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * rhs);

/// Copy an array of srv/EulerToQuarternion messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rain_arm_msgs
bool
rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence__copy(
  const rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * input,
  rain_arm_msgs__srv__EulerToQuarternion_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RAIN_ARM_MSGS__SRV__DETAIL__EULER_TO_QUARTERNION__FUNCTIONS_H_
