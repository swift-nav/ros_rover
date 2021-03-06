# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/erle/ros_catkin_ws/src/urg_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/erle/ros_catkin_ws/build_isolated/urg_c

# Include any dependencies generated for this target.
include CMakeFiles/open_urg_sensor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/open_urg_sensor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/open_urg_sensor.dir/flags.make

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o: CMakeFiles/open_urg_sensor.dir/flags.make
CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o: /home/erle/ros_catkin_ws/src/urg_c/current/samples/open_urg_sensor.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/erle/ros_catkin_ws/build_isolated/urg_c/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o   -c /home/erle/ros_catkin_ws/src/urg_c/current/samples/open_urg_sensor.c

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/erle/ros_catkin_ws/src/urg_c/current/samples/open_urg_sensor.c > CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.i

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/erle/ros_catkin_ws/src/urg_c/current/samples/open_urg_sensor.c -o CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.s

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.requires:
.PHONY : CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.requires

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.provides: CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.requires
	$(MAKE) -f CMakeFiles/open_urg_sensor.dir/build.make CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.provides.build
.PHONY : CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.provides

CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.provides.build: CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o

# Object files for target open_urg_sensor
open_urg_sensor_OBJECTS = \
"CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o"

# External object files for target open_urg_sensor
open_urg_sensor_EXTERNAL_OBJECTS =

/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so: CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so: CMakeFiles/open_urg_sensor.dir/build.make
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libliburg_c.so
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so: CMakeFiles/open_urg_sensor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared library /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/open_urg_sensor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/open_urg_sensor.dir/build: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so
.PHONY : CMakeFiles/open_urg_sensor.dir/build

CMakeFiles/open_urg_sensor.dir/requires: CMakeFiles/open_urg_sensor.dir/current/samples/open_urg_sensor.c.o.requires
.PHONY : CMakeFiles/open_urg_sensor.dir/requires

CMakeFiles/open_urg_sensor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/open_urg_sensor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/open_urg_sensor.dir/clean

CMakeFiles/open_urg_sensor.dir/depend:
	cd /home/erle/ros_catkin_ws/build_isolated/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erle/ros_catkin_ws/src/urg_c /home/erle/ros_catkin_ws/src/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c/CMakeFiles/open_urg_sensor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open_urg_sensor.dir/depend

