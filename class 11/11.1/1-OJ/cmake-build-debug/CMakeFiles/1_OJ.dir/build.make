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
CMAKE_SOURCE_DIR = "E:\Ccode\class 11\11.1\1-OJ"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1_OJ.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_OJ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_OJ.dir/flags.make

CMakeFiles/1_OJ.dir/main.cpp.obj: CMakeFiles/1_OJ.dir/flags.make
CMakeFiles/1_OJ.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_OJ.dir/main.cpp.obj"
	H:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1_OJ.dir\main.cpp.obj -c "E:\Ccode\class 11\11.1\1-OJ\main.cpp"

CMakeFiles/1_OJ.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_OJ.dir/main.cpp.i"
	H:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Ccode\class 11\11.1\1-OJ\main.cpp" > CMakeFiles\1_OJ.dir\main.cpp.i

CMakeFiles/1_OJ.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_OJ.dir/main.cpp.s"
	H:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Ccode\class 11\11.1\1-OJ\main.cpp" -o CMakeFiles\1_OJ.dir\main.cpp.s

# Object files for target 1_OJ
1_OJ_OBJECTS = \
"CMakeFiles/1_OJ.dir/main.cpp.obj"

# External object files for target 1_OJ
1_OJ_EXTERNAL_OBJECTS =

1_OJ.exe: CMakeFiles/1_OJ.dir/main.cpp.obj
1_OJ.exe: CMakeFiles/1_OJ.dir/build.make
1_OJ.exe: CMakeFiles/1_OJ.dir/linklibs.rsp
1_OJ.exe: CMakeFiles/1_OJ.dir/objects1.rsp
1_OJ.exe: CMakeFiles/1_OJ.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_OJ.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_OJ.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_OJ.dir/build: 1_OJ.exe

.PHONY : CMakeFiles/1_OJ.dir/build

CMakeFiles/1_OJ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_OJ.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_OJ.dir/clean

CMakeFiles/1_OJ.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Ccode\class 11\11.1\1-OJ" "E:\Ccode\class 11\11.1\1-OJ" "E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug" "E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug" "E:\Ccode\class 11\11.1\1-OJ\cmake-build-debug\CMakeFiles\1_OJ.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1_OJ.dir/depend

