//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JointCommand_.h
//  Source: /home/erle/ros2_ws/build/pendulum_msgs/rosidl_generator_dds_idl/pendulum_msgs/msg/dds_opensplice/JointCommand_.idl
//  Generated: Sat Nov  7 19:23:21 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _JOINTCOMMAND__H_
#define _JOINTCOMMAND__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace pendulum_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct JointCommand_;

         struct JointCommand_
         {
               DDS::Double position_;
         };

         typedef DDS_DCPSStruct_var < JointCommand_> JointCommand__var;
         typedef JointCommand_&JointCommand__out;
      }
   }
}




#endif 