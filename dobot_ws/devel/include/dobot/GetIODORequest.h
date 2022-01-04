// Generated by gencpp from file dobot/GetIODORequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIODOREQUEST_H
#define DOBOT_MESSAGE_GETIODOREQUEST_H


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
struct GetIODORequest_
{
  typedef GetIODORequest_<ContainerAllocator> Type;

  GetIODORequest_()
    : address(0)  {
    }
  GetIODORequest_(const ContainerAllocator& _alloc)
    : address(0)  {
  (void)_alloc;
    }



   typedef uint8_t _address_type;
  _address_type address;





  typedef boost::shared_ptr< ::dobot::GetIODORequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetIODORequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetIODORequest_

typedef ::dobot::GetIODORequest_<std::allocator<void> > GetIODORequest;

typedef boost::shared_ptr< ::dobot::GetIODORequest > GetIODORequestPtr;
typedef boost::shared_ptr< ::dobot::GetIODORequest const> GetIODORequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetIODORequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetIODORequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetIODORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIODORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIODORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIODORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIODORequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIODORequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetIODORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "972132462544b1029bf37f19a88e11c4";
  }

  static const char* value(const ::dobot::GetIODORequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x972132462544b102ULL;
  static const uint64_t static_value2 = 0x9bf37f19a88e11c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetIODORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetIODORequest";
  }

  static const char* value(const ::dobot::GetIODORequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetIODORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 address\n\
";
  }

  static const char* value(const ::dobot::GetIODORequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetIODORequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIODORequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetIODORequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetIODORequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETIODOREQUEST_H
