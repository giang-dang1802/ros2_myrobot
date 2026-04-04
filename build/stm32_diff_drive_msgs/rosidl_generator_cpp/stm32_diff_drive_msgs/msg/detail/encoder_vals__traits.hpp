// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_diff_drive_msgs:msg/EncoderVals.idl
// generated code does not contain a copyright notice

#ifndef STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__TRAITS_HPP_
#define STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_diff_drive_msgs/msg/detail/encoder_vals__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_diff_drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderVals & msg,
  std::ostream & out)
{
  out << "{";
  // member: mot_1_enc_val
  {
    out << "mot_1_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.mot_1_enc_val, out);
    out << ", ";
  }

  // member: mot_2_enc_val
  {
    out << "mot_2_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.mot_2_enc_val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderVals & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mot_1_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mot_1_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.mot_1_enc_val, out);
    out << "\n";
  }

  // member: mot_2_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mot_2_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.mot_2_enc_val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderVals & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace stm32_diff_drive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use stm32_diff_drive_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stm32_diff_drive_msgs::msg::EncoderVals & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_diff_drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_diff_drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_diff_drive_msgs::msg::EncoderVals & msg)
{
  return stm32_diff_drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_diff_drive_msgs::msg::EncoderVals>()
{
  return "stm32_diff_drive_msgs::msg::EncoderVals";
}

template<>
inline const char * name<stm32_diff_drive_msgs::msg::EncoderVals>()
{
  return "stm32_diff_drive_msgs/msg/EncoderVals";
}

template<>
struct has_fixed_size<stm32_diff_drive_msgs::msg::EncoderVals>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_diff_drive_msgs::msg::EncoderVals>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_diff_drive_msgs::msg::EncoderVals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_DIFF_DRIVE_MSGS__MSG__DETAIL__ENCODER_VALS__TRAITS_HPP_
