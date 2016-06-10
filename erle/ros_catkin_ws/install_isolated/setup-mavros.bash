#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"

# wait a bit for roscore to stabilize
sleep 3

# Launch mavros with the udp bridge
#roslaunch mavros apm.launch fcu_url:= udp://:6001@ gcs_url:=udp://192.168.7.2:@192.168.7.1:6000
rosrun mavros mavros_node _fcu_url:="udp://:6001@" _gcs_url:="udp://10.0.0.1:9000@10.0.0.2:6000"

