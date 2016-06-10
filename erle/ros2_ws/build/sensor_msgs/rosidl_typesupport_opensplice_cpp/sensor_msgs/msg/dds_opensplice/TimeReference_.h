//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: TimeReference_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/TimeReference_.idl
//  Generated: Sun Nov  8 00:04:37 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _TIMEREFERENCE__H_
#define _TIMEREFERENCE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct TimeReference_;

         struct TimeReference_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Time_t time_ref_;
               DDS::String_mgr source_;
         };

         typedef DDS_DCPSStruct_var < TimeReference_> TimeReference__var;
         typedef DDS_DCPSStruct_out < TimeReference_> TimeReference__out;
      }
   }
}




#endif 