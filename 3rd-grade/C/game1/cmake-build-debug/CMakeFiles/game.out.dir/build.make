# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/135/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/135/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cody/Work/School-Stuff/3rd-grade/C/game1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/game.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.out.dir/flags.make

CMakeFiles/game.out.dir/main.c.o: CMakeFiles/game.out.dir/flags.make
CMakeFiles/game.out.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/game.out.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game.out.dir/main.c.o   -c /home/cody/Work/School-Stuff/3rd-grade/C/game1/main.c

CMakeFiles/game.out.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game.out.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cody/Work/School-Stuff/3rd-grade/C/game1/main.c > CMakeFiles/game.out.dir/main.c.i

CMakeFiles/game.out.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game.out.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cody/Work/School-Stuff/3rd-grade/C/game1/main.c -o CMakeFiles/game.out.dir/main.c.s

# Object files for target game.out
game_out_OBJECTS = \
"CMakeFiles/game.out.dir/main.c.o"

# External object files for target game.out
game_out_EXTERNAL_OBJECTS =

game.out: CMakeFiles/game.out.dir/main.c.o
game.out: CMakeFiles/game.out.dir/build.make
game.out: CMakeFiles/game.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable game.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.out.dir/build: game.out

.PHONY : CMakeFiles/game.out.dir/build

CMakeFiles/game.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.out.dir/clean

CMakeFiles/game.out.dir/depend:
	cd /home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cody/Work/School-Stuff/3rd-grade/C/game1 /home/cody/Work/School-Stuff/3rd-grade/C/game1 /home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug /home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug /home/cody/Work/School-Stuff/3rd-grade/C/game1/cmake-build-debug/CMakeFiles/game.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.out.dir/depend

