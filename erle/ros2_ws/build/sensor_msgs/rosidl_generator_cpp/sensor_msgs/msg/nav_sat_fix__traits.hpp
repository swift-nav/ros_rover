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

#ifndef __sensor_msgs__msg__nav_sat_fix__traits__hpp__
#define __sensor_msgs__msg__nav_sat_fix__traits__hpp__

#include "sensor_msgs/msg/nav_sat_fix__struct.hpp"


template<>
struct has_fixed_size<sensor_msgs::msg::NavSatFix>
{
  static const bool value = has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<sensor_msgs::msg::NavSatStatus>::value;
};

#endif  /* __sensor_msgs__msg__nav_sat_fix__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
