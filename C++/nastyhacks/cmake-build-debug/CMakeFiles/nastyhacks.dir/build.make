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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\nastyhacks"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/nastyhacks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nastyhacks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nastyhacks.dir/flags.make

CMakeFiles/nastyhacks.dir/main.cpp.obj: CMakeFiles/nastyhacks.dir/flags.make
CMakeFiles/nastyhacks.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nastyhacks.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\nastyhacks.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\main.cpp"

CMakeFiles/nastyhacks.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nastyhacks.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\main.cpp" > CMakeFiles\nastyhacks.dir\main.cpp.i

CMakeFiles/nastyhacks.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nastyhacks.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\main.cpp" -o CMakeFiles\nastyhacks.dir\main.cpp.s

# Object files for target nastyhacks
nastyhacks_OBJECTS = \
"CMakeFiles/nastyhacks.dir/main.cpp.obj"

# External object files for target nastyhacks
nastyhacks_EXTERNAL_OBJECTS =

nastyhacks.exe: CMakeFiles/nastyhacks.dir/main.cpp.obj
nastyhacks.exe: CMakeFiles/nastyhacks.dir/build.make
nastyhacks.exe: CMakeFiles/nastyhacks.dir/linklibs.rsp
nastyhacks.exe: CMakeFiles/nastyhacks.dir/objects1.rsp
nastyhacks.exe: CMakeFiles/nastyhacks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nastyhacks.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nastyhacks.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nastyhacks.dir/build: nastyhacks.exe

.PHONY : CMakeFiles/nastyhacks.dir/build

CMakeFiles/nastyhacks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nastyhacks.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nastyhacks.dir/clean

CMakeFiles/nastyhacks.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\nastyhacks" "C:\Users\Adolf Hitler\CLionProjects\nastyhacks" "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\nastyhacks\cmake-build-debug\CMakeFiles\nastyhacks.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/nastyhacks.dir/depend
