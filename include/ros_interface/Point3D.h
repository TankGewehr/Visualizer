// Generated by gencpp from file ros_interface/Point3D.msg
// DO NOT EDIT!


#ifndef ROS_INTERFACE_MESSAGE_POINT3D_H
#define ROS_INTERFACE_MESSAGE_POINT3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_interface
{
template <class ContainerAllocator>
struct Point3D_
{
  typedef Point3D_<ContainerAllocator> Type;

  Point3D_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Point3D_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::ros_interface::Point3D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_interface::Point3D_<ContainerAllocator> const> ConstPtr;

}; // struct Point3D_

typedef ::ros_interface::Point3D_<std::allocator<void> > Point3D;

typedef boost::shared_ptr< ::ros_interface::Point3D > Point3DPtr;
typedef boost::shared_ptr< ::ros_interface::Point3D const> Point3DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_interface::Point3D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_interface::Point3D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_interface::Point3D_<ContainerAllocator1> & lhs, const ::ros_interface::Point3D_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_interface::Point3D_<ContainerAllocator1> & lhs, const ::ros_interface::Point3D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_interface::Point3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_interface::Point3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::Point3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::Point3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::Point3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::Point3D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_interface::Point3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::ros_interface::Point3D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_interface::Point3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_interface/Point3D";
  }

  static const char* value(const ::ros_interface::Point3D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_interface::Point3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64   x     # 位置坐标x\n"
"float64   y     # 位置坐标y\n"
"float64   z     # 位置坐标z\n"
;
  }

  static const char* value(const ::ros_interface::Point3D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_interface::Point3D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Point3D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_interface::Point3D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_interface::Point3D_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_INTERFACE_MESSAGE_POINT3D_H
