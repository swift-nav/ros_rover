//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Temperature_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/Temperature_.idl
//  Generated: Sun Nov  8 00:04:36 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _TEMPERATURE__H_
#define _TEMPERATURE__H_

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
         struct Temperature_;

         struct Temperature_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::Double temperature_;
               DDS::Double variance_;
         };

         typedef DDS_DCPSStruct_var < Temperature_> Temperature__var;
         typedef DDS_DCPSStruct_out < Temperature_> Temperature__out;
      }
   }
}




#endif 
