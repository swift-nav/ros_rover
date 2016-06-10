//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetMap_Request_.h
//  Source: /home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.idl
//  Generated: Sat Nov  7 23:58:33 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETMAP_REQUEST__H_
#define _SAMPLE_GETMAP_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "GetMap_Request_.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_GetMap_Request_;

         struct Sample_GetMap_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               GetMap_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_GetMap_Request_> Sample_GetMap_Request__var;
         typedef Sample_GetMap_Request_&Sample_GetMap_Request__out;
      }
   }
}




#endif 
