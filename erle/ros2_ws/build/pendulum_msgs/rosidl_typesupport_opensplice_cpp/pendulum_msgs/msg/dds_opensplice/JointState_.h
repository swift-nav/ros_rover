//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JointState_.h
//  Source: /home/erle/ros2_ws/build/pendulum_msgs/rosidl_generator_dds_idl/pendulum_msgs/msg/dds_opensplice/JointState_.idl
//  Generated: Sat Nov  7 19:23:20 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _JOINTSTATE__H_
#define _JOINTSTATE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace pendulum_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct JointState_;

         struct JointState_
         {
               DDS::Double position_;
               DDS::Double velocity_;
               DDS::Double effort_;
         };

         typedef DDS_DCPSStruct_var < JointState_> JointState__var;
         typedef JointState_&JointState__out;
      }
   }
}




#endif 
