// Generated by gencpp from file ros_interface/LaneList.msg
// DO NOT EDIT!


#ifndef ROS_INTERFACE_MESSAGE_LANELIST_H
#define ROS_INTERFACE_MESSAGE_LANELIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ros_interface/SensorCalibrator.h>
#include <ros_interface/LaneLine.h>
#include <ros_interface/HolisticPathPrediction.h>
#include <ros_interface/RoadMark.h>

namespace ros_interface
{
template <class ContainerAllocator>
struct LaneList_
{
  typedef LaneList_<ContainerAllocator> Type;

  LaneList_()
    : header()
    , sensor_id(0)
    , error_code(0)
    , sensor_status(0)
    , change_origin_flag(0)
    , is_valid(false)
    , sensor_calibrator()
    , camera_laneline()
    , hpp()
    , road_marks()  {
    }
  LaneList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sensor_id(0)
    , error_code(0)
    , sensor_status(0)
    , change_origin_flag(0)
    , is_valid(false)
    , sensor_calibrator(_alloc)
    , camera_laneline(_alloc)
    , hpp(_alloc)
    , road_marks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _sensor_id_type;
  _sensor_id_type sensor_id;

   typedef int8_t _error_code_type;
  _error_code_type error_code;

   typedef uint8_t _sensor_status_type;
  _sensor_status_type sensor_status;

   typedef int32_t _change_origin_flag_type;
  _change_origin_flag_type change_origin_flag;

   typedef uint8_t _is_valid_type;
  _is_valid_type is_valid;

   typedef  ::ros_interface::SensorCalibrator_<ContainerAllocator>  _sensor_calibrator_type;
  _sensor_calibrator_type sensor_calibrator;

   typedef std::vector< ::ros_interface::LaneLine_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ros_interface::LaneLine_<ContainerAllocator> >> _camera_laneline_type;
  _camera_laneline_type camera_laneline;

   typedef  ::ros_interface::HolisticPathPrediction_<ContainerAllocator>  _hpp_type;
  _hpp_type hpp;

   typedef std::vector< ::ros_interface::RoadMark_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ros_interface::RoadMark_<ContainerAllocator> >> _road_marks_type;
  _road_marks_type road_marks;





  typedef boost::shared_ptr< ::ros_interface::LaneList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_interface::LaneList_<ContainerAllocator> const> ConstPtr;

}; // struct LaneList_

typedef ::ros_interface::LaneList_<std::allocator<void> > LaneList;

typedef boost::shared_ptr< ::ros_interface::LaneList > LaneListPtr;
typedef boost::shared_ptr< ::ros_interface::LaneList const> LaneListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_interface::LaneList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_interface::LaneList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_interface::LaneList_<ContainerAllocator1> & lhs, const ::ros_interface::LaneList_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sensor_id == rhs.sensor_id &&
    lhs.error_code == rhs.error_code &&
    lhs.sensor_status == rhs.sensor_status &&
    lhs.change_origin_flag == rhs.change_origin_flag &&
    lhs.is_valid == rhs.is_valid &&
    lhs.sensor_calibrator == rhs.sensor_calibrator &&
    lhs.camera_laneline == rhs.camera_laneline &&
    lhs.hpp == rhs.hpp &&
    lhs.road_marks == rhs.road_marks;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_interface::LaneList_<ContainerAllocator1> & lhs, const ::ros_interface::LaneList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_interface::LaneList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_interface::LaneList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::LaneList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_interface::LaneList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::LaneList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_interface::LaneList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_interface::LaneList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48b68a31434316e84d258accd4457bd2";
  }

  static const char* value(const ::ros_interface::LaneList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48b68a31434316e8ULL;
  static const uint64_t static_value2 = 0x4d258accd4457bd2ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_interface::LaneList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_interface/LaneList";
  }

  static const char* value(const ::ros_interface::LaneList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_interface::LaneList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header   header     # 消息头\n"
"int32   sensor_id     # 安装的传感器id(camera,lidar,radar) ' 相机id: 0-front_center相机 1-front_left相机 2-front_right相机 3-left_front相机 4-left_back右后相机 5-right_front相机 6-right_back相机 7-back相机'  8-相机融合\n"
"int8   error_code     # 错误码： ERROR_NONE = 0; ERROR_UNKNOWN = 1;\n"
"uint8   sensor_status     # 传感器状态： NORMAL=0； ABNORMAL=1；\n"
"int32   change_origin_flag     # 坐标切换状态（0-坐标系切换成功 1-坐标系切换中 2-坐标系切换故障）\n"
"bool   is_valid     # 车道线数据是否合法\n"
"SensorCalibrator   sensor_calibrator     # 传感器标定参数\n"
"LaneLine[] camera_laneline # 车道线检测结果数组\n"
"HolisticPathPrediction   hpp     # 行驶预测线\n"
"RoadMark[] road_marks # 路面标识\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/SensorCalibrator\n"
"Point3D   pose     # 传感器安装位置(相对于后轴中心点)\n"
"Point3D   angle     # 传感器安装角度(车体坐标系)\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/Point3D\n"
"float64   x     # 位置坐标x\n"
"float64   y     # 位置坐标y\n"
"float64   z     # 位置坐标z\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/LaneLine\n"
"int32   lane_type     #  车道线类型：   SOLID = 0;   DASHED = 1;   ROAD_DELIMITER = 2;   NONE = 3;   UNKNOWN = 4;\n"
"int32   lane_color     #  车道线颜色：   WHITE = 0;   YELLOW = 1;   OTHERS = 2;   UNKNOWN = 3;\n"
"int32   pos_type     # 车道线位置类别：    BOLLARD_LEFT = -5;   FOURTH_LEFT = -4;   THIRD_LEFT = -3;   ADJACENT_LEFT = -2;  //!< lane marking on the left side next to ego lane   EGO_LEFT = -1;       //!< left lane marking of the ego lane   EGO_RIGHT = 1;       //!< right lane marking of the ego lane   ADJACENT_RIGHT = 2;  //!< lane marking on the right side next to ego lane   THIRD_RIGHT = 3;   FOURTH_RIGHT = 4;   BOLLARD_RIGHT = 5;   OTHER = 6;    //!< other types of lane   UNKNOWN = 7;  //!< background\n"
"LaneLineCubicCurve   curve_vehicle     # 车辆坐标系车道线三次曲线系数\n"
"LaneLineCubicCurve   curve_image     # 图像坐标系车道线三次曲线系数\n"
"LaneLineCubicCurve   curve_abs     # 世界坐标系车道线三次曲线系数\n"
"Point3D[] pts_vehicle # 车辆坐标系车道线点集\n"
"Point2D[] pts_image # 图像坐标系车道线点集\n"
"Point3D[] pts_abs # 世界坐标系车道线点集\n"
"EndPoints   image_end_point     # 车道线上顶点与下顶点\n"
"Point2D[] pts_key # 车道线关键点数组\n"
"uint8   hd_lane_id     # 高精车道线id\n"
"float64   confidence     # 车道线置信度\n"
"int32   lane_quality     #   车道线质量：   VERY_LOW = 0;   LOW = 1;   HIGH = 2;   VERY_HIGH = 3;\n"
"int32   fused_lane_type     #   融合车道线类别：   CAMERA = 0;   HD = 1;   FUSED = 2;   UNKNOWN = 3;   if value is 1, lane_quality = 3\n"
"float64[] homography_mat # 透视变换矩阵\n"
"float64[] homography_mat_inv # 透视变换逆矩阵\n"
"int32   lane_coordinate_type     #   坐标系类别：   FRAME = 0;   IMAGE = 1;   CAMERA = 2;   VEHICLE = 3;   ABSOLUTE = 4;\n"
"int32   use_type     #   使用类别：   REAL = 0;   VIRTUAL = 1;\n"
"Time   create_time     # 车道线被识别的时间戳\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/LaneLineCubicCurve\n"
"float64   start_x     # 车道线起始位置\n"
"float64   end_x     # 车道线结束位置\n"
"float64   a     # 三次曲线系数\n"
"float64   b     #  \n"
"float64   c     #  \n"
"float64   d     #  \n"
"\n"
"================================================================================\n"
"MSG: ros_interface/Point2D\n"
"float64   x     # 位置坐标x\n"
"float64   y     # 位置坐标y\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/EndPoints\n"
"Point2D   start     # 车道线上顶点\n"
"Point2D   end     # 车道线下顶点\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/Time\n"
"uint32   sec     # 秒\n"
"uint32   nsec     # 纳秒\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/HolisticPathPrediction\n"
"LaneLineCubicCurve   hpp     # 行驶路径预测： 1、针对没有车道线等特殊路段如：收费站附近、进出匝道附近、 维修区域附近，可以虚拟出可行驶路径预测； 2、针对车辆遮挡的区域，可以虚拟出可行驶路径预测；\n"
"int32   planning_source     # 规划路径来源:  0 - invalid,  1 - 双侧车道线,  2 - 左侧车道线,  3 - 右侧车道线, 4 - 左侧路沿，  5 - 右侧路沿， 6 - 前车轨迹，  7 - freespace, 8 - 本车轨迹预测\n"
"float64   ego_lane_width     # 自车道宽度\n"
"float64   confidence     # 置信度[0 - 1]\n"
"\n"
"================================================================================\n"
"MSG: ros_interface/RoadMark\n"
"float64   longitude_dist     # 相对于车身坐标系原点的纵向距离,单位m\n"
"float64   lateral_dist     # 相对于车身坐标系原点的横向距离,单位m\n"
"float64   x     # 质心坐标x\n"
"float64   y     # 质心坐标y\n"
"float64   z     # 质心坐标z\n"
"float64   confidence     # 置信度[0 - 1]\n"
"int32   type     # 标识类型 1 - 停止线 2 - 斑马线 3 - 禁停区 4 - 直行箭头 5 - 左转箭头 6 - 右转箭头 7 - 直行+左转 8 - 直行+右转 9 - 直行+左转+右转 10 - 掉头 11 - 左掉头 12 - 菱形(前方有人行横道) 13 - 倒三角 (减速让行) 14 - 地面文字\n"
;
  }

  static const char* value(const ::ros_interface::LaneList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_interface::LaneList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sensor_id);
      stream.next(m.error_code);
      stream.next(m.sensor_status);
      stream.next(m.change_origin_flag);
      stream.next(m.is_valid);
      stream.next(m.sensor_calibrator);
      stream.next(m.camera_laneline);
      stream.next(m.hpp);
      stream.next(m.road_marks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaneList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_interface::LaneList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_interface::LaneList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sensor_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sensor_id);
    s << indent << "error_code: ";
    Printer<int8_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "sensor_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sensor_status);
    s << indent << "change_origin_flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.change_origin_flag);
    s << indent << "is_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_valid);
    s << indent << "sensor_calibrator: ";
    s << std::endl;
    Printer< ::ros_interface::SensorCalibrator_<ContainerAllocator> >::stream(s, indent + "  ", v.sensor_calibrator);
    s << indent << "camera_laneline[]" << std::endl;
    for (size_t i = 0; i < v.camera_laneline.size(); ++i)
    {
      s << indent << "  camera_laneline[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ros_interface::LaneLine_<ContainerAllocator> >::stream(s, indent + "    ", v.camera_laneline[i]);
    }
    s << indent << "hpp: ";
    s << std::endl;
    Printer< ::ros_interface::HolisticPathPrediction_<ContainerAllocator> >::stream(s, indent + "  ", v.hpp);
    s << indent << "road_marks[]" << std::endl;
    for (size_t i = 0; i < v.road_marks.size(); ++i)
    {
      s << indent << "  road_marks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ros_interface::RoadMark_<ContainerAllocator> >::stream(s, indent + "    ", v.road_marks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_INTERFACE_MESSAGE_LANELIST_H
