execute_process(COMMAND "/home/erle/ros_catkin_ws/build_isolated/rospy/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/erle/ros_catkin_ws/build_isolated/rospy/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
