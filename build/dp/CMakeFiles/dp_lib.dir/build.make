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
CMAKE_SOURCE_DIR = /home/dev/dev/learnC_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev/dev/learnC_2/build

# Include any dependencies generated for this target.
include dp/CMakeFiles/dp_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include dp/CMakeFiles/dp_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include dp/CMakeFiles/dp_lib.dir/progress.make

# Include the compile flags for this target's objects.
include dp/CMakeFiles/dp_lib.dir/flags.make

dp/CMakeFiles/dp_lib.dir/dp.c.o: dp/CMakeFiles/dp_lib.dir/flags.make
dp/CMakeFiles/dp_lib.dir/dp.c.o: ../dp/dp.c
dp/CMakeFiles/dp_lib.dir/dp.c.o: dp/CMakeFiles/dp_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/dev/learnC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object dp/CMakeFiles/dp_lib.dir/dp.c.o"
	cd /home/dev/dev/learnC_2/build/dp && /usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT dp/CMakeFiles/dp_lib.dir/dp.c.o -MF CMakeFiles/dp_lib.dir/dp.c.o.d -o CMakeFiles/dp_lib.dir/dp.c.o -c /home/dev/dev/learnC_2/dp/dp.c

dp/CMakeFiles/dp_lib.dir/dp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dp_lib.dir/dp.c.i"
	cd /home/dev/dev/learnC_2/build/dp && /usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dev/dev/learnC_2/dp/dp.c > CMakeFiles/dp_lib.dir/dp.c.i

dp/CMakeFiles/dp_lib.dir/dp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dp_lib.dir/dp.c.s"
	cd /home/dev/dev/learnC_2/build/dp && /usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dev/dev/learnC_2/dp/dp.c -o CMakeFiles/dp_lib.dir/dp.c.s

# Object files for target dp_lib
dp_lib_OBJECTS = \
"CMakeFiles/dp_lib.dir/dp.c.o"

# External object files for target dp_lib
dp_lib_EXTERNAL_OBJECTS =

dp/libdp_lib.a: dp/CMakeFiles/dp_lib.dir/dp.c.o
dp/libdp_lib.a: dp/CMakeFiles/dp_lib.dir/build.make
dp/libdp_lib.a: dp/CMakeFiles/dp_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev/dev/learnC_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libdp_lib.a"
	cd /home/dev/dev/learnC_2/build/dp && $(CMAKE_COMMAND) -P CMakeFiles/dp_lib.dir/cmake_clean_target.cmake
	cd /home/dev/dev/learnC_2/build/dp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dp_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dp/CMakeFiles/dp_lib.dir/build: dp/libdp_lib.a
.PHONY : dp/CMakeFiles/dp_lib.dir/build

dp/CMakeFiles/dp_lib.dir/clean:
	cd /home/dev/dev/learnC_2/build/dp && $(CMAKE_COMMAND) -P CMakeFiles/dp_lib.dir/cmake_clean.cmake
.PHONY : dp/CMakeFiles/dp_lib.dir/clean

dp/CMakeFiles/dp_lib.dir/depend:
	cd /home/dev/dev/learnC_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/dev/learnC_2 /home/dev/dev/learnC_2/dp /home/dev/dev/learnC_2/build /home/dev/dev/learnC_2/build/dp /home/dev/dev/learnC_2/build/dp/CMakeFiles/dp_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dp/CMakeFiles/dp_lib.dir/depend
