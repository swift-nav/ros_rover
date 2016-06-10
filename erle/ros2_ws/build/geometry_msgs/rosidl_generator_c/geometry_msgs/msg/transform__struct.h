// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <geometry_msgs/Vector3-c.h>
#include <geometry_msgs/Quaternion-c.h>

// types for static array fields

// message struct
typedef struct geometry_msgs__msg__Transform
{
  geometry_msgs__Vector3 translation;
  geometry_msgs__Quaternion rotation;
} geometry_msgs__msg__Transform;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__Transform);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORM__STRUCT_H_