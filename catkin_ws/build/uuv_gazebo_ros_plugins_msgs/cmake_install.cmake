# Install script for directory: /home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sunny/catkin_ws/install/uuv_gazebo_ros_plugins_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/uuv_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_c/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_typesupport_fastrtps_c/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_typesupport_introspection_c/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_cpp/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_typesupport_fastrtps_cpp/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_typesupport_introspection_cpp/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_python/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs" TYPE DIRECTORY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3.10" "-m" "compileall"
        "/home/sunny/catkin_ws/install/uuv_gazebo_ros_plugins_msgs/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs:/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs:/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs:/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_generator_py/uuv_gazebo_ros_plugins_msgs/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so"
         OLD_RPATH "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libuuv_gazebo_ros_plugins_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/msg/FloatStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/msg/UnderwaterObjectModel.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/msg/ThrusterConversionFcn.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterEfficiency.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/SetFloat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetFloat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetListParam.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_adapter/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/msg/FloatStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/msg/UnderwaterObjectModel.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/msg/ThrusterConversionFcn.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterEfficiency.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetThrusterEfficiency_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetThrusterEfficiency_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterState.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetThrusterState_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetThrusterState_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterEfficiency_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterEfficiency_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterState.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterState_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterState_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetUseGlobalCurrentVel_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetUseGlobalCurrentVel_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetModelProperties_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetModelProperties_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/SetFloat.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetFloat_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/SetFloat_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetFloat.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetFloat_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetFloat_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetListParam.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetListParam_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetListParam_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterConversionFcn_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/srv/GetThrusterConversionFcn_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/uuv_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/uuv_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/environment" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_index/share/ament_index/resource_index/packages/uuv_gazebo_ros_plugins_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/uuv_gazebo_ros_plugins_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport.cmake"
         "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/CMakeFiles/Export/share/uuv_gazebo_ros_plugins_msgs/cmake/export_uuv_gazebo_ros_plugins_msgs__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES
    "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_core/uuv_gazebo_ros_plugins_msgsConfig.cmake"
    "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/ament_cmake_core/uuv_gazebo_ros_plugins_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "/home/sunny/catkin_ws/src/Plankton/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/uuv_gazebo_ros_plugins_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/sunny/catkin_ws/build/uuv_gazebo_ros_plugins_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
