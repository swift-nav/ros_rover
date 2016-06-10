//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Odometry_.h
//  Source: /home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Odometry_.idl
//  Generated: Sat Nov  7 23:58:30 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ODOMETRY__H_
#define _ODOMETRY__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "TwistWithCovariance_.h"
#include "PoseWithCovariance_.h"
#include "Header_.h"


namespace nav_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Odometry_;

         struct Odometry_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               DDS::String_mgr child_frame_id_;
               ::geometry_msgs::msg::dds_::PoseWithCovariance_ pose_;
               ::geometry_msgs::msg::dds_::TwistWithCovariance_ twist_;
         };

         typedef DDS_DCPSStruct_var < Odometry_> Odometry__var;
         typedef DDS_DCPSStruct_out < Odometry_> Odometry__out;
      }
   }
}




#endif 