# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build

# Include any dependencies generated for this target.
include src/CMakeFiles/solution.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/solution.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/solution.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/solution.dir/flags.make

src/CMakeFiles/solution.dir/board.cpp.o: src/CMakeFiles/solution.dir/flags.make
src/CMakeFiles/solution.dir/board.cpp.o: ../src/board.cpp
src/CMakeFiles/solution.dir/board.cpp.o: src/CMakeFiles/solution.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/solution.dir/board.cpp.o"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/solution.dir/board.cpp.o -MF CMakeFiles/solution.dir/board.cpp.o.d -o CMakeFiles/solution.dir/board.cpp.o -c /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/board.cpp

src/CMakeFiles/solution.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solution.dir/board.cpp.i"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/board.cpp > CMakeFiles/solution.dir/board.cpp.i

src/CMakeFiles/solution.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solution.dir/board.cpp.s"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/board.cpp -o CMakeFiles/solution.dir/board.cpp.s

src/CMakeFiles/solution.dir/field.cpp.o: src/CMakeFiles/solution.dir/flags.make
src/CMakeFiles/solution.dir/field.cpp.o: ../src/field.cpp
src/CMakeFiles/solution.dir/field.cpp.o: src/CMakeFiles/solution.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/solution.dir/field.cpp.o"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/solution.dir/field.cpp.o -MF CMakeFiles/solution.dir/field.cpp.o.d -o CMakeFiles/solution.dir/field.cpp.o -c /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/field.cpp

src/CMakeFiles/solution.dir/field.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solution.dir/field.cpp.i"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/field.cpp > CMakeFiles/solution.dir/field.cpp.i

src/CMakeFiles/solution.dir/field.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solution.dir/field.cpp.s"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/field.cpp -o CMakeFiles/solution.dir/field.cpp.s

src/CMakeFiles/solution.dir/group.cpp.o: src/CMakeFiles/solution.dir/flags.make
src/CMakeFiles/solution.dir/group.cpp.o: ../src/group.cpp
src/CMakeFiles/solution.dir/group.cpp.o: src/CMakeFiles/solution.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/solution.dir/group.cpp.o"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/solution.dir/group.cpp.o -MF CMakeFiles/solution.dir/group.cpp.o.d -o CMakeFiles/solution.dir/group.cpp.o -c /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/group.cpp

src/CMakeFiles/solution.dir/group.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solution.dir/group.cpp.i"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/group.cpp > CMakeFiles/solution.dir/group.cpp.i

src/CMakeFiles/solution.dir/group.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solution.dir/group.cpp.s"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src/group.cpp -o CMakeFiles/solution.dir/group.cpp.s

# Object files for target solution
solution_OBJECTS = \
"CMakeFiles/solution.dir/board.cpp.o" \
"CMakeFiles/solution.dir/field.cpp.o" \
"CMakeFiles/solution.dir/group.cpp.o"

# External object files for target solution
solution_EXTERNAL_OBJECTS =

src/libsolution.a: src/CMakeFiles/solution.dir/board.cpp.o
src/libsolution.a: src/CMakeFiles/solution.dir/field.cpp.o
src/libsolution.a: src/CMakeFiles/solution.dir/group.cpp.o
src/libsolution.a: src/CMakeFiles/solution.dir/build.make
src/libsolution.a: src/CMakeFiles/solution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libsolution.a"
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && $(CMAKE_COMMAND) -P CMakeFiles/solution.dir/cmake_clean_target.cmake
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/solution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/solution.dir/build: src/libsolution.a
.PHONY : src/CMakeFiles/solution.dir/build

src/CMakeFiles/solution.dir/clean:
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src && $(CMAKE_COMMAND) -P CMakeFiles/solution.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/solution.dir/clean

src/CMakeFiles/solution.dir/depend:
	cd /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/src /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src /home/maciek/Desktop/PersonalCS/sudokuHelper/sudokuHelper/build/src/CMakeFiles/solution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/solution.dir/depend

