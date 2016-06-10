//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Wrench_Dcps.cpp
//  Source: /home/erle/ros2_ws/build/geometry_msgs/rosidl_typesupport_opensplice_cpp/geometry_msgs/msg/dds_opensplice/Wrench_Dcps.idl
//  Generated: Sat Nov  7 20:40:54 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Wrench_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < geometry_msgs::msg::dds_::Wrench_, struct Wrench_Seq_uniq_>;
#endif

const char * geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_local_id = "IDL:geometry_msgs/msg/dds_/Wrench_TypeSupportInterface:1.0";

geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_duplicate (geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_local_id) == 0)
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

geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr geometry_msgs::msg::dds_::Wrench_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr result;
   result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * geometry_msgs::msg::dds_::Wrench_DataWriter::_local_id = "IDL:geometry_msgs/msg/dds_/Wrench_DataWriter:1.0";

geometry_msgs::msg::dds_::Wrench_DataWriter_ptr geometry_msgs::msg::dds_::Wrench_DataWriter::_duplicate (geometry_msgs::msg::dds_::Wrench_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean geometry_msgs::msg::dds_::Wrench_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, geometry_msgs::msg::dds_::Wrench_DataWriter::_local_id) == 0)
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

geometry_msgs::msg::dds_::Wrench_DataWriter_ptr geometry_msgs::msg::dds_::Wrench_DataWriter::_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataWriter_ptr result = NULL;
   if (p && p->_is_a (geometry_msgs::msg::dds_::Wrench_DataWriter::_local_id))
   {
      result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

geometry_msgs::msg::dds_::Wrench_DataWriter_ptr geometry_msgs::msg::dds_::Wrench_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataWriter_ptr result;
   result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * geometry_msgs::msg::dds_::Wrench_DataReader::_local_id = "IDL:geometry_msgs/msg/dds_/Wrench_DataReader:1.0";

geometry_msgs::msg::dds_::Wrench_DataReader_ptr geometry_msgs::msg::dds_::Wrench_DataReader::_duplicate (geometry_msgs::msg::dds_::Wrench_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean geometry_msgs::msg::dds_::Wrench_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, geometry_msgs::msg::dds_::Wrench_DataReader::_local_id) == 0)
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

geometry_msgs::msg::dds_::Wrench_DataReader_ptr geometry_msgs::msg::dds_::Wrench_DataReader::_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataReader_ptr result = NULL;
   if (p && p->_is_a (geometry_msgs::msg::dds_::Wrench_DataReader::_local_id))
   {
      result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

geometry_msgs::msg::dds_::Wrench_DataReader_ptr geometry_msgs::msg::dds_::Wrench_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataReader_ptr result;
   result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * geometry_msgs::msg::dds_::Wrench_DataReaderView::_local_id = "IDL:geometry_msgs/msg/dds_/Wrench_DataReaderView:1.0";

geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr geometry_msgs::msg::dds_::Wrench_DataReaderView::_duplicate (geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean geometry_msgs::msg::dds_::Wrench_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, geometry_msgs::msg::dds_::Wrench_DataReaderView::_local_id) == 0)
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

geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr geometry_msgs::msg::dds_::Wrench_DataReaderView::_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (geometry_msgs::msg::dds_::Wrench_DataReaderView::_local_id))
   {
      result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr geometry_msgs::msg::dds_::Wrench_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr result;
   result = dynamic_cast < geometry_msgs::msg::dds_::Wrench_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



