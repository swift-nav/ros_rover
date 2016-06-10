//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetCameraInfo_Request_Dcps.cpp
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/srv/dds_opensplice/Sample_SetCameraInfo_Request_Dcps.idl
//  Generated: Sun Nov  8 00:04:38 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Sample_SetCameraInfo_Request_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_, struct Sample_SetCameraInfo_Request_Seq_uniq_>;
#endif

const char * sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_local_id = "IDL:sensor_msgs/srv/dds_/Sample_SetCameraInfo_Request_TypeSupportInterface:1.0";

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_duplicate (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr result;
   result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_local_id = "IDL:sensor_msgs/srv/dds_/Sample_SetCameraInfo_Request_DataWriter:1.0";

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_duplicate (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_local_id))
   {
      result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr result;
   result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_local_id = "IDL:sensor_msgs/srv/dds_/Sample_SetCameraInfo_Request_DataReader:1.0";

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_duplicate (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_local_id))
   {
      result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr result;
   result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_local_id = "IDL:sensor_msgs/srv/dds_/Sample_SetCameraInfo_Request_DataReaderView:1.0";

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_duplicate (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_local_id))
   {
      result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr result;
   result = dynamic_cast < sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



