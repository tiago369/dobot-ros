// Generated by gencpp from file dobot/GetIODO.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIODO_H
#define DOBOT_MESSAGE_GETIODO_H

#include <ros/service_traits.h>


#include <dobot/GetIODORequest.h>
#include <dobot/GetIODOResponse.h>


namespace dobot
{

struct GetIODO
{

typedef GetIODORequest Request;
typedef GetIODOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIODO
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetIODO > {
  static const char* value()
  {
    return "658a016d9c03f31ccbdb869e836cf420";
  }

  static const char* value(const ::dobot::GetIODO&) { return value(); }
};

template<>
struct DataType< ::dobot::GetIODO > {
  static const char* value()
  {
    return "dobot/GetIODO";
  }

  static const char* value(const ::dobot::GetIODO&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetIODORequest> should match 
// service_traits::MD5Sum< ::dobot::GetIODO > 
template<>
struct MD5Sum< ::dobot::GetIODORequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetIODO >::value();
  }
  static const char* value(const ::dobot::GetIODORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetIODORequest> should match 
// service_traits::DataType< ::dobot::GetIODO > 
template<>
struct DataType< ::dobot::GetIODORequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetIODO >::value();
  }
  static const char* value(const ::dobot::GetIODORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetIODOResponse> should match 
// service_traits::MD5Sum< ::dobot::GetIODO > 
template<>
struct MD5Sum< ::dobot::GetIODOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetIODO >::value();
  }
  static const char* value(const ::dobot::GetIODOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetIODOResponse> should match 
// service_traits::DataType< ::dobot::GetIODO > 
template<>
struct DataType< ::dobot::GetIODOResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetIODO >::value();
  }
  static const char* value(const ::dobot::GetIODOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETIODO_H
