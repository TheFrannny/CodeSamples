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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\isithalloween"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/isithalloween.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/isithalloween.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/isithalloween.dir/flags.make

CMakeFiles/isithalloween.dir/main.cpp.obj: CMakeFiles/isithalloween.dir/flags.make
CMakeFiles/isithalloween.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/isithalloween.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\isithalloween.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\isithalloween\main.cpp"

CMakeFiles/isithalloween.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isithalloween.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\isithalloween\main.cpp" > CMakeFiles\isithalloween.dir\main.cpp.i

CMakeFiles/isithalloween.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isithalloween.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\isithalloween\main.cpp" -o CMakeFiles\isithalloween.dir\main.cpp.s

# Object files for target isithalloween
isithalloween_OBJECTS = \
"CMakeFiles/isithalloween.dir/main.cpp.obj"

# External object files for target isithalloween
isithalloween_EXTERNAL_OBJECTS =

isithalloween.exe: CMakeFiles/isithalloween.dir/main.cpp.obj
isithalloween.exe: CMakeFiles/isithalloween.dir/build.make
isithalloween.exe: CMakeFiles/isithalloween.dir/linklibs.rsp
isithalloween.exe: CMakeFiles/isithalloween.dir/objects1.rsp
isithalloween.exe: CMakeFiles/isithalloween.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable isithalloween.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\isithalloween.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/isithalloween.dir/build: isithalloween.exe
.PHONY : CMakeFiles/isithalloween.dir/build

CMakeFiles/isithalloween.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\isithalloween.dir\cmake_clean.cmake
.PHONY : CMakeFiles/isithalloween.dir/clean

CMakeFiles/isithalloween.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\isithalloween" "C:\Users\Adolf Hitler\CLionProjects\isithalloween" "C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\isithalloween\cmake-build-debug\CMakeFiles\isithalloween.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/isithalloween.dir/depend

