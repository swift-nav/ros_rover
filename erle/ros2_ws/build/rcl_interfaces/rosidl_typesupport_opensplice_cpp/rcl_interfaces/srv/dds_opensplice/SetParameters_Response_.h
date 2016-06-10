//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParameters_Response_.h
//  Source: /home/erle/ros2_ws/build/rcl_interfaces/rosidl_generator_dds_idl/rcl_interfaces/srv/dds_opensplice/SetParameters_Response_.idl
//  Generated: Sat Nov  7 23:02:29 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SETPARAMETERS_RESPONSE__H_
#define _SETPARAMETERS_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "SetParametersResult_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct SetParameters_Response_;

         struct SetParameters_Response_
         {
               struct _results__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < ::rcl_interfaces::msg::dds_::SetParametersResult_, struct _results__seq_uniq_> _results__seq;
               typedef DDS_DCPSSequence_var < _results__seq> _results__seq_var;
               typedef DDS_DCPSSequence_out < _results__seq> _results__seq_out;
               _results__seq results_;
         };

         typedef DDS_DCPSStruct_var < SetParameters_Response_> SetParameters_Response__var;
         typedef DDS_DCPSStruct_out < SetParameters_Response_> SetParameters_Response__out;
      }
   }
}




#endif 