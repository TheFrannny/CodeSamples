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
CMAKE_SOURCE_DIR = "C:\Users\Adolf Hitler\CLionProjects\kornislav"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/kornislav.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kornislav.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kornislav.dir/flags.make

CMakeFiles/kornislav.dir/main.cpp.obj: CMakeFiles/kornislav.dir/flags.make
CMakeFiles/kornislav.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kornislav.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kornislav.dir\main.cpp.obj -c "C:\Users\Adolf Hitler\CLionProjects\kornislav\main.cpp"

CMakeFiles/kornislav.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kornislav.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adolf Hitler\CLionProjects\kornislav\main.cpp" > CMakeFiles\kornislav.dir\main.cpp.i

CMakeFiles/kornislav.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kornislav.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adolf Hitler\CLionProjects\kornislav\main.cpp" -o CMakeFiles\kornislav.dir\main.cpp.s

# Object files for target kornislav
kornislav_OBJECTS = \
"CMakeFiles/kornislav.dir/main.cpp.obj"

# External object files for target kornislav
kornislav_EXTERNAL_OBJECTS =

kornislav.exe: CMakeFiles/kornislav.dir/main.cpp.obj
kornislav.exe: CMakeFiles/kornislav.dir/build.make
kornislav.exe: CMakeFiles/kornislav.dir/linklibs.rsp
kornislav.exe: CMakeFiles/kornislav.dir/objects1.rsp
kornislav.exe: CMakeFiles/kornislav.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kornislav.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kornislav.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kornislav.dir/build: kornislav.exe

.PHONY : CMakeFiles/kornislav.dir/build

CMakeFiles/kornislav.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kornislav.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kornislav.dir/clean

CMakeFiles/kornislav.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adolf Hitler\CLionProjects\kornislav" "C:\Users\Adolf Hitler\CLionProjects\kornislav" "C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug" "C:\Users\Adolf Hitler\CLionProjects\kornislav\cmake-build-debug\CMakeFiles\kornislav.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kornislav.dir/depend

