# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\nikola"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/nikola.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/nikola.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nikola.dir/flags.make

CMakeFiles/nikola.dir/main.cpp.obj: CMakeFiles/nikola.dir/flags.make
CMakeFiles/nikola.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nikola.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\nikola.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\nikola\main.cpp"

CMakeFiles/nikola.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nikola.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\nikola\main.cpp" > CMakeFiles\nikola.dir\main.cpp.i

CMakeFiles/nikola.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nikola.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\nikola\main.cpp" -o CMakeFiles\nikola.dir\main.cpp.s

# Object files for target nikola
nikola_OBJECTS = \
"CMakeFiles/nikola.dir/main.cpp.obj"

# External object files for target nikola
nikola_EXTERNAL_OBJECTS =

nikola.exe: CMakeFiles/nikola.dir/main.cpp.obj
nikola.exe: CMakeFiles/nikola.dir/build.make
nikola.exe: CMakeFiles/nikola.dir/linklibs.rsp
nikola.exe: CMakeFiles/nikola.dir/objects1.rsp
nikola.exe: CMakeFiles/nikola.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nikola.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nikola.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nikola.dir/build: nikola.exe
.PHONY : CMakeFiles/nikola.dir/build

CMakeFiles/nikola.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nikola.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nikola.dir/clean

CMakeFiles/nikola.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\nikola" "C:\Users\Adolf Hitler\CLionProjects\nikola" "C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\nikola\cmake-build-debug\CMakeFiles\nikola.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/nikola.dir/depend
