#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"

# Launch a mavros for serial devices
rosrun mavros gcs_bridge __name:="gcs_bridge_serial"  _gcs_url:="serial:///dev/ttyAMA0"

