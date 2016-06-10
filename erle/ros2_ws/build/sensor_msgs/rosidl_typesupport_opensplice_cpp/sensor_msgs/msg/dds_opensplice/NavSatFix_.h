//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: NavSatFix_.h
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_generator_dds_idl/sensor_msgs/msg/dds_opensplice/NavSatFix_.idl
//  Generated: Sun Nov  8 00:04:26 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _NAVSATFIX__H_
#define _NAVSATFIX__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "NavSatStatus_.h"
#include "dds_dcps.h"
#include "Header_.h"


namespace sensor_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct NavSatFix_;
         const DDS::Octet NavSatFix__COVARIANCE_TYPE_UNKNOWN = (DDS::Octet) 0;
         const DDS::Octet NavSatFix__COVARIANCE_TYPE_APPROXIMATED = (DDS::Octet) 1;
         const DDS::Octet NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = (DDS::Octet) 2;
         const DDS::Octet NavSatFix__COVARIANCE_TYPE_KNOWN = (DDS::Octet) 3;
         typedef DDS::Double sensor_msgs__NavSatFix__double_array_9_slice;
         typedef DDS::Double sensor_msgs__NavSatFix__double_array_9[9];
         typedef sensor_msgs__NavSatFix__double_array_9 sensor_msgs__NavSatFix__double_array_9_out;
         extern sensor_msgs__NavSatFix__double_array_9_slice * sensor_msgs__NavSatFix__double_array_9_alloc ();
         extern void sensor_msgs__NavSatFix__double_array_9_free (sensor_msgs__NavSatFix__double_array_9_slice *);
         extern void sensor_msgs__NavSatFix__double_array_9_copy (sensor_msgs__NavSatFix__double_array_9_slice* to, const sensor_msgs__NavSatFix__double_array_9_slice* from);
         extern sensor_msgs__NavSatFix__double_array_9_slice *sensor_msgs__NavSatFix__double_array_9_dup (const sensor_msgs__NavSatFix__double_array_9_slice* from);

         struct sensor_msgs__NavSatFix__double_array_9_uniq_ {};
         typedef DDS_DCPS_FArray_var< sensor_msgs__NavSatFix__double_array_9, sensor_msgs__NavSatFix__double_array_9_slice, struct sensor_msgs__NavSatFix__double_array_9_uniq_> sensor_msgs__NavSatFix__double_array_9_var;
         typedef DDS_DCPS_Array_forany< sensor_msgs__NavSatFix__double_array_9, sensor_msgs__NavSatFix__double_array_9_slice, struct sensor_msgs__NavSatFix__double_array_9_uniq_> sensor_msgs__NavSatFix__double_array_9_forany;

         struct NavSatFix_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               NavSatStatus_ status_;
               DDS::Double latitude_;
               DDS::Double longitude_;
               DDS::Double altitude_;
               sensor_msgs__NavSatFix__double_array_9 position_covariance_;
               DDS::Octet position_covariance_type_;
         };

         typedef DDS_DCPSStruct_var < NavSatFix_> NavSatFix__var;
         typedef DDS_DCPSStruct_out < NavSatFix_> NavSatFix__out;
      }
   }
}
template <>
sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice* DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_uniq_>::copy (sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice *to, const sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice* from);
template <>
void DDS_DCPS_ArrayHelper < sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice, sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_uniq_>::free (sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9_slice *ptr);




#endif 