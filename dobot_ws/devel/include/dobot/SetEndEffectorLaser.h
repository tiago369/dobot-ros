// Generated by gencpp from file dobot/SetEndEffectorLaser.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETENDEFFECTORLASER_H
#define DOBOT_MESSAGE_SETENDEFFECTORLASER_H

#include <ros/service_traits.h>


#include <dobot/SetEndEffectorLaserRequest.h>
#include <dobot/SetEndEffectorLaserResponse.h>


namespace dobot
{

struct SetEndEffectorLaser
{

typedef SetEndEffectorLaserRequest Request;
typedef SetEndEffectorLaserResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetEndEffectorLaser
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetEndEffectorLaser > {
  static const char* value()
  {
    return "97ab3479a3c227d7c546855f18fa2912";
  }

  static const char* value(const ::dobot::SetEndEffectorLaser&) { return value(); }
};

template<>
struct DataType< ::dobot::SetEndEffectorLaser > {
  static const char* value()
  {
    return "dobot/SetEndEffectorLaser";
  }

  static const char* value(const ::dobot::SetEndEffectorLaser&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetEndEffectorLaserRequest> should match 
// service_traits::MD5Sum< ::dobot::SetEndEffectorLaser > 
template<>
struct MD5Sum< ::dobot::SetEndEffectorLaserRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetEndEffectorLaser >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorLaserRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetEndEffectorLaserRequest> should match 
// service_traits::DataType< ::dobot::SetEndEffectorLaser > 
template<>
struct DataType< ::dobot::SetEndEffectorLaserRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetEndEffectorLaser >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorLaserRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetEndEffectorLaserResponse> should match 
// service_traits::MD5Sum< ::dobot::SetEndEffectorLaser > 
template<>
struct MD5Sum< ::dobot::SetEndEffectorLaserResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetEndEffectorLaser >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorLaserResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetEndEffectorLaserResponse> should match 
// service_traits::DataType< ::dobot::SetEndEffectorLaser > 
template<>
struct DataType< ::dobot::SetEndEffectorLaserResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetEndEffectorLaser >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorLaserResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETENDEFFECTORLASER_H
