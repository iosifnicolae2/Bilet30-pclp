# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/iosif/Documents/clion-2016.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/iosif/Documents/clion-2016.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iosif/Documents/Scoala/bilet30

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iosif/Documents/Scoala/bilet30/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bilet30.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bilet30.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bilet30.dir/flags.make

CMakeFiles/bilet30.dir/main.cpp.o: CMakeFiles/bilet30.dir/flags.make
CMakeFiles/bilet30.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iosif/Documents/Scoala/bilet30/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bilet30.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bilet30.dir/main.cpp.o -c /home/iosif/Documents/Scoala/bilet30/main.cpp

CMakeFiles/bilet30.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bilet30.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iosif/Documents/Scoala/bilet30/main.cpp > CMakeFiles/bilet30.dir/main.cpp.i

CMakeFiles/bilet30.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bilet30.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iosif/Documents/Scoala/bilet30/main.cpp -o CMakeFiles/bilet30.dir/main.cpp.s

CMakeFiles/bilet30.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/bilet30.dir/main.cpp.o.requires

CMakeFiles/bilet30.dir/main.cpp.o.provides: CMakeFiles/bilet30.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/bilet30.dir/build.make CMakeFiles/bilet30.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/bilet30.dir/main.cpp.o.provides

CMakeFiles/bilet30.dir/main.cpp.o.provides.build: CMakeFiles/bilet30.dir/main.cpp.o


# Object files for target bilet30
bilet30_OBJECTS = \
"CMakeFiles/bilet30.dir/main.cpp.o"

# External object files for target bilet30
bilet30_EXTERNAL_OBJECTS =

bilet30: CMakeFiles/bilet30.dir/main.cpp.o
bilet30: CMakeFiles/bilet30.dir/build.make
bilet30: CMakeFiles/bilet30.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iosif/Documents/Scoala/bilet30/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bilet30"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bilet30.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bilet30.dir/build: bilet30

.PHONY : CMakeFiles/bilet30.dir/build

CMakeFiles/bilet30.dir/requires: CMakeFiles/bilet30.dir/main.cpp.o.requires

.PHONY : CMakeFiles/bilet30.dir/requires

CMakeFiles/bilet30.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bilet30.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bilet30.dir/clean

CMakeFiles/bilet30.dir/depend:
	cd /home/iosif/Documents/Scoala/bilet30/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iosif/Documents/Scoala/bilet30 /home/iosif/Documents/Scoala/bilet30 /home/iosif/Documents/Scoala/bilet30/cmake-build-debug /home/iosif/Documents/Scoala/bilet30/cmake-build-debug /home/iosif/Documents/Scoala/bilet30/cmake-build-debug/CMakeFiles/bilet30.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bilet30.dir/depend

