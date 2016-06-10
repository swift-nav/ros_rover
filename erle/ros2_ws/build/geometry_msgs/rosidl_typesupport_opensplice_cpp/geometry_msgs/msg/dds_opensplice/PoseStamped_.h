//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: PoseStamped_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/PoseStamped_.idl
//  Generated: Sat Nov  7 20:40:37 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POSESTAMPED__H_
#define _POSESTAMPED__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Pose_.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct PoseStamped_;

         struct PoseStamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               Pose_ pose_;
         };

         typedef DDS_DCPSStruct_var < PoseStamped_> PoseStamped__var;
         typedef DDS_DCPSStruct_out < PoseStamped_> PoseStamped__out;
      }
   }
}




#endif 
