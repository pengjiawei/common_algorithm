# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\software\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\WORK\CLionWorkSpace\algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/algorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/algorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algorithm.dir/flags.make

CMakeFiles/algorithm.dir/main.cpp.obj: CMakeFiles/algorithm.dir/flags.make
CMakeFiles/algorithm.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algorithm.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\algorithm.dir\main.cpp.obj -c D:\WORK\CLionWorkSpace\algorithm\main.cpp

CMakeFiles/algorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithm.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WORK\CLionWorkSpace\algorithm\main.cpp > CMakeFiles\algorithm.dir\main.cpp.i

CMakeFiles/algorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithm.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WORK\CLionWorkSpace\algorithm\main.cpp -o CMakeFiles\algorithm.dir\main.cpp.s

CMakeFiles/algorithm.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/algorithm.dir/main.cpp.obj.requires

CMakeFiles/algorithm.dir/main.cpp.obj.provides: CMakeFiles/algorithm.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\algorithm.dir\build.make CMakeFiles/algorithm.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/algorithm.dir/main.cpp.obj.provides

CMakeFiles/algorithm.dir/main.cpp.obj.provides.build: CMakeFiles/algorithm.dir/main.cpp.obj


# Object files for target algorithm
algorithm_OBJECTS = \
"CMakeFiles/algorithm.dir/main.cpp.obj"

# External object files for target algorithm
algorithm_EXTERNAL_OBJECTS =

algorithm.exe: CMakeFiles/algorithm.dir/main.cpp.obj
algorithm.exe: CMakeFiles/algorithm.dir/build.make
algorithm.exe: CMakeFiles/algorithm.dir/linklibs.rsp
algorithm.exe: CMakeFiles/algorithm.dir/objects1.rsp
algorithm.exe: CMakeFiles/algorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algorithm.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\algorithm.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algorithm.dir/build: algorithm.exe

.PHONY : CMakeFiles/algorithm.dir/build

CMakeFiles/algorithm.dir/requires: CMakeFiles/algorithm.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/algorithm.dir/requires

CMakeFiles/algorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\algorithm.dir\cmake_clean.cmake
.PHONY : CMakeFiles/algorithm.dir/clean

CMakeFiles/algorithm.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WORK\CLionWorkSpace\algorithm D:\WORK\CLionWorkSpace\algorithm D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug D:\WORK\CLionWorkSpace\algorithm\cmake-build-debug\CMakeFiles\algorithm.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algorithm.dir/depend

