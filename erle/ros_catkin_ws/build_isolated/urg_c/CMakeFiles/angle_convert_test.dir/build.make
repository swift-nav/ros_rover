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
include CMakeFiles/angle_convert_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/angle_convert_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/angle_convert_test.dir/flags.make

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o: CMakeFiles/angle_convert_test.dir/flags.make
CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o: /home/erle/ros_catkin_ws/src/urg_c/current/samples/angle_convert_test.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/erle/ros_catkin_ws/build_isolated/urg_c/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o   -c /home/erle/ros_catkin_ws/src/urg_c/current/samples/angle_convert_test.c

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/erle/ros_catkin_ws/src/urg_c/current/samples/angle_convert_test.c > CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.i

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/erle/ros_catkin_ws/src/urg_c/current/samples/angle_convert_test.c -o CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.s

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.requires:
.PHONY : CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.requires

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.provides: CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.requires
	$(MAKE) -f CMakeFiles/angle_convert_test.dir/build.make CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.provides.build
.PHONY : CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.provides

CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.provides.build: CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o

# Object files for target angle_convert_test
angle_convert_test_OBJECTS = \
"CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o"

# External object files for target angle_convert_test
angle_convert_test_EXTERNAL_OBJECTS =

/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: CMakeFiles/angle_convert_test.dir/build.make
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libliburg_c.so
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/libliburg_c.so
/home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test: CMakeFiles/angle_convert_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/angle_convert_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/angle_convert_test.dir/build: /home/erle/ros_catkin_ws/devel_isolated/urg_c/lib/urg_c/angle_convert_test
.PHONY : CMakeFiles/angle_convert_test.dir/build

CMakeFiles/angle_convert_test.dir/requires: CMakeFiles/angle_convert_test.dir/current/samples/angle_convert_test.c.o.requires
.PHONY : CMakeFiles/angle_convert_test.dir/requires

CMakeFiles/angle_convert_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/angle_convert_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/angle_convert_test.dir/clean

CMakeFiles/angle_convert_test.dir/depend:
	cd /home/erle/ros_catkin_ws/build_isolated/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erle/ros_catkin_ws/src/urg_c /home/erle/ros_catkin_ws/src/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c /home/erle/ros_catkin_ws/build_isolated/urg_c/CMakeFiles/angle_convert_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/angle_convert_test.dir/depend

