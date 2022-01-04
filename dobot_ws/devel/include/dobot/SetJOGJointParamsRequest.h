// Generated by gencpp from file dobot/SetJOGJointParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETJOGJOINTPARAMSREQUEST_H
#define DOBOT_MESSAGE_SETJOGJOINTPARAMSREQUEST_H


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
struct SetJOGJointParamsRequest_
{
  typedef SetJOGJointParamsRequest_<ContainerAllocator> Type;

  SetJOGJointParamsRequest_()
    : velocity()
    , acceleration()
    , isQueued(false)  {
    }
  SetJOGJointParamsRequest_(const ContainerAllocator& _alloc)
    : velocity(_alloc)
    , acceleration(_alloc)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acceleration_type;
  _acceleration_type acceleration;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJOGJointParamsRequest_

typedef ::dobot::SetJOGJointParamsRequest_<std::allocator<void> > SetJOGJointParamsRequest;

typedef boost::shared_ptr< ::dobot::SetJOGJointParamsRequest > SetJOGJointParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::SetJOGJointParamsRequest const> SetJOGJointParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/xenial_home/dobot_ws/src/dobot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "56415298907749fc622f73f4a2f4c767";
  }

  static const char* value(const ::dobot::SetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x56415298907749fcULL;
  static const uint64_t static_value2 = 0x622f73f4a2f4c767ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetJOGJointParamsRequest";
  }

  static const char* value(const ::dobot::SetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] velocity\n\
float32[] acceleration\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.velocity);
      stream.next(m.acceleration);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJOGJointParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetJOGJointParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetJOGJointParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "acceleration[]" << std::endl;
    for (size_t i = 0; i < v.acceleration.size(); ++i)
    {
      s << indent << "  acceleration[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acceleration[i]);
    }
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETJOGJOINTPARAMSREQUEST_H
