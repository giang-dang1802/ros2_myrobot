// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_diff_drive_msgs:msg/EncoderVals.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__STRUCT_H_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderVals in the package stm32_diff_drive_msgs.
typedef struct stm32_diff_drive_msgs__msg__EncoderVals
{
  int32_t mot_1_enc_val;
  int32_t mot_2_enc_val;
} stm32_diff_drive_msgs__msg__EncoderVals;

// Struct for a sequence of stm32_diff_drive_msgs__msg__EncoderVals.
typedef struct stm32_diff_drive_msgs__msg__EncoderVals__Sequence
{
  stm32_diff_drive_msgs__msg__EncoderVals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_diff_drive_msgs__msg__EncoderVals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__STRUCT_H_
