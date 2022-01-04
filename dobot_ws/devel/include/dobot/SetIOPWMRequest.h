// Generated by gencpp from file dobot/SetIOPWMRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETIOPWMREQUEST_H
#define DOBOT_MESSAGE_SETIOPWMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct SetIOPWMRequest_
{
  typedef SetIOPWMRequest_<ContainerAllocator> Type;

  SetIOPWMRequest_()
    : address(0)
    , frequency(0.0)
    , dutyCycle(0.0)
    , isQueued(false)  {
    }
  SetIOPWMRequest_(const ContainerAllocator& _alloc)
    : address(0)
    , frequency(0.0)
    , dutyCycle(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _address_type;
  _address_type address;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef float _dutyCycle_type;
  _dutyCycle_type dutyCycle;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetIOPWMRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetIOPWMRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetIOPWMRequest_

typedef ::dobot::SetIOPWMRequest_<std::allocator<void> > SetIOPWMRequest;

typedef boost::shared_ptr< ::dobot::SetIOPWMRequest > SetIOPWMRequestPtr;
typedef boost::shared_ptr< ::dobot::SetIOPWMRequest const> SetIOPWMRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetIOPWMRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetIOPWMRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/xenial_home/dobot_ws/src/dobot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetIOPWMRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetIOPWMRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetIOPWMRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e141a96ac9dc25f79943de33373c32f";
  }

  static const char* value(const ::dobot::SetIOPWMRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e141a96ac9dc25fULL;
  static const uint64_t static_value2 = 0x79943de33373c32fULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetIOPWMRequest";
  }

  static const char* value(const ::dobot::SetIOPWMRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 address\n\
float32 frequency\n\
float32 dutyCycle\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetIOPWMRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.frequency);
      stream.next(m.dutyCycle);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetIOPWMRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetIOPWMRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetIOPWMRequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address);
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "dutyCycle: ";
    Printer<float>::stream(s, indent + "  ", v.dutyCycle);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETIOPWMREQUEST_H
