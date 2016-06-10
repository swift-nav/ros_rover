# Install script for directory: /home/erle/ros_catkin_ws/src/mavros/mavros_msgs

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/erle/ros_catkin_ws/install_isolated")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/_setup_util.py")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE PROGRAM FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/env.sh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE PROGRAM FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/setup.bash")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/setup.sh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/setup.zsh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/erle/ros_catkin_ws/install_isolated/.rosinstall")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/erle/ros_catkin_ws/install_isolated" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/msg" TYPE FILE FILES
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/ActuatorControl.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/BatteryStatus.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/CamIMUStamp.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/CommandCode.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/ExtendedState.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/FileEntry.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/HomePosition.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/ManualControl.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/Mavlink.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/OpticalFlowRad.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/OverrideRCIn.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/ParamValue.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/PositionTarget.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/RCIn.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/RCOut.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/RadioStatus.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/State.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/VFR_HUD.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/Vibration.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/Waypoint.msg"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/msg/WaypointList.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/srv" TYPE FILE FILES
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandBool.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandHome.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandInt.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandLong.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandTOL.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/CommandTriggerControl.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileChecksum.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileClose.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileList.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileMakeDir.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileOpen.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileRead.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileRemove.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileRemoveDir.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileRename.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileTruncate.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/FileWrite.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/ParamGet.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/ParamPull.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/ParamPush.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/ParamSet.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/SetMode.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/StreamRate.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/WaypointClear.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/WaypointGOTO.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/WaypointPull.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/WaypointPush.srv"
    "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/srv/WaypointSetCurrent.srv"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/mavros_msgs-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/erle/ros_catkin_ws/devel_isolated/mavros_msgs/include/mavros_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/erle/ros_catkin_ws/devel_isolated/mavros_msgs/share/common-lisp/ros/mavros_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/erle/ros_catkin_ws/devel_isolated/mavros_msgs/lib/python2.7/dist-packages/mavros_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/erle/ros_catkin_ws/devel_isolated/mavros_msgs/lib/python2.7/dist-packages/mavros_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/mavros_msgs.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/mavros_msgs-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES
    "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/mavros_msgsConfig.cmake"
    "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/catkin_generated/installspace/mavros_msgsConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs" TYPE FILE FILES "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mavros_msgs" TYPE DIRECTORY FILES "/home/erle/ros_catkin_ws/src/mavros/mavros_msgs/include/mavros_msgs/" FILES_MATCHING REGEX "/[^/]*\\.h$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/erle/ros_catkin_ws/build_isolated/mavros_msgs/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
