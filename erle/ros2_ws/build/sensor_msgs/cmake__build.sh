#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_package/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_package/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_package/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_core/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_core/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_core/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_python/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_python/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_python/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_cmake_test/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_cmake_test/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_cmake_test/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/connext_cmake_module/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/connext_cmake_module/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/connext_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rmw/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rmw/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rmw/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_cmake/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_cmake/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_default_generators/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_default_generators/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_default_generators/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_generator_c/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_generator_c/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_generator_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_parser/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_parser/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_parser/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/builtin_interfaces/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/builtin_interfaces/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/builtin_interfaces/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/std_msgs/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/std_msgs/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/std_msgs/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/geometry_msgs/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/geometry_msgs/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/geometry_msgs/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"
