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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\humancannonball2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/humancannonball2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/humancannonball2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/humancannonball2.dir/flags.make

CMakeFiles/humancannonball2.dir/main.cpp.obj: CMakeFiles/humancannonball2.dir/flags.make
CMakeFiles/humancannonball2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/humancannonball2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\humancannonball2.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\main.cpp"

CMakeFiles/humancannonball2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/humancannonball2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\main.cpp" > CMakeFiles\humancannonball2.dir\main.cpp.i

CMakeFiles/humancannonball2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/humancannonball2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\main.cpp" -o CMakeFiles\humancannonball2.dir\main.cpp.s

# Object files for target humancannonball2
humancannonball2_OBJECTS = \
"CMakeFiles/humancannonball2.dir/main.cpp.obj"

# External object files for target humancannonball2
humancannonball2_EXTERNAL_OBJECTS =

humancannonball2.exe: CMakeFiles/humancannonball2.dir/main.cpp.obj
humancannonball2.exe: CMakeFiles/humancannonball2.dir/build.make
humancannonball2.exe: CMakeFiles/humancannonball2.dir/linklibs.rsp
humancannonball2.exe: CMakeFiles/humancannonball2.dir/objects1.rsp
humancannonball2.exe: CMakeFiles/humancannonball2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable humancannonball2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\humancannonball2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/humancannonball2.dir/build: humancannonball2.exe

.PHONY : CMakeFiles/humancannonball2.dir/build

CMakeFiles/humancannonball2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\humancannonball2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/humancannonball2.dir/clean

CMakeFiles/humancannonball2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\humancannonball2" "C:\Users\Adolf Hitler\CLionProjects\humancannonball2" "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\humancannonball2\cmake-build-debug\CMakeFiles\humancannonball2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/humancannonball2.dir/depend

