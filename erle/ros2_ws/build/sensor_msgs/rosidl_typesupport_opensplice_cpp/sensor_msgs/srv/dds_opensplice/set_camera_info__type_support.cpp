// generated from rosidl_typesupport_opensplice_cpp/resource/srv__type_support.cpp.template

#include <iostream>
#include <sstream>

#include <rosidl_generator_c/service_type_support.h>
// This is defined in the rosidl_typesupport_opensplice_cpp package and
// is in the include/rosidl_typesupport_opensplice_cpp/impl folder.
#include <rosidl_generator_cpp/message_type_support.hpp>
#include <rosidl_generator_cpp/service_type_support.hpp>
#include <rosidl_typesupport_opensplice_cpp/visibility_control.h>
#include <rmw/rmw.h>

#include "sensor_msgs/srv/set_camera_info__struct.hpp"
#include "sensor_msgs/srv/dds_opensplice/set_camera_info__request__type_support.hpp"
#include "sensor_msgs/srv/dds_opensplice/set_camera_info__response__type_support.hpp"
#include "sensor_msgs/srv/dds_opensplice/ccpp_SetCameraInfo_Request_.h"
#include "sensor_msgs/srv/dds_opensplice/ccpp_SetCameraInfo_Response_.h"
#include "sensor_msgs/srv/dds_opensplice/ccpp_Sample_SetCameraInfo_Request_.h"
#include "sensor_msgs/srv/dds_opensplice/ccpp_Sample_SetCameraInfo_Response_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/service_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/requester.hpp"
#include "rosidl_typesupport_opensplice_cpp/responder.hpp"


namespace rosidl_typesupport_opensplice_cpp
{


template <>
class Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_> :
public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_
{
public:

  sensor_msgs::srv::dds_::SetCameraInfo_Request_ & data() {
    
    return request_;
    
  }

  operator sensor_msgs::srv::dds_::SetCameraInfo_Request_() {
    return reinterpret_cast<sensor_msgs::srv::dds_::SetCameraInfo_Request_ &>(*this);
  }
};

template <>
class TemplateDataReader<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_>
: public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader
{
public:

  static const char * take_sample(
    DDS::DataReader* datareader,
    Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_> & sample,
    bool * taken)
  noexcept
  {
    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader * typed_datareader = _narrow(datareader);

    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      DDS::ALIVE_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.take failed with "
               "unknown return code";
    }

    if (sample_infos.length() > 0 && sample_infos[0].valid_data) {
      sample = reinterpret_cast<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_> &>(dds_messages[0]);
      status = typed_datareader->return_loan(dds_messages, sample_infos);
      switch (status) {
        case DDS::RETCODE_ERROR:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with: "
                 "an internal error has occurred";
        case DDS::RETCODE_ALREADY_DELETED:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with: "
                 "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader has already been deleted";
        case DDS::RETCODE_OUT_OF_RESOURCES:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with: "
                 "out of resources";
        case DDS::RETCODE_NOT_ENABLED:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with: "
                 "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader is not enabled";
        case DDS::RETCODE_PRECONDITION_NOT_MET:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with: "
                 "a precondition is not met, one of: "
                 "the data_values and info_seq do not belong to a single related pair, or "
                 "the data_values and info_seq were not obtained from this "
                 "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader";
        case DDS::RETCODE_OK:
          *taken = true;
          return nullptr;
        default:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader.return_loan failed with "
                 "unknown return code";
      }
    }

    *taken = false;
    return nullptr;
  }
};

template <>
class TemplateDataReader<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_>>
: public TemplateDataReader<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_>
{};

template <>
class TemplateDataWriter<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_>
: public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter
{
public:

  static const char * write_sample(
    DDS::DataWriter* datawriter,
    Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_>& sample)
  noexcept
  {
    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter* typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "the handle has not been registered with this "
               "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter.write: unknown return code";
    }
  }
};

template <>
class TemplateDataWriter<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_>>
: public TemplateDataWriter<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_>
{};



template <>
class Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_> :
public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_
{
public:

  sensor_msgs::srv::dds_::SetCameraInfo_Response_ & data() {
    
    return response_;
    
  }

  operator sensor_msgs::srv::dds_::SetCameraInfo_Response_() {
    return reinterpret_cast<sensor_msgs::srv::dds_::SetCameraInfo_Response_ &>(*this);
  }
};

template <>
class TemplateDataReader<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_>
: public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader
{
public:

  static const char * take_sample(
    DDS::DataReader* datareader,
    Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_> & sample,
    bool * taken)
  noexcept
  {
    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader * typed_datareader = _narrow(datareader);

    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      DDS::ALIVE_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.take failed with "
               "unknown return code";
    }

    if (sample_infos.length() > 0 && sample_infos[0].valid_data) {
      sample = reinterpret_cast<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_> &>(dds_messages[0]);
      status = typed_datareader->return_loan(dds_messages, sample_infos);
      switch (status) {
        case DDS::RETCODE_ERROR:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with: "
                 "an internal error has occurred";
        case DDS::RETCODE_ALREADY_DELETED:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with: "
                 "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader has already been deleted";
        case DDS::RETCODE_OUT_OF_RESOURCES:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with: "
                 "out of resources";
        case DDS::RETCODE_NOT_ENABLED:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with: "
                 "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader is not enabled";
        case DDS::RETCODE_PRECONDITION_NOT_MET:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with: "
                 "a precondition is not met, one of: "
                 "the data_values and info_seq do not belong to a single related pair, or "
                 "the data_values and info_seq were not obtained from this "
                 "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader";
        case DDS::RETCODE_OK:
          *taken = true;
          return nullptr;
        default:
          return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataReader.return_loan failed with "
                 "unknown return code";
      }
    }

    *taken = false;
    return nullptr;
  }
};

template <>
class TemplateDataReader<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_>>
: public TemplateDataReader<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_>
{};

template <>
class TemplateDataWriter<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_>
: public sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter
{
public:

  static const char * write_sample(
    DDS::DataWriter* datawriter,
    Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_>& sample)
  noexcept
  {
    sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter* typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "this sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "the handle has not been registered with this "
               "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_DataWriter.write: unknown return code";
    }
  }
};

template <>
class TemplateDataWriter<Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_>>
: public TemplateDataWriter<sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_>
{};





} // namespace rosidl_typesupport_opensplice_cpp

namespace sensor_msgs
{

namespace srv
{

namespace typesupport_opensplice_cpp
{

const char *
register_types__SetCameraInfo(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  DDS::DomainParticipant* participant = static_cast<DDS::DomainParticipant*>(untyped_participant);

  sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport ros_request_ts;
  DDS::ReturnCode_t status = ros_request_ts.register_type(participant, request_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupport.register_type: unkown return code";
  }

  sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport ros_response_ts;
  status = ros_response_ts.register_type(participant, response_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport.register_type: "
             "precondition not met, already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_TypeSupport.register_type: unkown return code";
  }
  return nullptr;
}

const char *
create_requester__SetCameraInfo(
  void * untyped_participant, const char * service_name,
  void **untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void * (* allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo");
  const std::string request_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_");
  const std::string response_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__SetCameraInfo(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;

  RequesterT * requester = static_cast<RequesterT *>(_allocator(sizeof(RequesterT)));
  if (!requester) {
    return "failed to allocate memory for requester";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (requester) RequesterT(participant, service_name, service_type_name);
  } catch(...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of RequesterT";
  }
  error_string = requester->init(datareader_qos, datawriter_qos);
  if (error_string) {
    return error_string;
  }

  *untyped_requester = requester;
  *untyped_reader = requester->get_response_datareader();

  return nullptr;
}

const char *
create_responder__SetCameraInfo(
  void * untyped_participant, const char * service_name,
  void **untyped_responder, void **untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void * (* allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo");
  const std::string request_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_");
  const std::string response_type_name("sensor_msgs::srv::dds_::Sample_SetCameraInfo_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

   const char * error_string = register_types__SetCameraInfo(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;

  ResponderT * responder = static_cast<ResponderT *>(_allocator(sizeof(ResponderT)));
  if (!responder) {
    return "failed to allocate memory for responder";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (responder) ResponderT(participant, service_name, service_type_name);
  } catch(...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of ResponderT";
  }
  error_string = responder->init(datareader_qos, datawriter_qos);
  if (error_string) {
    return error_string;
  }

  *untyped_responder = responder;
  *untyped_reader = responder->get_request_datareader();

  return nullptr;
}

const char *
send_request__SetCameraInfo(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_>;
  using ROSRequestT = sensor_msgs::srv::SetCameraInfo_Request;

  SampleT request;
  auto ros_request = reinterpret_cast<const ROSRequestT *>(untyped_ros_request);
  sensor_msgs::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_request, request.data());

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__SetCameraInfo(
  void * untyped_responder, void * untyped_ros_request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;
  using ROSRequestT = sensor_msgs::srv::SetCameraInfo_Request;

  auto ros_request = static_cast<ROSRequestT *>(untyped_ros_request);
  auto request_header = static_cast<rmw_request_id_t *>(untyped_ros_request_header);

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<sensor_msgs::srv::dds_::SetCameraInfo_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    sensor_msgs::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(request.data(), *ros_request);

    request_header->sequence_number = request.sequence_number_;
    *(reinterpret_cast<uint64_t *>(&request_header->writer_guid[0])) = request.client_guid_0_;
    *(reinterpret_cast<uint64_t *>(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_))) = request.client_guid_1_;

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__SetCameraInfo(
  void * untyped_responder, const void * untyped_ros_request_header,
  const void * untyped_ros_response)
{
  using ROSResponseT = sensor_msgs::srv::SetCameraInfo_Response;
  rosidl_typesupport_opensplice_cpp::Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_> response;
  auto ros_response = reinterpret_cast<const ROSResponseT *>(untyped_ros_response);
  sensor_msgs::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_response, response.data());

  auto request_header = reinterpret_cast<const rmw_request_id_t *>(untyped_ros_request_header);

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__SetCameraInfo(
  void * untyped_requester, void * untyped_ros_request_header, void * untyped_ros_response,
  bool * taken)
{
  using ROSResponseT = sensor_msgs::srv::SetCameraInfo_Response;
  auto ros_response = static_cast<ROSResponseT *>(untyped_ros_response);

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<sensor_msgs::srv::dds_::SetCameraInfo_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    auto req_id = reinterpret_cast<rmw_request_id_t *>(untyped_ros_request_header);

    req_id->sequence_number = response.sequence_number_;

    sensor_msgs::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(
      response.data(), *ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__SetCameraInfo(void * untyped_requester, void (* deallocator)(void *))
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;

  auto requester = static_cast<RequesterT *>(untyped_requester);
  try {
    requester->~RequesterT();
  } catch(...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of RequesterT";
  }
  // TODO(wjwwood): we need a "deinit" function on the class to undo anything done in the init().
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

const char *
destroy_responder__SetCameraInfo(void * untyped_responder, void (* deallocator)(void *))
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    sensor_msgs::srv::dds_::SetCameraInfo_Request_,
    sensor_msgs::srv::dds_::SetCameraInfo_Response_
  >;
  auto responder = static_cast<ResponderT *>(untyped_responder);
  try {
    responder->~ResponderT();
  } catch(...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of ResponderT";
  }
  // TODO(wjwwood): we need a "deinit" function on the class to undo anything done in the init().
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(responder);
  return nullptr;
}

static service_type_support_callbacks_t callbacks = {
  "sensor_msgs",
  "SetCameraInfo",
  &create_requester__SetCameraInfo,
  &destroy_requester__SetCameraInfo,
  &create_responder__SetCameraInfo,
  &destroy_responder__SetCameraInfo,
  &send_request__SetCameraInfo,
  &take_request__SetCameraInfo,
  &send_response__SetCameraInfo,
  &take_response__SetCameraInfo,
};

static rosidl_service_type_support_t handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_opensplice_identifier,
  &callbacks
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv

}  // namespace sensor_msgs


namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT
const rosidl_service_type_support_t *
get_service_type_support_handle_opensplice<sensor_msgs::srv::SetCameraInfo>()
{
  return &sensor_msgs::srv::typesupport_opensplice_cpp::handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp