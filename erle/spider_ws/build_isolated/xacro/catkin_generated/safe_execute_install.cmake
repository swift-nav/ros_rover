execute_process(COMMAND "/home/erle/spider_ws/build_isolated/xacro/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/erle/spider_ws/build_isolated/xacro/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
