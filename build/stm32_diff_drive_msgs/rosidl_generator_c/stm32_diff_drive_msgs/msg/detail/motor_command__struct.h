// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_diff_drive_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package stm32_diff_drive_msgs.
typedef struct stm32_diff_drive_msgs__msg__MotorCommand
{
  bool is_pwm;
  /// in pwm mode this is cast to int and is pwm value
  float mot_1_req_rad_sec;
  /// in pwm mode this is cast to int and is pwm value
  float mot_2_req_rad_sec;
} stm32_diff_drive_msgs__msg__MotorCommand;

// Struct for a sequence of stm32_diff_drive_msgs__msg__MotorCommand.
typedef struct stm32_diff_drive_msgs__msg__MotorCommand__Sequence
{
  stm32_diff_drive_msgs__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_diff_drive_msgs__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
