# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\grassseed"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/grassseed.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/grassseed.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/grassseed.dir/flags.make

CMakeFiles/grassseed.dir/main.cpp.obj: CMakeFiles/grassseed.dir/flags.make
CMakeFiles/grassseed.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/grassseed.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\grassseed.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\grassseed\main.cpp"

CMakeFiles/grassseed.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grassseed.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\grassseed\main.cpp" > CMakeFiles\grassseed.dir\main.cpp.i

CMakeFiles/grassseed.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grassseed.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\grassseed\main.cpp" -o CMakeFiles\grassseed.dir\main.cpp.s

# Object files for target grassseed
grassseed_OBJECTS = \
"CMakeFiles/grassseed.dir/main.cpp.obj"

# External object files for target grassseed
grassseed_EXTERNAL_OBJECTS =

grassseed.exe: CMakeFiles/grassseed.dir/main.cpp.obj
grassseed.exe: CMakeFiles/grassseed.dir/build.make
grassseed.exe: CMakeFiles/grassseed.dir/linklibs.rsp
grassseed.exe: CMakeFiles/grassseed.dir/objects1.rsp
grassseed.exe: CMakeFiles/grassseed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable grassseed.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\grassseed.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/grassseed.dir/build: grassseed.exe

.PHONY : CMakeFiles/grassseed.dir/build

CMakeFiles/grassseed.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\grassseed.dir\cmake_clean.cmake
.PHONY : CMakeFiles/grassseed.dir/clean

CMakeFiles/grassseed.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\grassseed" "C:\Users\Adolf Hitler\CLionProjects\grassseed" "C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\grassseed\cmake-build-debug\CMakeFiles\grassseed.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/grassseed.dir/depend

