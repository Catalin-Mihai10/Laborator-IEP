# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/catalin/IEP/proiect_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/catalin/IEP/proiect_1/build

# Include any dependencies generated for this target.
include source/store/CMakeFiles/store.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/store/CMakeFiles/store.dir/compiler_depend.make

# Include the progress variables for this target.
include source/store/CMakeFiles/store.dir/progress.make

# Include the compile flags for this target's objects.
include source/store/CMakeFiles/store.dir/flags.make

source/store/CMakeFiles/store.dir/store.cpp.o: source/store/CMakeFiles/store.dir/flags.make
source/store/CMakeFiles/store.dir/store.cpp.o: ../source/store/store.cpp
source/store/CMakeFiles/store.dir/store.cpp.o: source/store/CMakeFiles/store.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/catalin/IEP/proiect_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/store/CMakeFiles/store.dir/store.cpp.o"
	cd /home/catalin/IEP/proiect_1/build/source/store && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/store/CMakeFiles/store.dir/store.cpp.o -MF CMakeFiles/store.dir/store.cpp.o.d -o CMakeFiles/store.dir/store.cpp.o -c /home/catalin/IEP/proiect_1/source/store/store.cpp

source/store/CMakeFiles/store.dir/store.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/store.dir/store.cpp.i"
	cd /home/catalin/IEP/proiect_1/build/source/store && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/catalin/IEP/proiect_1/source/store/store.cpp > CMakeFiles/store.dir/store.cpp.i

source/store/CMakeFiles/store.dir/store.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/store.dir/store.cpp.s"
	cd /home/catalin/IEP/proiect_1/build/source/store && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/catalin/IEP/proiect_1/source/store/store.cpp -o CMakeFiles/store.dir/store.cpp.s

# Object files for target store
store_OBJECTS = \
"CMakeFiles/store.dir/store.cpp.o"

# External object files for target store
store_EXTERNAL_OBJECTS =

source/store/libstore.a: source/store/CMakeFiles/store.dir/store.cpp.o
source/store/libstore.a: source/store/CMakeFiles/store.dir/build.make
source/store/libstore.a: source/store/CMakeFiles/store.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/catalin/IEP/proiect_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstore.a"
	cd /home/catalin/IEP/proiect_1/build/source/store && $(CMAKE_COMMAND) -P CMakeFiles/store.dir/cmake_clean_target.cmake
	cd /home/catalin/IEP/proiect_1/build/source/store && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/store.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/store/CMakeFiles/store.dir/build: source/store/libstore.a
.PHONY : source/store/CMakeFiles/store.dir/build

source/store/CMakeFiles/store.dir/clean:
	cd /home/catalin/IEP/proiect_1/build/source/store && $(CMAKE_COMMAND) -P CMakeFiles/store.dir/cmake_clean.cmake
.PHONY : source/store/CMakeFiles/store.dir/clean

source/store/CMakeFiles/store.dir/depend:
	cd /home/catalin/IEP/proiect_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/catalin/IEP/proiect_1 /home/catalin/IEP/proiect_1/source/store /home/catalin/IEP/proiect_1/build /home/catalin/IEP/proiect_1/build/source/store /home/catalin/IEP/proiect_1/build/source/store/CMakeFiles/store.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/store/CMakeFiles/store.dir/depend

