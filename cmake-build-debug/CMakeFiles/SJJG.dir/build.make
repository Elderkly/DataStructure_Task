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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elderly/Desktop/Git/DataStructure_Task

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SJJG.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SJJG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SJJG.dir/flags.make

CMakeFiles/SJJG.dir/main.cpp.o: CMakeFiles/SJJG.dir/flags.make
CMakeFiles/SJJG.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SJJG.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SJJG.dir/main.cpp.o -c /Users/elderly/Desktop/Git/DataStructure_Task/main.cpp

CMakeFiles/SJJG.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SJJG.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elderly/Desktop/Git/DataStructure_Task/main.cpp > CMakeFiles/SJJG.dir/main.cpp.i

CMakeFiles/SJJG.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SJJG.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elderly/Desktop/Git/DataStructure_Task/main.cpp -o CMakeFiles/SJJG.dir/main.cpp.s

# Object files for target SJJG
SJJG_OBJECTS = \
"CMakeFiles/SJJG.dir/main.cpp.o"

# External object files for target SJJG
SJJG_EXTERNAL_OBJECTS =

SJJG: CMakeFiles/SJJG.dir/main.cpp.o
SJJG: CMakeFiles/SJJG.dir/build.make
SJJG: CMakeFiles/SJJG.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SJJG"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SJJG.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SJJG.dir/build: SJJG

.PHONY : CMakeFiles/SJJG.dir/build

CMakeFiles/SJJG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SJJG.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SJJG.dir/clean

CMakeFiles/SJJG.dir/depend:
	cd /Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elderly/Desktop/Git/DataStructure_Task /Users/elderly/Desktop/Git/DataStructure_Task /Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug /Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug /Users/elderly/Desktop/Git/DataStructure_Task/cmake-build-debug/CMakeFiles/SJJG.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SJJG.dir/depend

