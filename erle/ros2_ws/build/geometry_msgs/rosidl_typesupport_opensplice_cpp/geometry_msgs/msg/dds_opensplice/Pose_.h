//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Pose_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/Pose_.idl
//  Generated: Sat Nov  7 20:40:32 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _POSE__H_
#define _POSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Quaternion_.h"
#include "Point_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Pose_;

         struct Pose_
         {
               Point_ position_;
               Quaternion_ orientation_;
         };

         typedef DDS_DCPSStruct_var < Pose_> Pose__var;
         typedef Pose_&Pose__out;
      }
   }
}




#endif 