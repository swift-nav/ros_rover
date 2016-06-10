//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Wrench_Dcps.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_typesupport_opensplice_cpp/geometry_msgs/msg/dds_opensplice/Wrench_Dcps.idl
//  Generated: Sat Nov  7 20:40:54 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _WRENCH_DCPS_H_
#define _WRENCH_DCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "Wrench_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class Wrench_TypeSupportInterface;

         typedef Wrench_TypeSupportInterface * Wrench_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < Wrench_TypeSupportInterface> Wrench_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < Wrench_TypeSupportInterface> Wrench_TypeSupportInterface_out;


         class Wrench_DataWriter;

         typedef Wrench_DataWriter * Wrench_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < Wrench_DataWriter> Wrench_DataWriter_var;
         typedef DDS_DCPSInterface_out < Wrench_DataWriter> Wrench_DataWriter_out;


         class Wrench_DataReader;

         typedef Wrench_DataReader * Wrench_DataReader_ptr;
         typedef DDS_DCPSInterface_var < Wrench_DataReader> Wrench_DataReader_var;
         typedef DDS_DCPSInterface_out < Wrench_DataReader> Wrench_DataReader_out;


         class Wrench_DataReaderView;

         typedef Wrench_DataReaderView * Wrench_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < Wrench_DataReaderView> Wrench_DataReaderView_var;
         typedef DDS_DCPSInterface_out < Wrench_DataReaderView> Wrench_DataReaderView_out;

         struct Wrench_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < Wrench_, struct Wrench_Seq_uniq_> Wrench_Seq;
         typedef DDS_DCPSSequence_var < Wrench_Seq> Wrench_Seq_var;
         typedef DDS_DCPSSequence_out < Wrench_Seq> Wrench_Seq_out;
         class Wrench_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef Wrench_TypeSupportInterface_ptr _ptr_type;
            typedef Wrench_TypeSupportInterface_var _var_type;

            static Wrench_TypeSupportInterface_ptr _duplicate (Wrench_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Wrench_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static Wrench_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Wrench_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            Wrench_TypeSupportInterface_ptr _this () { return this; }


         protected:
            Wrench_TypeSupportInterface () {};
            ~Wrench_TypeSupportInterface () {};
         private:
            Wrench_TypeSupportInterface (const Wrench_TypeSupportInterface &);
            Wrench_TypeSupportInterface & operator = (const Wrench_TypeSupportInterface &);
         };

         class Wrench_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef Wrench_DataWriter_ptr _ptr_type;
            typedef Wrench_DataWriter_var _var_type;

            static Wrench_DataWriter_ptr _duplicate (Wrench_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Wrench_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static Wrench_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Wrench_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            Wrench_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const Wrench_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const Wrench_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const Wrench_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const Wrench_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const Wrench_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const Wrench_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const Wrench_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const Wrench_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const Wrench_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const Wrench_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (Wrench_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Wrench_& instance_data) = 0;

         protected:
            Wrench_DataWriter () {};
            ~Wrench_DataWriter () {};
         private:
            Wrench_DataWriter (const Wrench_DataWriter &);
            Wrench_DataWriter & operator = (const Wrench_DataWriter &);
         };

         class Wrench_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef Wrench_DataReader_ptr _ptr_type;
            typedef Wrench_DataReader_var _var_type;

            static Wrench_DataReader_ptr _duplicate (Wrench_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Wrench_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static Wrench_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Wrench_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            Wrench_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Wrench_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Wrench_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Wrench_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Wrench_& instance) = 0;

         protected:
            Wrench_DataReader () {};
            ~Wrench_DataReader () {};
         private:
            Wrench_DataReader (const Wrench_DataReader &);
            Wrench_DataReader & operator = (const Wrench_DataReader &);
         };

         class Wrench_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef Wrench_DataReaderView_ptr _ptr_type;
            typedef Wrench_DataReaderView_var _var_type;

            static Wrench_DataReaderView_ptr _duplicate (Wrench_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static Wrench_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static Wrench_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static Wrench_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            Wrench_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (Wrench_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (Wrench_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (Wrench_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (Wrench_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const Wrench_& instance) = 0;

         protected:
            Wrench_DataReaderView () {};
            ~Wrench_DataReaderView () {};
         private:
            Wrench_DataReaderView (const Wrench_DataReaderView &);
            Wrench_DataReaderView & operator = (const Wrench_DataReaderView &);
         };

      }
   }
}




#endif 
