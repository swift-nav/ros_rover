//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetParametersAtomically_Response_.h
//  Source: /home/erle/ros2_ws/build/rcl_interfaces/rosidl_generator_dds_idl/rcl_interfaces/srv/dds_opensplice/Sample_SetParametersAtomically_Response_.idl
//  Generated: Sat Nov  7 23:02:16 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETPARAMETERSATOMICALLY_RESPONSE__H_
#define _SAMPLE_SETPARAMETERSATOMICALLY_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "SetParametersAtomically_Response_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetParametersAtomically_Response_;

         struct Sample_SetParametersAtomically_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetParametersAtomically_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetParametersAtomically_Response_> Sample_SetParametersAtomically_Response__var;
         typedef DDS_DCPSStruct_out < Sample_SetParametersAtomically_Response_> Sample_SetParametersAtomically_Response__out;
      }
   }
}




#endif 