# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivan/Desktop/Projects/jparser/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivan/Desktop/Projects/jparser/build

# Include any dependencies generated for this target.
include parser/CMakeFiles/jmap.dir/depend.make

# Include the progress variables for this target.
include parser/CMakeFiles/jmap.dir/progress.make

# Include the compile flags for this target's objects.
include parser/CMakeFiles/jmap.dir/flags.make

parser/CMakeFiles/jmap.dir/parser.cpp.o: parser/CMakeFiles/jmap.dir/flags.make
parser/CMakeFiles/jmap.dir/parser.cpp.o: /home/ivan/Desktop/Projects/jparser/source/parser/parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/Desktop/Projects/jparser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object parser/CMakeFiles/jmap.dir/parser.cpp.o"
	cd /home/ivan/Desktop/Projects/jparser/build/parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jmap.dir/parser.cpp.o -c /home/ivan/Desktop/Projects/jparser/source/parser/parser.cpp

parser/CMakeFiles/jmap.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jmap.dir/parser.cpp.i"
	cd /home/ivan/Desktop/Projects/jparser/build/parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/Desktop/Projects/jparser/source/parser/parser.cpp > CMakeFiles/jmap.dir/parser.cpp.i

parser/CMakeFiles/jmap.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jmap.dir/parser.cpp.s"
	cd /home/ivan/Desktop/Projects/jparser/build/parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/Desktop/Projects/jparser/source/parser/parser.cpp -o CMakeFiles/jmap.dir/parser.cpp.s

# Object files for target jmap
jmap_OBJECTS = \
"CMakeFiles/jmap.dir/parser.cpp.o"

# External object files for target jmap
jmap_EXTERNAL_OBJECTS =

parser/libjmap.so.0.1: parser/CMakeFiles/jmap.dir/parser.cpp.o
parser/libjmap.so.0.1: parser/CMakeFiles/jmap.dir/build.make
parser/libjmap.so.0.1: parser/CMakeFiles/jmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivan/Desktop/Projects/jparser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libjmap.so"
	cd /home/ivan/Desktop/Projects/jparser/build/parser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jmap.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ivan/Desktop/Projects/jparser/build/parser && $(CMAKE_COMMAND) -E cmake_symlink_library libjmap.so.0.1 libjmap.so.0.1 libjmap.so

parser/libjmap.so: parser/libjmap.so.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate parser/libjmap.so

# Rule to build all files generated by this target.
parser/CMakeFiles/jmap.dir/build: parser/libjmap.so

.PHONY : parser/CMakeFiles/jmap.dir/build

parser/CMakeFiles/jmap.dir/clean:
	cd /home/ivan/Desktop/Projects/jparser/build/parser && $(CMAKE_COMMAND) -P CMakeFiles/jmap.dir/cmake_clean.cmake
.PHONY : parser/CMakeFiles/jmap.dir/clean

parser/CMakeFiles/jmap.dir/depend:
	cd /home/ivan/Desktop/Projects/jparser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/Desktop/Projects/jparser/source /home/ivan/Desktop/Projects/jparser/source/parser /home/ivan/Desktop/Projects/jparser/build /home/ivan/Desktop/Projects/jparser/build/parser /home/ivan/Desktop/Projects/jparser/build/parser/CMakeFiles/jmap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : parser/CMakeFiles/jmap.dir/depend
