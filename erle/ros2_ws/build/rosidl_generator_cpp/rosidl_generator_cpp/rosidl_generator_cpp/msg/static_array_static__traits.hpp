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

#ifndef __rosidl_generator_cpp__msg__static_array_static__traits__hpp__
#define __rosidl_generator_cpp__msg__static_array_static__traits__hpp__

#include "rosidl_generator_cpp/msg/static_array_static__struct.hpp"


template<>
struct has_fixed_size<rosidl_generator_cpp::msg::StaticArrayStatic>
{
  static const bool value = has_fixed_size<rosidl_generator_cpp::msg::PrimitivesStatic>::value;
};

#endif  /* __rosidl_generator_cpp__msg__static_array_static__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */