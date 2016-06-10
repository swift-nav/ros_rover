# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "driver_base: 3 messages, 0 services")

set(MSG_I_FLAGS "-Idriver_base:/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg;-Istd_msgs:/home/erle/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(driver_base_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg" NAME_WE)
add_custom_target(_driver_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "driver_base" "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg" ""
)

get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg" NAME_WE)
add_custom_target(_driver_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "driver_base" "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg" ""
)

get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg" NAME_WE)
add_custom_target(_driver_base_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "driver_base" "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base
)
_generate_msg_cpp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base
)
_generate_msg_cpp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base
)

### Generating Services

### Generating Module File
_generate_module_cpp(driver_base
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(driver_base_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(driver_base_generate_messages driver_base_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_cpp _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_cpp _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_cpp _driver_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(driver_base_gencpp)
add_dependencies(driver_base_gencpp driver_base_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS driver_base_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base
)
_generate_msg_lisp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base
)
_generate_msg_lisp(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base
)

### Generating Services

### Generating Module File
_generate_module_lisp(driver_base
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(driver_base_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(driver_base_generate_messages driver_base_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_lisp _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_lisp _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_lisp _driver_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(driver_base_genlisp)
add_dependencies(driver_base_genlisp driver_base_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS driver_base_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base
)
_generate_msg_py(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base
)
_generate_msg_py(driver_base
  "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base
)

### Generating Services

### Generating Module File
_generate_module_py(driver_base
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(driver_base_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(driver_base_generate_messages driver_base_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigValue.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_py _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/ConfigString.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_py _driver_base_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/erle/ros_catkin_ws/src/driver_common/driver_base/msg/SensorLevels.msg" NAME_WE)
add_dependencies(driver_base_generate_messages_py _driver_base_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(driver_base_genpy)
add_dependencies(driver_base_genpy driver_base_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS driver_base_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/driver_base
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(driver_base_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/driver_base
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(driver_base_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/driver_base
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(driver_base_generate_messages_py std_msgs_generate_messages_py)
