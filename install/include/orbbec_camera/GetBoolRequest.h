// Generated by gencpp from file orbbec_camera/GetBoolRequest.msg
// DO NOT EDIT!


#ifndef ORBBEC_CAMERA_MESSAGE_GETBOOLREQUEST_H
#define ORBBEC_CAMERA_MESSAGE_GETBOOLREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace orbbec_camera
{
template <class ContainerAllocator>
struct GetBoolRequest_
{
  typedef GetBoolRequest_<ContainerAllocator> Type;

  GetBoolRequest_()
    {
    }
  GetBoolRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetBoolRequest_

typedef ::orbbec_camera::GetBoolRequest_<std::allocator<void> > GetBoolRequest;

typedef boost::shared_ptr< ::orbbec_camera::GetBoolRequest > GetBoolRequestPtr;
typedef boost::shared_ptr< ::orbbec_camera::GetBoolRequest const> GetBoolRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::orbbec_camera::GetBoolRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace orbbec_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::orbbec_camera::GetBoolRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "orbbec_camera/GetBoolRequest";
  }

  static const char* value(const ::orbbec_camera::GetBoolRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::orbbec_camera::GetBoolRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetBoolRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::orbbec_camera::GetBoolRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::orbbec_camera::GetBoolRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ORBBEC_CAMERA_MESSAGE_GETBOOLREQUEST_H
