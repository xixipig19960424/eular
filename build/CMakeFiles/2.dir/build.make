# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /data_b/jiaxi.he/lab/euler/build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data_b/jiaxi.he/lab/euler/build

# Include any dependencies generated for this target.
include CMakeFiles/2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2.dir/flags.make

CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o: CMakeFiles/2.dir/flags.make
CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o: /data_b/jiaxi.he/lab/euler/2/2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data_b/jiaxi.he/lab/euler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o   -c /data_b/jiaxi.he/lab/euler/2/2.c

CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /data_b/jiaxi.he/lab/euler/2/2.c > CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.i

CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /data_b/jiaxi.he/lab/euler/2/2.c -o CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.s

# Object files for target 2
2_OBJECTS = \
"CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o"

# External object files for target 2
2_EXTERNAL_OBJECTS =

2 : CMakeFiles/2.dir/data_b/jiaxi.he/lab/euler/2/2.c.o
2 : CMakeFiles/2.dir/build.make
2 : CMakeFiles/2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/data_b/jiaxi.he/lab/euler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2.dir/build: 2

.PHONY : CMakeFiles/2.dir/build

CMakeFiles/2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2.dir/clean

CMakeFiles/2.dir/depend:
	cd /data_b/jiaxi.he/lab/euler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data_b/jiaxi.he/lab/euler/build /data_b/jiaxi.he/lab/euler/build /data_b/jiaxi.he/lab/euler/build /data_b/jiaxi.he/lab/euler/build /data_b/jiaxi.he/lab/euler/build/CMakeFiles/2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2.dir/depend

