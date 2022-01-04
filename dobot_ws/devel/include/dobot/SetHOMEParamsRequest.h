// Generated by gencpp from file dobot/SetHOMEParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETHOMEPARAMSREQUEST_H
#define DOBOT_MESSAGE_SETHOMEPARAMSREQUEST_H


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
struct SetHOMEParamsRequest_
{
  typedef SetHOMEParamsRequest_<ContainerAllocator> Type;

  SetHOMEParamsRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , r(0.0)
    , isQueued(false)  {
    }
  SetHOMEParamsRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , r(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _r_type;
  _r_type r;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetHOMEParamsRequest_

typedef ::dobot::SetHOMEParamsRequest_<std::allocator<void> > SetHOMEParamsRequest;

typedef boost::shared_ptr< ::dobot::SetHOMEParamsRequest > SetHOMEParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::SetHOMEParamsRequest const> SetHOMEParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetHOMEParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45e9f4311519729231625ea6f96e953d";
  }

  static const char* value(const ::dobot::SetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45e9f43115197292ULL;
  static const uint64_t static_value2 = 0x31625ea6f96e953dULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetHOMEParamsRequest";
  }

  static const char* value(const ::dobot::SetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
float32 r\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.r);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetHOMEParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetHOMEParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetHOMEParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETHOMEPARAMSREQUEST_H
