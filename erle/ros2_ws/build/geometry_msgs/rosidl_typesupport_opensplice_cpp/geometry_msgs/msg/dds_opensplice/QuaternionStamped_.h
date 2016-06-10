//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: QuaternionStamped_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/QuaternionStamped_.idl
//  Generated: Sat Nov  7 20:40:42 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _QUATERNIONSTAMPED__H_
#define _QUATERNIONSTAMPED__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Quaternion_.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct QuaternionStamped_;

         struct QuaternionStamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               Quaternion_ quaternion_;
         };

         typedef DDS_DCPSStruct_var < QuaternionStamped_> QuaternionStamped__var;
         typedef DDS_DCPSStruct_out < QuaternionStamped_> QuaternionStamped__out;
      }
   }
}




#endif 
