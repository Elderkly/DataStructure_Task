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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/el/Desktop/Git/DataStructure_Task/408_Demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/408_Demo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/408_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/408_Demo.dir/flags.make

CMakeFiles/408_Demo.dir/main.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/408_Demo.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/main.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/main.c

CMakeFiles/408_Demo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/main.c > CMakeFiles/408_Demo.dir/main.c.i

CMakeFiles/408_Demo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/main.c -o CMakeFiles/408_Demo.dir/main.c.s

CMakeFiles/408_Demo.dir/common/linkList.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/common/linkList.c.o: ../common/linkList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/408_Demo.dir/common/linkList.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/common/linkList.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/linkList.c

CMakeFiles/408_Demo.dir/common/linkList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/common/linkList.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/linkList.c > CMakeFiles/408_Demo.dir/common/linkList.c.i

CMakeFiles/408_Demo.dir/common/linkList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/common/linkList.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/linkList.c -o CMakeFiles/408_Demo.dir/common/linkList.c.s

CMakeFiles/408_Demo.dir/common/sqList.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/common/sqList.c.o: ../common/sqList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/408_Demo.dir/common/sqList.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/common/sqList.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sqList.c

CMakeFiles/408_Demo.dir/common/sqList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/common/sqList.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sqList.c > CMakeFiles/408_Demo.dir/common/sqList.c.i

CMakeFiles/408_Demo.dir/common/sqList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/common/sqList.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sqList.c -o CMakeFiles/408_Demo.dir/common/sqList.c.s

CMakeFiles/408_Demo.dir/common/search.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/common/search.c.o: ../common/search.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/408_Demo.dir/common/search.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/common/search.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/search.c

CMakeFiles/408_Demo.dir/common/search.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/common/search.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/search.c > CMakeFiles/408_Demo.dir/common/search.c.i

CMakeFiles/408_Demo.dir/common/search.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/common/search.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/search.c -o CMakeFiles/408_Demo.dir/common/search.c.s

CMakeFiles/408_Demo.dir/common/string.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/common/string.c.o: ../common/string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/408_Demo.dir/common/string.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/common/string.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/string.c

CMakeFiles/408_Demo.dir/common/string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/common/string.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/string.c > CMakeFiles/408_Demo.dir/common/string.c.i

CMakeFiles/408_Demo.dir/common/string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/common/string.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/string.c -o CMakeFiles/408_Demo.dir/common/string.c.s

CMakeFiles/408_Demo.dir/common/sort.c.o: CMakeFiles/408_Demo.dir/flags.make
CMakeFiles/408_Demo.dir/common/sort.c.o: ../common/sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/408_Demo.dir/common/sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/408_Demo.dir/common/sort.c.o -c /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sort.c

CMakeFiles/408_Demo.dir/common/sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/408_Demo.dir/common/sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sort.c > CMakeFiles/408_Demo.dir/common/sort.c.i

CMakeFiles/408_Demo.dir/common/sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/408_Demo.dir/common/sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/el/Desktop/Git/DataStructure_Task/408_Demo/common/sort.c -o CMakeFiles/408_Demo.dir/common/sort.c.s

# Object files for target 408_Demo
408_Demo_OBJECTS = \
"CMakeFiles/408_Demo.dir/main.c.o" \
"CMakeFiles/408_Demo.dir/common/linkList.c.o" \
"CMakeFiles/408_Demo.dir/common/sqList.c.o" \
"CMakeFiles/408_Demo.dir/common/search.c.o" \
"CMakeFiles/408_Demo.dir/common/string.c.o" \
"CMakeFiles/408_Demo.dir/common/sort.c.o"

# External object files for target 408_Demo
408_Demo_EXTERNAL_OBJECTS =

408_Demo: CMakeFiles/408_Demo.dir/main.c.o
408_Demo: CMakeFiles/408_Demo.dir/common/linkList.c.o
408_Demo: CMakeFiles/408_Demo.dir/common/sqList.c.o
408_Demo: CMakeFiles/408_Demo.dir/common/search.c.o
408_Demo: CMakeFiles/408_Demo.dir/common/string.c.o
408_Demo: CMakeFiles/408_Demo.dir/common/sort.c.o
408_Demo: CMakeFiles/408_Demo.dir/build.make
408_Demo: CMakeFiles/408_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable 408_Demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/408_Demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/408_Demo.dir/build: 408_Demo
.PHONY : CMakeFiles/408_Demo.dir/build

CMakeFiles/408_Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/408_Demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/408_Demo.dir/clean

CMakeFiles/408_Demo.dir/depend:
	cd /Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/el/Desktop/Git/DataStructure_Task/408_Demo /Users/el/Desktop/Git/DataStructure_Task/408_Demo /Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug /Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug /Users/el/Desktop/Git/DataStructure_Task/408_Demo/cmake-build-debug/CMakeFiles/408_Demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/408_Demo.dir/depend

