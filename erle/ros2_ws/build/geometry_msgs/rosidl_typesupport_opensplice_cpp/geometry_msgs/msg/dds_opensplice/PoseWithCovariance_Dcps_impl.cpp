#include "PoseWithCovariance_Dcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "PoseWithCovariance_SplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__geometry_msgs_msg_dds__PoseWithCovariance___copyIn(
    c_base base,
    struct geometry_msgs::msg::dds_::PoseWithCovariance_ *from,
    struct _geometry_msgs_msg_dds__PoseWithCovariance_ *to);

extern void
__geometry_msgs_msg_dds__PoseWithCovariance___copyOut(
    void *_from,
    void *_to);

// DDS geometry_msgs::msg::dds_::PoseWithCovariance_ TypeSupportFactory Object Body

::DDS::DataWriter_ptr
geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl(handle);
}

::DDS::DataReader_ptr
geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl (handle);
}


::DDS::DataReaderView_ptr
geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl (handle);
}

// DDS geometry_msgs::msg::dds_::PoseWithCovariance_ TypeSupport Object Body

geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::PoseWithCovariance_TypeSupport(void) :
    TypeSupport_impl(
        __geometry_msgs_msg_dds__PoseWithCovariance___name(),
        __geometry_msgs_msg_dds__PoseWithCovariance___keys(),
        geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::metaDescriptor,
        (gapi_copyIn) __geometry_msgs_msg_dds__PoseWithCovariance___copyIn,
        (gapi_copyOut) __geometry_msgs_msg_dds__PoseWithCovariance___copyOut,
        (gapi_readerCopy) ::DDS::ccpp_DataReaderCopy<geometry_msgs::msg::dds_::PoseWithCovariance_Seq, geometry_msgs::msg::dds_::PoseWithCovariance_>,
        new  geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupportFactory(),
        geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::metaDescriptorArrLength)
{
    // Parent constructor takes care of everything.
}

geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::~PoseWithCovariance_TypeSupport(void)
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::register_type(
    ::DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

char *
geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS geometry_msgs::msg::dds_::PoseWithCovariance_ DataWriter_impl Object Body

geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::PoseWithCovariance_DataWriter_impl (
    gapi_dataWriter handle
) : ::DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::~PoseWithCovariance_DataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

::DDS::InstanceHandle_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::register_instance(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::register_instance_w_timestamp(
    const PoseWithCovariance_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::unregister_instance(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::unregister_instance_w_timestamp(
    const PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::write(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::write_w_timestamp(
    const PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::dispose(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::dispose_w_timestamp(
    const PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::writedispose(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::writedispose_w_timestamp(
    const PoseWithCovariance_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::get_key_value(
    PoseWithCovariance_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataWriter_impl::lookup_instance(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS geometry_msgs::msg::dds_::PoseWithCovariance_ DataReader_impl Object Body

geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::PoseWithCovariance_DataReader_impl (
    gapi_dataReader handle
) : ::DDS::DataReader_impl(handle, ::DDS::ccpp_DataReaderParallelDemarshallingMain<geometry_msgs::msg::dds_::PoseWithCovariance_Seq>)
{
    // Parent constructor takes care of everything.
}

geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::~PoseWithCovariance_DataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read_next_sample(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take_next_sample(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read_next_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take_next_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::read_next_instance_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::take_next_instance_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::return_loan(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
                        geometry_msgs::msg::dds_::PoseWithCovariance_Seq::freebuf( received_data.get_buffer(false) );
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::get_key_value(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::lookup_instance(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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


// DDS geometry_msgs::msg::dds_::PoseWithCovariance_ DataReaderView_impl Object Body

geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::PoseWithCovariance_DataReaderView_impl (
    gapi_dataReaderView handle
) : ::DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::~PoseWithCovariance_DataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read_next_sample(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take_next_sample(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read_next_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take_next_instance(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::read_next_instance_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::take_next_instance_w_condition(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = geometry_msgs::msg::dds_::PoseWithCovariance_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


::DDS::ReturnCode_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::return_loan(
    geometry_msgs::msg::dds_::PoseWithCovariance_Seq & received_data,
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
                        geometry_msgs::msg::dds_::PoseWithCovariance_Seq::freebuf( received_data.get_buffer(false) );
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
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::get_key_value(
    geometry_msgs::msg::dds_::PoseWithCovariance_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
geometry_msgs::msg::dds_::PoseWithCovariance_DataReaderView_impl::lookup_instance(
    const geometry_msgs::msg::dds_::PoseWithCovariance_ & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"geometry_msgs\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"Point_\"><Member name=\"x_\"><Double/></Member><Member name=\"y_\"><Double/></Member><Member name=\"z_\">",
"<Double/></Member></Struct><Struct name=\"Quaternion_\"><Member name=\"x_\"><Double/></Member><Member name=\"y_\">",
"<Double/></Member><Member name=\"z_\"><Double/></Member><Member name=\"w_\"><Double/></Member></Struct>",
"<TypeDef name=\"geometry_msgs__PoseWithCovariance__double_array_36\"><Array size=\"36\"><Double/></Array>",
"</TypeDef><Struct name=\"Pose_\"><Member name=\"position_\"><Type name=\"Point_\"/></Member><Member name=\"orientation_\">",
"<Type name=\"Quaternion_\"/></Member></Struct><Struct name=\"PoseWithCovariance_\"><Member name=\"pose_\">",
"<Type name=\"Pose_\"/></Member><Member name=\"covariance_\"><Type name=\"geometry_msgs__PoseWithCovariance__double_array_36\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
const ::DDS::ULong (::geometry_msgs::msg::dds_::PoseWithCovariance_TypeSupport::metaDescriptorArrLength) = 9;
