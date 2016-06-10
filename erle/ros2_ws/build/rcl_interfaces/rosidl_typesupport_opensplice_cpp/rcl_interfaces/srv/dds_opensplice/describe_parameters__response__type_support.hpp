// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.hpp.template

#ifndef __rcl_interfaces__srv__dds_opensplice__describe_parameters__response__type_support__hpp__
#define __rcl_interfaces__srv__dds_opensplice__describe_parameters__response__type_support__hpp__

#include "rcl_interfaces/srv/describe_parameters__response__struct.hpp"
#include "rcl_interfaces/srv/dds_opensplice/ccpp_DescribeParameters_Response_.h"
#include "rcl_interfaces/msg/dds_opensplice/visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace rcl_interfaces
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void register_type__DescribeParameters_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_ros_message_to_dds(
  const rcl_interfaces::srv::DescribeParameters_Response& ros_message,
  rcl_interfaces::srv::dds_::DescribeParameters_Response_& dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void publish__DescribeParameters_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern void convert_dds_message_to_ros(
  const rcl_interfaces::srv::dds_::DescribeParameters_Response_& dds_message,
  rcl_interfaces::srv::DescribeParameters_Response& ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
extern bool take__DescribeParameters_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__srv__dds_opensplice__describe_parameters__response__type_support__hpp__
