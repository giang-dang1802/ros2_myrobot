// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_diff_drive_msgs:msg/EncoderVals.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__BUILDER_HPP_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_diff_drive_msgs/msg/detail/encoder_vals__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_diff_drive_msgs
{

namespace msg
{

namespace builder
{

class Init_EncoderVals_mot_2_enc_val
{
public:
  explicit Init_EncoderVals_mot_2_enc_val(::stm32_diff_drive_msgs::msg::EncoderVals & msg)
  : msg_(msg)
  {}
  ::stm32_diff_drive_msgs::msg::EncoderVals mot_2_enc_val(::stm32_diff_drive_msgs::msg::EncoderVals::_mot_2_enc_val_type arg)
  {
    msg_.mot_2_enc_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::EncoderVals msg_;
};

class Init_EncoderVals_mot_1_enc_val
{
public:
  Init_EncoderVals_mot_1_enc_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderVals_mot_2_enc_val mot_1_enc_val(::stm32_diff_drive_msgs::msg::EncoderVals::_mot_1_enc_val_type arg)
  {
    msg_.mot_1_enc_val = std::move(arg);
    return Init_EncoderVals_mot_2_enc_val(msg_);
  }

private:
  ::stm32_diff_drive_msgs::msg::EncoderVals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_diff_drive_msgs::msg::EncoderVals>()
{
  return stm32_diff_drive_msgs::msg::builder::Init_EncoderVals_mot_1_enc_val();
}

}  // namespace stm32_diff_drive_msgs

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__BUILDER_HPP_
