#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"

# Update LD_LIBRARY_PATH
# export LD_LIBRARY_PATH=/home/ubuntu/trusty/usr/lib/arm-linux-gnueabihf:$LD_LIBRARY_PATH
# export LD_LIBRARY_PATH=/home/ubuntu/trusty/usr/lib:$LD_LIBRARY_PATH
# export LD_LIBRARY_PATH=/home/ubuntu/trusty/usr/lib/arm-linux-gnueabihf:$LD_LIBRARY_PATH

# Launch roscore
roscore 


