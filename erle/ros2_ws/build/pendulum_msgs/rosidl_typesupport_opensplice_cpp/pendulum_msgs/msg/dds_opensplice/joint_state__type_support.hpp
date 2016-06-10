// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __pendulum_msgs__msg__dds_opensplice__joint_state__type_support__hpp__
#define __pendulum_msgs__msg__dds_opensplice__joint_state__type_support__hpp__

#include "pendulum_msgs/msg/joint_state__struct.hpp"
#include "pendulum_msgs/msg/dds_opensplice/ccpp_JointState_.h"
#include "pendulum_msgs/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace pendulum_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void register_type__JointState(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void convert_ros_message_to_dds(
  const pendulum_msgs::msg::JointState& ros_message,
  pendulum_msgs::msg::dds_::JointState_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void publish__JointState(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern void convert_dds_message_to_ros(
  const pendulum_msgs::msg::dds_::JointState_& dds_message,
  pendulum_msgs::msg::JointState& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
extern bool take__JointState(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace pendulum_msgs

#endif  // __pendulum_msgs__msg__dds_opensplice__joint_state__type_support__hpp__