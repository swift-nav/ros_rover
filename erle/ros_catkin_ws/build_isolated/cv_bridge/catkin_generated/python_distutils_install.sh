#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/erle/ros_catkin_ws/src/vision_opencv/cv_bridge"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/erle/ros_catkin_ws/install_isolated/lib/python2.7/dist-packages:/home/erle/ros_catkin_ws/build_isolated/cv_bridge/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/erle/ros_catkin_ws/build_isolated/cv_bridge" \
    "/usr/bin/python" \
    "/home/erle/ros_catkin_ws/src/vision_opencv/cv_bridge/setup.py" \
    build --build-base "/home/erle/ros_catkin_ws/build_isolated/cv_bridge" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/erle/ros_catkin_ws/install_isolated" --install-scripts="/home/erle/ros_catkin_ws/install_isolated/bin"
