#!/bin/bash

#This script is launched automatically in Erle-Brain 2
#on every boot and loads the autopilot

RPIPROC=$(cat /proc/cpuinfo |grep "Hardware" | awk '{print $3}')
if [ "$RPIPROC" == "BCM2708" ]; then
	#echo "Raspberry Pi 1/0"
	APM_BIN_DIR="/home/erle/PXFmini"
	wifi="10.0.0.2:6000"
	ros=`sudo systemctl is-enabled ros.service`
	if [ "$ros" == "enabled" ]; then
		`sudo systemctl stop ros.service`
		`sudo systemctl disable ros.service`
		`sudo systemctl stop robot_blockly.service`
		`sudo systemctl disable robot_blockly.service`
		`sudo systemctl daemon-reload`
	fi
else
	APM_BIN_DIR="/home/erle"
	wifi="127.0.0.1:6001"
	#echo "Raspberry Pi 2"
fi

FLAGS="-l /home/erle/APM/logs -t /home/erle/APM/terrain/"

date
while :; do
	$APM_BIN_DIR/APMrover2.elf -A udp:$wifi -B /dev/ttyAMA0 $FLAGS
done >> /home/erle/APM/info/rover.log 2>&1
