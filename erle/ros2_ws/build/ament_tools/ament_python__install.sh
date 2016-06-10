#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_package/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_package/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_package/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_pep257/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_pep257/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_pep257/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_pyflakes/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_pyflakes/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_pyflakes/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_copyright/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_copyright/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_copyright/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/osrf_pycommon/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/osrf_pycommon/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/osrf_pycommon/local_setup.sh"
fi

export PYTHONPATH="/home/erle/ros2_ws/install/lib/python3.4/site-packages:$PYTHONPATH"