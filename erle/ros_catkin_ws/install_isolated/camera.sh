#!/bin/bash

#This script is launched automatically in Erle-Brain 2
#on every boot and loads the autopilot
#
# Alejandro Hernandez Cordero - Erle Robotics [ahcorde@erlerobot.com]

#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"

rosrun raspicam raspicam_node _framerate:=25 _quality:=45 
