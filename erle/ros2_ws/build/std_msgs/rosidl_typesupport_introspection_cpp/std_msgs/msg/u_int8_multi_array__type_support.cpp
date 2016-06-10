// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __std_msgs__msg__u_int8_multi_array__type_support__h__
#define __std_msgs__msg__u_int8_multi_array__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "std_msgs/msg/u_int8_multi_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace std_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember UInt8MultiArray_message_member_array[2] = {
  {
    "layout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<std_msgs::msg::MultiArrayLayout>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs::msg::UInt8MultiArray, layout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs::msg::UInt8MultiArray, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UInt8MultiArray_message_members = {
  "std_msgs",  // package name
  "UInt8MultiArray",  // message name
  2,  // number of fields
  UInt8MultiArray_message_member_array  // message members
};

static const rosidl_message_type_support_t UInt8MultiArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &UInt8MultiArray_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace std_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<std_msgs::msg::UInt8MultiArray>()
{
  return &::std_msgs::msg::rosidl_typesupport_introspection_cpp::UInt8MultiArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __std_msgs__msg__u_int8_multi_array__type_support__h__
