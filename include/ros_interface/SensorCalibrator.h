// Generated by gencpp from file ros_interface/SensorCalibrator.msg
// DO NOT EDIT!


#ifndef ROS_INTERFACE_MESSAGE_SENSORCALIBRATOR_H
#define ROS_INTERFACE_MESSAGE_SENSORCALIBRATOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ros_interface/Point3D.h>
#include <ros_interface/Point3D.h>

namespace ros_interface
{
template <class ContainerAllocator>
struct SensorCalibrator_
{
  typedef SensorCalibrator_<ContainerAllocator> Type;

  SensorCalibrator_()
    : pose()
    , angle()  {
    }
  SensorCalibrator_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , angle(_alloc)  {
  (void)_alloc;
    }



   typedef  ::ros_interface::Point3D_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::ros_interface::Point3D_<ContainerAllocator>  _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::ros_interface::SensorCalibrator_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_interface::SensorCalibrator_<ContainerAllocator> const> ConstPtr;

}; // struct SensorCalibrator_

typedef ::ros_interface::SensorCalibrator_<std::allocator<void> > SensorCalibrator;

typedef boost::shared_ptr< ::ros_interface::SensorCalibrator > SensorCalibratorPtr;
typedef boost::shared_ptr< ::ros_interface::SensorCalibrator const> SensorCalibratorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_interface::SensorCalibrator_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_interface::SensorCalibrator_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_interface::SensorCalibrator_<ContainerAllocator1> & lhs, const ::ros_interface::SensorCalibrator_<ContainerAllocator2> & rhs)
{
  return lhs.pose == rhs.pose &&
    lhs.angle == rhs.angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_interface::SensorCalibrator_<ContainerAllocator1> & lhs, const ::ros_interface::SensorCalibrator_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_interface::SensorCalibrator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::SensorCalibrator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::SensorCalibrator_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8973a94a8ceb6b4c6fa358ef1bfb5314";
  }

  static const char* value(const ::ros_interface::SensorCalibrator_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8973a94a8ceb6b4cULL;
  static const uint64_t static_value2 = 0x6fa358ef1bfb5314ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_interface/SensorCalibrator";
  }

  static const char* value(const ::ros_interface::SensorCalibrator_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Point3D   pose     # 传感器安装位置(相对于后轴中心点)\n"
"Point3D   angle     # 传感器安装角度(车体坐标系)\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/Point3D\n"
"float64   x     # 位置坐标x\n"
"float64   y     # 位置坐标y\n"
"float64   z     # 位置坐标z\n"
;
  }

  static const char* value(const ::ros_interface::SensorCalibrator_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorCalibrator_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_interface::SensorCalibrator_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_interface::SensorCalibrator_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::ros_interface::Point3D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "angle: ";
    s << std::endl;
    Printer< ::ros_interface::Point3D_<ContainerAllocator> >::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_INTERFACE_MESSAGE_SENSORCALIBRATOR_H
