//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: FluidPressure_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/FluidPressure_Dcps.idl
//  Generated: Sun Nov  8 00:04:09 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _FLUIDPRESSURE_DCPS_H_
#define _FLUIDPRESSURE_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "FluidPressure_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class FluidPressure_TypeSupportInterface;

         typedef FluidPressure_TypeSupportInterface * FluidPressure_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < FluidPressure_TypeSupportInterface> FluidPressure_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < FluidPressure_TypeSupportInterface> FluidPressure_TypeSupportInterface_out;


         class FluidPressure_DataWriter;

         typedef FluidPressure_DataWriter * FluidPressure_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < FluidPressure_DataWriter> FluidPressure_DataWriter_var;
         typedef DDS_DCPSInterface_out < FluidPressure_DataWriter> FluidPressure_DataWriter_out;


         class FluidPressure_DataReader;

         typedef FluidPressure_DataReader * FluidPressure_DataReader_ptr;
         typedef DDS_DCPSInterface_var < FluidPressure_DataReader> FluidPressure_DataReader_var;
         typedef DDS_DCPSInterface_out < FluidPressure_DataReader> FluidPressure_DataReader_out;


         class FluidPressure_DataReaderView;

         typedef FluidPressure_DataReaderView * FluidPressure_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < FluidPressure_DataReaderView> FluidPressure_DataReaderView_var;
         typedef DDS_DCPSInterface_out < FluidPressure_DataReaderView> FluidPressure_DataReaderView_out;

         struct FluidPressure_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < FluidPressure_, struct FluidPressure_Seq_uniq_> FluidPressure_Seq;
         typedef DDS_DCPSSequence_var < FluidPressure_Seq> FluidPressure_Seq_var;
         typedef DDS_DCPSSequence_out < FluidPressure_Seq> FluidPressure_Seq_out;
         class FluidPressure_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef FluidPressure_TypeSupportInterface_ptr _ptr_type;
            typedef FluidPressure_TypeSupportInterface_var _var_type;

            static FluidPressure_TypeSupportInterface_ptr _duplicate (FluidPressure_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static FluidPressure_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static FluidPressure_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static FluidPressure_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            FluidPressure_TypeSupportInterface_ptr _this () { return this; }


         protected:
            FluidPressure_TypeSupportInterface () {};
            ~FluidPressure_TypeSupportInterface () {};
         private:
            FluidPressure_TypeSupportInterface (const FluidPressure_TypeSupportInterface &);
            FluidPressure_TypeSupportInterface & operator = (const FluidPressure_TypeSupportInterface &);
         };

         class FluidPressure_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef FluidPressure_DataWriter_ptr _ptr_type;
            typedef FluidPressure_DataWriter_var _var_type;

            static FluidPressure_DataWriter_ptr _duplicate (FluidPressure_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static FluidPressure_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static FluidPressure_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static FluidPressure_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            FluidPressure_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const FluidPressure_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const FluidPressure_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const FluidPressure_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const FluidPressure_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const FluidPressure_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const FluidPressure_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const FluidPressure_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const FluidPressure_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const FluidPressure_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const FluidPressure_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (FluidPressure_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const FluidPressure_& instance_data) = 0;

         protected:
            FluidPressure_DataWriter () {};
            ~FluidPressure_DataWriter () {};
         private:
            FluidPressure_DataWriter (const FluidPressure_DataWriter &);
            FluidPressure_DataWriter & operator = (const FluidPressure_DataWriter &);
         };

         class FluidPressure_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef FluidPressure_DataReader_ptr _ptr_type;
            typedef FluidPressure_DataReader_var _var_type;

            static FluidPressure_DataReader_ptr _duplicate (FluidPressure_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static FluidPressure_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static FluidPressure_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static FluidPressure_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            FluidPressure_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (FluidPressure_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (FluidPressure_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (FluidPressure_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const FluidPressure_& instance) = 0;

         protected:
            FluidPressure_DataReader () {};
            ~FluidPressure_DataReader () {};
         private:
            FluidPressure_DataReader (const FluidPressure_DataReader &);
            FluidPressure_DataReader & operator = (const FluidPressure_DataReader &);
         };

         class FluidPressure_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef FluidPressure_DataReaderView_ptr _ptr_type;
            typedef FluidPressure_DataReaderView_var _var_type;

            static FluidPressure_DataReaderView_ptr _duplicate (FluidPressure_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static FluidPressure_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static FluidPressure_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static FluidPressure_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            FluidPressure_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (FluidPressure_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (FluidPressure_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (FluidPressure_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (FluidPressure_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const FluidPressure_& instance) = 0;

         protected:
            FluidPressure_DataReaderView () {};
            ~FluidPressure_DataReaderView () {};
         private:
            FluidPressure_DataReaderView (const FluidPressure_DataReaderView &);
            FluidPressure_DataReaderView & operator = (const FluidPressure_DataReaderView &);
         };

      }
   }
}




#endif 
