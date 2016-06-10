// generated from rosidl_generator_cpp/resource/msg__traits.hpp.template

#include <array>
#include <stdint.h>
#include <string>
#include <vector>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __rcl_interfaces__srv__set_parameters_atomically__response__traits__hpp__
#define __rcl_interfaces__srv__set_parameters_atomically__response__traits__hpp__

#include "rcl_interfaces/srv/set_parameters_atomically__response__struct.hpp"


template<>
struct has_fixed_size<rcl_interfaces::srv::SetParametersAtomically_Response>
{
  static const bool value = has_fixed_size<rcl_interfaces::msg::SetParametersResult>::value;
};

#endif  /* __rcl_interfaces__srv__set_parameters_atomically__response__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */