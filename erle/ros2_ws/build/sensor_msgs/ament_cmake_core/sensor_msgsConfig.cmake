# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_sensor_msgs_CONFIG_INCLUDED)
  return()
endif()
set(_sensor_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT sensor_msgs_FIND_QUIETLY)
  message(" - Found sensor_msgs: 0.0.0 (${sensor_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'sensor_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(sensor_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${sensor_msgs_DIR}/${_extra}")
endforeach()
