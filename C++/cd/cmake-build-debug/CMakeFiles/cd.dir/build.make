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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\cd"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cd.dir/flags.make

CMakeFiles/cd.dir/main.cpp.obj: CMakeFiles/cd.dir/flags.make
CMakeFiles/cd.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cd.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cd.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\cd\main.cpp"

CMakeFiles/cd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cd.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\cd\main.cpp" > CMakeFiles\cd.dir\main.cpp.i

CMakeFiles/cd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cd.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\cd\main.cpp" -o CMakeFiles\cd.dir\main.cpp.s

# Object files for target cd
cd_OBJECTS = \
"CMakeFiles/cd.dir/main.cpp.obj"

# External object files for target cd
cd_EXTERNAL_OBJECTS =

cd.exe: CMakeFiles/cd.dir/main.cpp.obj
cd.exe: CMakeFiles/cd.dir/build.make
cd.exe: CMakeFiles/cd.dir/linklibs.rsp
cd.exe: CMakeFiles/cd.dir/objects1.rsp
cd.exe: CMakeFiles/cd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cd.dir/build: cd.exe

.PHONY : CMakeFiles/cd.dir/build

CMakeFiles/cd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cd.dir/clean

CMakeFiles/cd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\cd" "C:\Users\Adolf Hitler\CLionProjects\cd" "C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\cd\cmake-build-debug\CMakeFiles\cd.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cd.dir/depend

