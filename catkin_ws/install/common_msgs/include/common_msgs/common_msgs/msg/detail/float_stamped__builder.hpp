// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
#define COMMON_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_msgs/msg/detail/float_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_msgs
{

namespace msg
{

namespace builder
{

class Init_FloatStamped_data
{
public:
  explicit Init_FloatStamped_data(::common_msgs::msg::FloatStamped & msg)
  : msg_(msg)
  {}
  ::common_msgs::msg::FloatStamped data(::common_msgs::msg::FloatStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msgs::msg::FloatStamped msg_;
};

class Init_FloatStamped_header
{
public:
  Init_FloatStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FloatStamped_data header(::common_msgs::msg::FloatStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FloatStamped_data(msg_);
  }

private:
  ::common_msgs::msg::FloatStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msgs::msg::FloatStamped>()
{
  return common_msgs::msg::builder::Init_FloatStamped_header();
}

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
