//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Vector3Stamped_.h
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/Vector3Stamped_.idl
//  Generated: Sat Nov  7 20:40:53 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _VECTOR3STAMPED__H_
#define _VECTOR3STAMPED__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Vector3_.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct Vector3Stamped_;

         struct Vector3Stamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               Vector3_ vector_;
         };

         typedef DDS_DCPSStruct_var < Vector3Stamped_> Vector3Stamped__var;
         typedef DDS_DCPSStruct_out < Vector3Stamped_> Vector3Stamped__out;
      }
   }
}




#endif 
