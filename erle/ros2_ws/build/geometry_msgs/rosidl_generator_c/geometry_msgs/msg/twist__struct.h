// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <geometry_msgs/Vector3-c.h>
#include <geometry_msgs/Vector3-c.h>

// types for static array fields

// message struct
typedef struct geometry_msgs__msg__Twist
{
  geometry_msgs__Vector3 linear;
  geometry_msgs__Vector3 angular;
} geometry_msgs__msg__Twist;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__Twist);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_