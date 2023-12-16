set(_AMENT_PACKAGE_NAME "uuv_thruster_manager")
set(uuv_thruster_manager_VERSION "0.6.1")
set(uuv_thruster_manager_MAINTAINER "Jean-Philip Royer <jean-philip-a.royer@naval-group.com>, Loïc Mougeolle <loic.mougeolle@naval-group.com>")
set(uuv_thruster_manager_BUILD_DEPENDS "std_msgs")
set(uuv_thruster_manager_BUILDTOOL_DEPENDS "ament_cmake" "rosidl_default_generators")
set(uuv_thruster_manager_BUILD_EXPORT_DEPENDS "std_msgs")
set(uuv_thruster_manager_BUILDTOOL_EXPORT_DEPENDS )
set(uuv_thruster_manager_EXEC_DEPENDS "tf2" "tf2_ros" "rclpy" "python3-yaml" "uuv_gazebo_ros_plugins_msgs" "geometry_msgs" "uuv_assistants" "plankton_utils" "rosidl_default_runtime" "std_msgs")
set(uuv_thruster_manager_TEST_DEPENDS "ament_cmake_pytest" "geometry_msgs" "joint_state_publisher" "python3-numpy" "robot_state_publisher" "uuv_assistants" "xacro" "launch" "launch_testing" "launch_testing_ros" "launch_testing_ament_cmake")
set(uuv_thruster_manager_GROUP_DEPENDS )
set(uuv_thruster_manager_MEMBER_OF_GROUPS "rosidl_interface_packages")
set(uuv_thruster_manager_DEPRECATED "")
set(uuv_thruster_manager_EXPORT_TAGS)
list(APPEND uuv_thruster_manager_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
