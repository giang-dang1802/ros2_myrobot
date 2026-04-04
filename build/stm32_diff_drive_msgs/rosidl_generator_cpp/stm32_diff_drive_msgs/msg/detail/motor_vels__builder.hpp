// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_diff_drive_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_diff_drive_msgs/msg/detail/motor_vels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_diff_drive_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorVels_mot_2_rad_sec
{
public:
  explicit Init_MotorVels_mot_2_rad_sec(::stm32_diff_drive_msgs::msg::MotorVels & msg)
  : msg_(msg)
  {}
  ::stm32_diff_drive_msgs::msg::MotorVels mot_2_rad_sec(::stm32_diff_drive_msgs::msg::MotorVels::_mot_2_rad_sec_type arg)
  {
    msg_.mot_2_rad_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::MotorVels msg_;
};

class Init_MotorVels_mot_1_rad_sec
{
public:
  Init_MotorVels_mot_1_rad_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorVels_mot_2_rad_sec mot_1_rad_sec(::stm32_diff_drive_msgs::msg::MotorVels::_mot_1_rad_sec_type arg)
  {
    msg_.mot_1_rad_sec = std::move(arg);
    return Init_MotorVels_mot_2_rad_sec(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::MotorVels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_diff_drive_msgs::msg::MotorVels>()
{
  return stm32_diff_drive_msgs::msg::builder::Init_MotorVels_mot_1_rad_sec();
}

}  // namespace stm32_diff_drive_msgs

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_
