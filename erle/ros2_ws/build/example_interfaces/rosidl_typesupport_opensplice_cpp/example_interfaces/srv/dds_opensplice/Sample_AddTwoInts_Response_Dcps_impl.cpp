#include "Sample_AddTwoInts_Response_Dcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "Sample_AddTwoInts_Response_SplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyIn(
    c_base base,
    struct example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ *from,
    struct _example_interfaces_srv_dds__Sample_AddTwoInts_Response_ *to);

extern void
__example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyOut(
    void *_from,
    void *_to);

// DDS example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ TypeSupportFactory Object Body

::DDS::DataWriter_ptr
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl(handle);
}

::DDS::DataReader_ptr
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl (handle);
}


::DDS::DataReaderView_ptr
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl (handle);
}

// DDS example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ TypeSupport Object Body

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::Sample_AddTwoInts_Response_TypeSupport(void) :
    TypeSupport_impl(
        __example_interfaces_srv_dds__Sample_AddTwoInts_Response___name(),
        __example_interfaces_srv_dds__Sample_AddTwoInts_Response___keys(),
        example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::metaDescriptor,
        (gapi_copyIn) __example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyIn,
        (gapi_copyOut) __example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq, example_interfaces::srv::dds_::Sample_AddTwoInts_Response_>,
        new  example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupportFactory(),
        example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::~Sample_AddTwoInts_Response_TypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ DataWriter_impl Object Body

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::Sample_AddTwoInts_Response_DataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::~Sample_AddTwoInts_Response_DataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::register_instance(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::register_instance_w_timestamp(
    const Sample_AddTwoInts_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::unregister_instance(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::unregister_instance_w_timestamp(
    const Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::write(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::write_w_timestamp(
    const Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::dispose(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::dispose_w_timestamp(
    const Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::writedispose(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::writedispose_w_timestamp(
    const Sample_AddTwoInts_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::get_key_value(
    Sample_AddTwoInts_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataWriter_impl::lookup_instance(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ DataReader_impl Object Body

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::Sample_AddTwoInts_Response_DataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq>)
{
    // Parent constructor takes care of everything.
}

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::~Sample_AddTwoInts_Response_DataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read_next_sample(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take_next_sample(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read_next_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take_next_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::read_next_instance_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::take_next_instance_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::return_loan(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::get_key_value(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::lookup_instance(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_PRECONDITION_NOT_MET;

    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
                max_samples <= static_cast<DDS::Long>(received_data.maximum()) ||
                max_samples == ::DDS::LENGTH_UNLIMITED ) {
                status = ::DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ DataReaderView_impl Object Body

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::Sample_AddTwoInts_Response_DataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::~Sample_AddTwoInts_Response_DataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read_next_sample(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take_next_sample(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read_next_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take_next_instance(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::read_next_instance_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::take_next_instance_w_condition(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::return_loan(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = ::DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() &&
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == ::DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        example_interfaces::srv::dds_::Sample_AddTwoInts_Response_Seq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == ::DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = ::DDS::RETCODE_OK;
                    } else {
                        status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = ::DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


::DDS::ReturnCode_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::get_key_value(
    example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
example_interfaces::srv::dds_::Sample_AddTwoInts_Response_DataReaderView_impl::lookup_instance(
    const example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"example_interfaces\"><Module name=\"srv\"><Module name=\"dds_\">",
"<Struct name=\"AddTwoInts_Response_\"><Member name=\"sum_\"><LongLong/></Member></Struct><Struct name=\"Sample_AddTwoInts_Response_\">",
"<Member name=\"client_guid_0_\"><ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member>",
"<Member name=\"sequence_number_\"><LongLong/></Member><Member name=\"response_\"><Type name=\"AddTwoInts_Response_\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
const ::DDS::ULong (::example_interfaces::srv::dds_::Sample_AddTwoInts_Response_TypeSupport::metaDescriptorArrLength) = 5;