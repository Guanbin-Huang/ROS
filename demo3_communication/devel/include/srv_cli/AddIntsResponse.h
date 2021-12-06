// Generated by gencpp from file srv_cli/AddIntsResponse.msg
// DO NOT EDIT!


#ifndef SRV_CLI_MESSAGE_ADDINTSRESPONSE_H
#define SRV_CLI_MESSAGE_ADDINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace srv_cli
{
template <class ContainerAllocator>
struct AddIntsResponse_
{
  typedef AddIntsResponse_<ContainerAllocator> Type;

  AddIntsResponse_()
    : sum(0)  {
    }
  AddIntsResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::srv_cli::AddIntsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srv_cli::AddIntsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddIntsResponse_

typedef ::srv_cli::AddIntsResponse_<std::allocator<void> > AddIntsResponse;

typedef boost::shared_ptr< ::srv_cli::AddIntsResponse > AddIntsResponsePtr;
typedef boost::shared_ptr< ::srv_cli::AddIntsResponse const> AddIntsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srv_cli::AddIntsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srv_cli::AddIntsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::srv_cli::AddIntsResponse_<ContainerAllocator1> & lhs, const ::srv_cli::AddIntsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::srv_cli::AddIntsResponse_<ContainerAllocator1> & lhs, const ::srv_cli::AddIntsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace srv_cli

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srv_cli::AddIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srv_cli::AddIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_cli::AddIntsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ba699c25c9418c0366f3595c0c8e8ec";
  }

  static const char* value(const ::srv_cli::AddIntsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
  static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
};

template<class ContainerAllocator>
struct DataType< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srv_cli/AddIntsResponse";
  }

  static const char* value(const ::srv_cli::AddIntsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 服务器响应发送的数据\n"
"int32 sum\n"
;
  }

  static const char* value(const ::srv_cli::AddIntsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddIntsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srv_cli::AddIntsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srv_cli::AddIntsResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRV_CLI_MESSAGE_ADDINTSRESPONSE_H
