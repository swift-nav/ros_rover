//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MultiEchoLaserScan_Dcps.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/MultiEchoLaserScan_Dcps.idl
//  Generated: Sun Nov  8 00:04:24 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _MULTIECHOLASERSCAN_DCPS_H_
#define _MULTIECHOLASERSCAN_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "MultiEchoLaserScan_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class MultiEchoLaserScan_TypeSupportInterface;

         typedef MultiEchoLaserScan_TypeSupportInterface * MultiEchoLaserScan_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < MultiEchoLaserScan_TypeSupportInterface> MultiEchoLaserScan_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < MultiEchoLaserScan_TypeSupportInterface> MultiEchoLaserScan_TypeSupportInterface_out;


         class MultiEchoLaserScan_DataWriter;

         typedef MultiEchoLaserScan_DataWriter * MultiEchoLaserScan_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < MultiEchoLaserScan_DataWriter> MultiEchoLaserScan_DataWriter_var;
         typedef DDS_DCPSInterface_out < MultiEchoLaserScan_DataWriter> MultiEchoLaserScan_DataWriter_out;


         class MultiEchoLaserScan_DataReader;

         typedef MultiEchoLaserScan_DataReader * MultiEchoLaserScan_DataReader_ptr;
         typedef DDS_DCPSInterface_var < MultiEchoLaserScan_DataReader> MultiEchoLaserScan_DataReader_var;
         typedef DDS_DCPSInterface_out < MultiEchoLaserScan_DataReader> MultiEchoLaserScan_DataReader_out;


         class MultiEchoLaserScan_DataReaderView;

         typedef MultiEchoLaserScan_DataReaderView * MultiEchoLaserScan_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < MultiEchoLaserScan_DataReaderView> MultiEchoLaserScan_DataReaderView_var;
         typedef DDS_DCPSInterface_out < MultiEchoLaserScan_DataReaderView> MultiEchoLaserScan_DataReaderView_out;

         struct MultiEchoLaserScan_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < MultiEchoLaserScan_, struct MultiEchoLaserScan_Seq_uniq_> MultiEchoLaserScan_Seq;
         typedef DDS_DCPSSequence_var < MultiEchoLaserScan_Seq> MultiEchoLaserScan_Seq_var;
         typedef DDS_DCPSSequence_out < MultiEchoLaserScan_Seq> MultiEchoLaserScan_Seq_out;
         class MultiEchoLaserScan_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef MultiEchoLaserScan_TypeSupportInterface_ptr _ptr_type;
            typedef MultiEchoLaserScan_TypeSupportInterface_var _var_type;

            static MultiEchoLaserScan_TypeSupportInterface_ptr _duplicate (MultiEchoLaserScan_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static MultiEchoLaserScan_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            MultiEchoLaserScan_TypeSupportInterface_ptr _this () { return this; }


         protected:
            MultiEchoLaserScan_TypeSupportInterface () {};
            ~MultiEchoLaserScan_TypeSupportInterface () {};
         private:
            MultiEchoLaserScan_TypeSupportInterface (const MultiEchoLaserScan_TypeSupportInterface &);
            MultiEchoLaserScan_TypeSupportInterface & operator = (const MultiEchoLaserScan_TypeSupportInterface &);
         };

         class MultiEchoLaserScan_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef MultiEchoLaserScan_DataWriter_ptr _ptr_type;
            typedef MultiEchoLaserScan_DataWriter_var _var_type;

            static MultiEchoLaserScan_DataWriter_ptr _duplicate (MultiEchoLaserScan_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static MultiEchoLaserScan_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            MultiEchoLaserScan_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const MultiEchoLaserScan_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const MultiEchoLaserScan_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const MultiEchoLaserScan_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (MultiEchoLaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const MultiEchoLaserScan_& instance_data) = 0;

         protected:
            MultiEchoLaserScan_DataWriter () {};
            ~MultiEchoLaserScan_DataWriter () {};
         private:
            MultiEchoLaserScan_DataWriter (const MultiEchoLaserScan_DataWriter &);
            MultiEchoLaserScan_DataWriter & operator = (const MultiEchoLaserScan_DataWriter &);
         };

         class MultiEchoLaserScan_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef MultiEchoLaserScan_DataReader_ptr _ptr_type;
            typedef MultiEchoLaserScan_DataReader_var _var_type;

            static MultiEchoLaserScan_DataReader_ptr _duplicate (MultiEchoLaserScan_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static MultiEchoLaserScan_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            MultiEchoLaserScan_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (MultiEchoLaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (MultiEchoLaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (MultiEchoLaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const MultiEchoLaserScan_& instance) = 0;

         protected:
            MultiEchoLaserScan_DataReader () {};
            ~MultiEchoLaserScan_DataReader () {};
         private:
            MultiEchoLaserScan_DataReader (const MultiEchoLaserScan_DataReader &);
            MultiEchoLaserScan_DataReader & operator = (const MultiEchoLaserScan_DataReader &);
         };

         class MultiEchoLaserScan_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef MultiEchoLaserScan_DataReaderView_ptr _ptr_type;
            typedef MultiEchoLaserScan_DataReaderView_var _var_type;

            static MultiEchoLaserScan_DataReaderView_ptr _duplicate (MultiEchoLaserScan_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static MultiEchoLaserScan_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static MultiEchoLaserScan_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            MultiEchoLaserScan_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (MultiEchoLaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (MultiEchoLaserScan_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (MultiEchoLaserScan_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (MultiEchoLaserScan_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const MultiEchoLaserScan_& instance) = 0;

         protected:
            MultiEchoLaserScan_DataReaderView () {};
            ~MultiEchoLaserScan_DataReaderView () {};
         private:
            MultiEchoLaserScan_DataReaderView (const MultiEchoLaserScan_DataReaderView &);
            MultiEchoLaserScan_DataReaderView & operator = (const MultiEchoLaserScan_DataReaderView &);
         };

      }
   }
}




#endif 
