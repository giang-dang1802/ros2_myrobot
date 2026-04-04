// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_diff_drive_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_diff_drive_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_diff_drive_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_mot_2_req_rad_sec
{
public:
  explicit Init_MotorCommand_mot_2_req_rad_sec(::stm32_diff_drive_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::stm32_diff_drive_msgs::msg::MotorCommand mot_2_req_rad_sec(::stm32_diff_drive_msgs::msg::MotorCommand::_mot_2_req_rad_sec_type arg)
  {
    msg_.mot_2_req_rad_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_mot_1_req_rad_sec
{
public:
  explicit Init_MotorCommand_mot_1_req_rad_sec(::stm32_diff_drive_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_mot_2_req_rad_sec mot_1_req_rad_sec(::stm32_diff_drive_msgs::msg::MotorCommand::_mot_1_req_rad_sec_type arg)
  {
    msg_.mot_1_req_rad_sec = std::move(arg);
    return Init_MotorCommand_mot_2_req_rad_sec(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_is_pwm
{
public:
  Init_MotorCommand_is_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_mot_1_req_rad_sec is_pwm(::stm32_diff_drive_msgs::msg::MotorCommand::_is_pwm_type arg)
  {
    msg_.is_pwm = std::move(arg);
    return Init_MotorCommand_mot_1_req_rad_sec(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_diff_drive_msgs::msg::MotorCommand>()
{
  return stm32_diff_drive_msgs::msg::builder::Init_MotorCommand_is_pwm();
}

}  // namespace stm32_diff_drive_msgs

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
