#!/usr/bin/env bash

# Lander Usategui San Juan  - Erle Robotics [lander@erlerobot.com]


CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"

# wait a bit for roscore to stabilize
sleep 15

rosservice call /camera/start_capture
/home/erle/ros_catkin_ws/install_isolated/cameraWeb.py
