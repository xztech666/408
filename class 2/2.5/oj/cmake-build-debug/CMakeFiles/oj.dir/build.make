# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "E:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Ccode\class 2\2.5\oj"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Ccode\class 2\2.5\oj\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/oj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oj.dir/flags.make

CMakeFiles/oj.dir/main.c.obj: CMakeFiles/oj.dir/flags.make
CMakeFiles/oj.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Ccode\class 2\2.5\oj\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/oj.dir/main.c.obj"
	H:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\oj.dir\main.c.obj -c "E:\Ccode\class 2\2.5\oj\main.c"

CMakeFiles/oj.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oj.dir/main.c.i"
	H:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Ccode\class 2\2.5\oj\main.c" > CMakeFiles\oj.dir\main.c.i

CMakeFiles/oj.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oj.dir/main.c.s"
	H:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Ccode\class 2\2.5\oj\main.c" -o CMakeFiles\oj.dir\main.c.s

# Object files for target oj
oj_OBJECTS = \
"CMakeFiles/oj.dir/main.c.obj"

# External object files for target oj
oj_EXTERNAL_OBJECTS =

oj.exe: CMakeFiles/oj.dir/main.c.obj
oj.exe: CMakeFiles/oj.dir/build.make
oj.exe: CMakeFiles/oj.dir/linklibs.rsp
oj.exe: CMakeFiles/oj.dir/objects1.rsp
oj.exe: CMakeFiles/oj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Ccode\class 2\2.5\oj\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable oj.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\oj.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oj.dir/build: oj.exe

.PHONY : CMakeFiles/oj.dir/build

CMakeFiles/oj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\oj.dir\cmake_clean.cmake
.PHONY : CMakeFiles/oj.dir/clean

CMakeFiles/oj.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Ccode\class 2\2.5\oj" "E:\Ccode\class 2\2.5\oj" "E:\Ccode\class 2\2.5\oj\cmake-build-debug" "E:\Ccode\class 2\2.5\oj\cmake-build-debug" "E:\Ccode\class 2\2.5\oj\cmake-build-debug\CMakeFiles\oj.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/oj.dir/depend

