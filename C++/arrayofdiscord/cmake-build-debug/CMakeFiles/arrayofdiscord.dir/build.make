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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/arrayofdiscord.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arrayofdiscord.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrayofdiscord.dir/flags.make

CMakeFiles/arrayofdiscord.dir/main.cpp.obj: CMakeFiles/arrayofdiscord.dir/flags.make
CMakeFiles/arrayofdiscord.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arrayofdiscord.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\arrayofdiscord.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\main.cpp"

CMakeFiles/arrayofdiscord.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arrayofdiscord.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\main.cpp" > CMakeFiles\arrayofdiscord.dir\main.cpp.i

CMakeFiles/arrayofdiscord.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arrayofdiscord.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\main.cpp" -o CMakeFiles\arrayofdiscord.dir\main.cpp.s

# Object files for target arrayofdiscord
arrayofdiscord_OBJECTS = \
"CMakeFiles/arrayofdiscord.dir/main.cpp.obj"

# External object files for target arrayofdiscord
arrayofdiscord_EXTERNAL_OBJECTS =

arrayofdiscord.exe: CMakeFiles/arrayofdiscord.dir/main.cpp.obj
arrayofdiscord.exe: CMakeFiles/arrayofdiscord.dir/build.make
arrayofdiscord.exe: CMakeFiles/arrayofdiscord.dir/linklibs.rsp
arrayofdiscord.exe: CMakeFiles/arrayofdiscord.dir/objects1.rsp
arrayofdiscord.exe: CMakeFiles/arrayofdiscord.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arrayofdiscord.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arrayofdiscord.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arrayofdiscord.dir/build: arrayofdiscord.exe

.PHONY : CMakeFiles/arrayofdiscord.dir/build

CMakeFiles/arrayofdiscord.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arrayofdiscord.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arrayofdiscord.dir/clean

CMakeFiles/arrayofdiscord.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord" "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord" "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\arrayofdiscord\cmake-build-debug\CMakeFiles\arrayofdiscord.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/arrayofdiscord.dir/depend

