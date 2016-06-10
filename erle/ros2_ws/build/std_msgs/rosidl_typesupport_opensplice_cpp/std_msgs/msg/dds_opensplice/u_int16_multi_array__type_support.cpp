// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.template

#include <limits>
#include <stdexcept>

#include <u_instanceHandle.h>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_opensplice_cpp package and
// is in the include/rosidl_typesupport_opensplice_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>
#include <rosidl_typesupport_opensplice_cpp/visibility_control.h>

#include "std_msgs/msg/u_int16_multi_array__struct.hpp"
#include "std_msgs/msg/dds_opensplice/u_int16_multi_array__type_support.hpp"
#include "std_msgs/msg/dds_opensplice/ccpp_UInt16MultiArray_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include <rosidl_typesupport_opensplice_cpp/message_type_support.h>

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace dds_
{
struct MultiArrayLayout_;
}  // namespace dds_
namespace typesupport_opensplice_cpp
{
void convert_ros_message_to_dds(
  const std_msgs::msg::MultiArrayLayout &,
  std_msgs::msg::dds_::MultiArrayLayout_ &);
void convert_dds_message_to_ros(
  const std_msgs::msg::dds_::MultiArrayLayout_ &,
  std_msgs::msg::MultiArrayLayout &);
}  // namespace typesupport_opensplice_cpp
}  // namespace msg
}  // namespace std_msgs


namespace std_msgs
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type = std_msgs::msg::dds_::UInt16MultiArray_;
using __ros_msg_type = std_msgs::msg::UInt16MultiArray;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_msgs
const char *
register_type__UInt16MultiArray(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  std_msgs::msg::dds_::UInt16MultiArray_TypeSupport type_support;
  DDS::ReturnCode_t status = type_support.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "std_msgs::msg::dds_::UInt16MultiArray_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "std_msgs::msg::dds_::UInt16MultiArray_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "std_msgs::msg::dds_::UInt16MultiArray_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "std_msgs::msg::dds_::UInt16MultiArray_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "std_msgs::msg::dds_::UInt16MultiArray_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_msgs
void
convert_ros_message_to_dds(const __ros_msg_type & ros_message, __dds_msg_type & dds_message)
{
  // field.name layout
  std_msgs::msg::typesupport_opensplice_cpp::convert_ros_message_to_dds(
    ros_message.layout, dds_message.layout_);

  // field.name data
  {
    size_t size = ros_message.data.size();
    if (size > (std::numeric_limits<DDS::Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.data_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.data_[i] = ros_message.data[i];
    }
  }

}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_msgs
const char *
publish__UInt16MultiArray(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type & ros_message = *(const __ros_msg_type *)untyped_ros_message;
  __dds_msg_type dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  std_msgs::msg::dds_::UInt16MultiArray_DataWriter * data_writer =
    std_msgs::msg::dds_::UInt16MultiArray_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "the handle has not been registered with this std_msgs::msg::dds_::UInt16MultiArray_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_msgs
void
convert_dds_message_to_ros(const __dds_msg_type & dds_message, __ros_msg_type & ros_message)
{
  // field.name layout
  std_msgs::msg::typesupport_opensplice_cpp::convert_dds_message_to_ros(
    dds_message.layout_, ros_message.layout);

  // field.name data
  {
    size_t size = dds_message.data_.length();
    ros_message.data.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.data[i] =
        dds_message.data_[i];
    }
  }

}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_msgs
const char *
take__UInt16MultiArray(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  };

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader*>(untyped_topic_reader);

  std_msgs::msg::dds_::UInt16MultiArray_DataReader * data_reader =
    std_msgs::msg::dds_::UInt16MultiArray_DataReader::_narrow(topic_reader);

  std_msgs::msg::dds_::UInt16MultiArray_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: "
             "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: "
             "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: "
             "a precondition is not met, one of: "
             "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
             "the two sequences do not have matching parameters (length, maximum, release), or "
             "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "std_msgs::msg::dds_::UInt16MultiArray_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type & ros_message = *(__ros_msg_type *)untyped_ros_message;
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan: "
             "this std_msgs::msg::dds_::UInt16MultiArray_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "std_msgs::msg::dds_::UInt16MultiArray_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "std_msgs::msg::dds_::UInt16MultiArray_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static message_type_support_callbacks_t callbacks = {
  "std_msgs",
  "UInt16MultiArray",
  &register_type__UInt16MultiArray,
  &publish__UInt16MultiArray,
  &take__UInt16MultiArray
};

static rosidl_message_type_support_t handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_opensplice_identifier,
  &callbacks
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace std_msgs

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT
const rosidl_message_type_support_t *
get_message_type_support_handle_opensplice<
  std_msgs::msg::UInt16MultiArray
>()
{
  return &std_msgs::msg::typesupport_opensplice_cpp::handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp
