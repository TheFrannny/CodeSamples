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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\filip"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/filip.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/filip.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/filip.dir/flags.make

CMakeFiles/filip.dir/main.cpp.obj: CMakeFiles/filip.dir/flags.make
CMakeFiles/filip.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/filip.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\filip.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\filip\main.cpp"

CMakeFiles/filip.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/filip.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\filip\main.cpp" > CMakeFiles\filip.dir\main.cpp.i

CMakeFiles/filip.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/filip.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\filip\main.cpp" -o CMakeFiles\filip.dir\main.cpp.s

# Object files for target filip
filip_OBJECTS = \
"CMakeFiles/filip.dir/main.cpp.obj"

# External object files for target filip
filip_EXTERNAL_OBJECTS =

filip.exe: CMakeFiles/filip.dir/main.cpp.obj
filip.exe: CMakeFiles/filip.dir/build.make
filip.exe: CMakeFiles/filip.dir/linklibs.rsp
filip.exe: CMakeFiles/filip.dir/objects1.rsp
filip.exe: CMakeFiles/filip.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable filip.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\filip.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/filip.dir/build: filip.exe

.PHONY : CMakeFiles/filip.dir/build

CMakeFiles/filip.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\filip.dir\cmake_clean.cmake
.PHONY : CMakeFiles/filip.dir/clean

CMakeFiles/filip.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\filip" "C:\Users\Adolf Hitler\CLionProjects\filip" "C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\filip\cmake-build-debug\CMakeFiles\filip.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/filip.dir/depend

