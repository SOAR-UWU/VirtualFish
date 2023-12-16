# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_libraries.cmake.in

set(_exported_typesupport_libraries
  "__rosidl_typesupport_fastrtps_c:uuv_sensor_ros_plugins_msgs__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_fastrtps_cpp:uuv_sensor_ros_plugins_msgs__rosidl_typesupport_fastrtps_cpp")

# populate uuv_sensor_ros_plugins_msgs_LIBRARIES_<suffix>
if(NOT _exported_typesupport_libraries STREQUAL "")
  # loop over typesupport libraries
  foreach(_tuple ${_exported_typesupport_libraries})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _library)

    if(NOT IS_ABSOLUTE "${_library}")
      # search for library target relative to this CMake file
      set(_lib "NOTFOUND")
      find_library(
        _lib NAMES "${_library}"
        PATHS "${uuv_sensor_ros_plugins_msgs_DIR}/../../../lib"
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
      )

      if(NOT _lib)
        # the library wasn't found
        message(FATAL_ERROR
          "Package 'uuv_sensor_ros_plugins_msgs' exports the typesupport library '${_library}' which couldn't be found")
      elseif(NOT IS_ABSOLUTE "${_lib}")
        # the found library must be an absolute path
        message(FATAL_ERROR
          "Package 'uuv_sensor_ros_plugins_msgs' found the typesupport library '${_library}' at '${_lib}' "
          "which is not an absolute path")
      elseif(NOT EXISTS "${_lib}")
        # the found library must exist
        message(FATAL_ERROR "Package 'uuv_sensor_ros_plugins_msgs' found the typesupport library '${_lib}' which doesn't exist")
      else()
        list(APPEND uuv_sensor_ros_plugins_msgs_LIBRARIES${_suffix} ${_cfg} "${_lib}")
      endif()

    else()
      if(NOT EXISTS "${_library}")
        # the found library must exist
        message(WARNING "Package 'uuv_sensor_ros_plugins_msgs' exports the typesupport library '${_library}' which doesn't exist")
      else()
        list(APPEND uuv_sensor_ros_plugins_msgs_LIBRARIES${_suffix} "${_library}")
      endif()
    endif()
  endforeach()
endif()
