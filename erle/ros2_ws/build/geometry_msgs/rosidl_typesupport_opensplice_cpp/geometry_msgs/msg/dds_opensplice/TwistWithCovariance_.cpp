//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: TwistWithCovariance_.cpp
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_generator_dds_idl/geometry_msgs/msg/dds_opensplice/TwistWithCovariance_.idl
//  Generated: Sat Nov  7 20:40:49 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "TwistWithCovariance_.h"


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice, struct geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_uniq_>;
template class DDS_DCPS_Array_forany< geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice, struct geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_uniq_>;
#endif

template <>
geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice* DDS_DCPS_ArrayHelper < geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_uniq_>::alloc ()
{
   return geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_uniq_>::copy (geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice *to, const geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice* from)
{
   geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice, geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_uniq_>::free (geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice *ptr)
{
   geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_free (ptr);
}

geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice * geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [36];
   return (geometry_msgs__TwistWithCovariance__double_array_36_slice *) ret;
}

void geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_free (geometry_msgs__TwistWithCovariance__double_array_36_slice * s)
{
   delete [] s;
}

void geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_copy
(
   geometry_msgs__TwistWithCovariance__double_array_36_slice * to,
   const geometry_msgs__TwistWithCovariance__double_array_36_slice * from
)
{
   const DDS::Double* sv = ( const DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 36; i++) tv[i] = sv[i];
}

geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_slice * geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36_dup
   (const geometry_msgs__TwistWithCovariance__double_array_36_slice * from)
{
   geometry_msgs__TwistWithCovariance__double_array_36_slice * to = geometry_msgs__TwistWithCovariance__double_array_36_alloc ();
   geometry_msgs__TwistWithCovariance__double_array_36_copy (to, from);
   return to;
}




