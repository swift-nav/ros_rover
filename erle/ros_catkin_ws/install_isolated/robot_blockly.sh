#!/bin/bash

# Spider workspace
source /home/erle/spider_ws/install_isolated/setup.bash

# Main ros workspace
source /home/erle/ros_catkin_ws/install_isolated/setup.bash
sleep 15
# roslaunch
roslaunch robot_blockly robot_blockly.launch
