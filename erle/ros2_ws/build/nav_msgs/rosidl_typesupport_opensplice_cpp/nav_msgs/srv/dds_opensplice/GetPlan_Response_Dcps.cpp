//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetPlan_Response_Dcps.cpp
//  Source: /home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps.idl
//  Generated: Sat Nov  7 23:58:43 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "GetPlan_Response_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < nav_msgs::srv::dds_::GetPlan_Response_, struct GetPlan_Response_Seq_uniq_>;
#endif

const char * nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_local_id = "IDL:nav_msgs/srv/dds_/GetPlan_Response_TypeSupportInterface:1.0";

nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_duplicate (nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_local_id) == 0)
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

nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr result;
   result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_local_id = "IDL:nav_msgs/srv/dds_/GetPlan_Response_DataWriter:1.0";

nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_duplicate (nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_local_id) == 0)
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

nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr result = NULL;
   if (p && p->_is_a (nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_local_id))
   {
      result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr nav_msgs::srv::dds_::GetPlan_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr result;
   result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * nav_msgs::srv::dds_::GetPlan_Response_DataReader::_local_id = "IDL:nav_msgs/srv/dds_/GetPlan_Response_DataReader:1.0";

nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReader::_duplicate (nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean nav_msgs::srv::dds_::GetPlan_Response_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, nav_msgs::srv::dds_::GetPlan_Response_DataReader::_local_id) == 0)
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

nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReader::_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr result = NULL;
   if (p && p->_is_a (nav_msgs::srv::dds_::GetPlan_Response_DataReader::_local_id))
   {
      result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr result;
   result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_local_id = "IDL:nav_msgs/srv/dds_/GetPlan_Response_DataReaderView:1.0";

nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_duplicate (nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_local_id) == 0)
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

nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_local_id))
   {
      result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr nav_msgs::srv::dds_::GetPlan_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr result;
   result = dynamic_cast < nav_msgs::srv::dds_::GetPlan_Response_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



