// Generated by gencpp from file crab_msgs/LegsJointsState.msg
// DO NOT EDIT!


#ifndef CRAB_MSGS_MESSAGE_LEGSJOINTSSTATE_H
#define CRAB_MSGS_MESSAGE_LEGSJOINTSSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <crab_msgs/LegJointsState.h>

namespace crab_msgs
{
template <class ContainerAllocator>
struct LegsJointsState_
{
  typedef LegsJointsState_<ContainerAllocator> Type;

  LegsJointsState_()
    : joints_state()  {
    }
  LegsJointsState_(const ContainerAllocator& _alloc)
    : joints_state()  {
      joints_state.assign( ::crab_msgs::LegJointsState_<ContainerAllocator> (_alloc));
  }



   typedef boost::array< ::crab_msgs::LegJointsState_<ContainerAllocator> , 6>  _joints_state_type;
  _joints_state_type joints_state;




  typedef boost::shared_ptr< ::crab_msgs::LegsJointsState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crab_msgs::LegsJointsState_<ContainerAllocator> const> ConstPtr;

}; // struct LegsJointsState_

typedef ::crab_msgs::LegsJointsState_<std::allocator<void> > LegsJointsState;

typedef boost::shared_ptr< ::crab_msgs::LegsJointsState > LegsJointsStatePtr;
typedef boost::shared_ptr< ::crab_msgs::LegsJointsState const> LegsJointsStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crab_msgs::LegsJointsState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crab_msgs::LegsJointsState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crab_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/erle/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg'], 'crab_msgs': ['/home/erle/spider_ws/src/crab_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::LegsJointsState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::LegsJointsState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::LegsJointsState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6fe1b620769e6858203cf2a048e48ef3";
  }

  static const char* value(const ::crab_msgs::LegsJointsState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6fe1b620769e6858ULL;
  static const uint64_t static_value2 = 0x203cf2a048e48ef3ULL;
};

template<class ContainerAllocator>
struct DataType< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/LegsJointsState";
  }

  static const char* value(const ::crab_msgs::LegsJointsState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/LegJointsState[6] joints_state\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegJointsState\n\
float64[3] joint\n\
";
  }

  static const char* value(const ::crab_msgs::LegsJointsState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joints_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LegsJointsState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crab_msgs::LegsJointsState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crab_msgs::LegsJointsState_<ContainerAllocator>& v)
  {
    s << indent << "joints_state[]" << std::endl;
    for (size_t i = 0; i < v.joints_state.size(); ++i)
    {
      s << indent << "  joints_state[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::crab_msgs::LegJointsState_<ContainerAllocator> >::stream(s, indent + "    ", v.joints_state[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAB_MSGS_MESSAGE_LEGSJOINTSSTATE_H