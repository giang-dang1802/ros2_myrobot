// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm32_diff_drive_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm32_diff_drive_msgs/msg/detail/motor_vels__rosidl_typesupport_introspection_c.h"
#include "stm32_diff_drive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm32_diff_drive_msgs/msg/detail/motor_vels__functions.h"
#include "stm32_diff_drive_msgs/msg/detail/motor_vels__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm32_diff_drive_msgs__msg__MotorVels__init(message_memory);
}

void stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_fini_function(void * message_memory)
{
  stm32_diff_drive_msgs__msg__MotorVels__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_member_array[2] = {
  {
    "mot_1_rad_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_diff_drive_msgs__msg__MotorVels, mot_1_rad_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mot_2_rad_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_diff_drive_msgs__msg__MotorVels, mot_2_rad_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_members = {
  "stm32_diff_drive_msgs__msg",  // message namespace
  "MotorVels",  // message name
  2,  // number of fields
  sizeof(stm32_diff_drive_msgs__msg__MotorVels),
  stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_member_array,  // message members
  stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_init_function,  // function to initialize message memory (memory has to be allocated)
  stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_type_support_handle = {
  0,
  &stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_diff_drive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_diff_drive_msgs, msg, MotorVels)() {
  if (!stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_type_support_handle.typesupport_identifier) {
    stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stm32_diff_drive_msgs__msg__MotorVels__rosidl_typesupport_introspection_c__MotorVels_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
