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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\insert"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/insert.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/insert.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insert.dir/flags.make

CMakeFiles/insert.dir/main.cpp.obj: CMakeFiles/insert.dir/flags.make
CMakeFiles/insert.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/insert.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\insert.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\insert\main.cpp"

CMakeFiles/insert.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/insert.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\insert\main.cpp" > CMakeFiles\insert.dir\main.cpp.i

CMakeFiles/insert.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/insert.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\insert\main.cpp" -o CMakeFiles\insert.dir\main.cpp.s

# Object files for target insert
insert_OBJECTS = \
"CMakeFiles/insert.dir/main.cpp.obj"

# External object files for target insert
insert_EXTERNAL_OBJECTS =

insert.exe: CMakeFiles/insert.dir/main.cpp.obj
insert.exe: CMakeFiles/insert.dir/build.make
insert.exe: CMakeFiles/insert.dir/linklibs.rsp
insert.exe: CMakeFiles/insert.dir/objects1.rsp
insert.exe: CMakeFiles/insert.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable insert.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\insert.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insert.dir/build: insert.exe
.PHONY : CMakeFiles/insert.dir/build

CMakeFiles/insert.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\insert.dir\cmake_clean.cmake
.PHONY : CMakeFiles/insert.dir/clean

CMakeFiles/insert.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\insert" "C:\Users\Adolf Hitler\CLionProjects\insert" "C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\insert\cmake-build-debug\CMakeFiles\insert.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/insert.dir/depend

