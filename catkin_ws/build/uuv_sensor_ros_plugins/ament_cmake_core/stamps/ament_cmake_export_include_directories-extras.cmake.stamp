# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${uuv_sensor_ros_plugins_DIR}/../../../include;/opt/ros/humble/include/message_filters;/opt/ros/humble/include/rclcpp;/opt/ros/humble/include/sensor_msgs;/opt/ros/humble/include/pluginlib;/opt/ros/humble/include/builtin_interfaces;/opt/ros/humble/include/geometry_msgs;/opt/ros/humble/include/std_msgs;/opt/ros/humble/include/rosidl_runtime_c;/opt/ros/humble/include/rosidl_typesupport_interface;/opt/ros/humble/include/rcutils;/opt/ros/humble/include/rosidl_runtime_cpp;/opt/ros/humble/include/rosidl_typesupport_fastrtps_c;/opt/ros/humble/include/rosidl_typesupport_fastrtps_cpp;/opt/ros/humble/include/rmw;/opt/ros/humble/include/rosidl_typesupport_c;/opt/ros/humble/include/rosidl_typesupport_cpp;/opt/ros/humble/include/rcpputils;/opt/ros/humble/include/rosidl_typesupport_introspection_c;/opt/ros/humble/include/rosidl_typesupport_introspection_cpp;/opt/ros/humble/include/nav_msgs;/usr/include;/usr/include/gazebo-11;/usr/include/bullet;/usr/include/simbody;/usr/include/sdformat-9.7;/usr/include/ignition/math6;/usr/include/OGRE/;/usr/include/OGRE/Terrain/;/usr/include/OGRE/Paging/;/usr/include/ignition/transport8;/usr/include/ignition/msgs5;/usr/include/ignition/common3;/usr/include/ignition/fuel_tools4;/home/sunny/catkin_ws/install/uuv_gazebo_plugins/include;/usr/include/OGRE;/usr/include/OGRE/Terrain;/usr/include/OGRE/Paging;/opt/ros/humble/include;/opt/ros/humble/include/gazebo_msgs;/opt/ros/humble/include/laser_geometry;/usr/include/eigen3;/opt/ros/humble/include/tf2;/home/sunny/catkin_ws/install/uuv_sensor_ros_plugins_msgs/include/uuv_sensor_ros_plugins_msgs;/opt/ros/humble/include/ament_index_cpp;/opt/ros/humble/include/libstatistics_collector;/opt/ros/humble/include/rcl;/opt/ros/humble/include/rosgraph_msgs;/opt/ros/humble/include/rcl_yaml_param_parser;/opt/ros/humble/include/statistics_msgs;/opt/ros/humble/include/tracetools;/opt/ros/humble/include/tf2_ros;/opt/ros/humble/include/rcl_interfaces;/opt/ros/humble/include/rclcpp_components;/opt/ros/humble/include/rclcpp_action;/opt/ros/humble/include/tf2_msgs")

# append include directories to uuv_sensor_ros_plugins_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'uuv_sensor_ros_plugins' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND uuv_sensor_ros_plugins_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
