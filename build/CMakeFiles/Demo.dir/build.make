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
CMAKE_COMMAND = D:\pspro\cmake-3.19.2-win64-x64\cmake-3.19.2-win64-x64\bin\cmake.exe

# The command to remove a file.
RM = D:\pspro\cmake-3.19.2-win64-x64\cmake-3.19.2-win64-x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build

# Include any dependencies generated for this target.
include CMakeFiles/Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Demo.dir/flags.make

CMakeFiles/Demo.dir/Main.cpp.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/Main.cpp.obj: CMakeFiles/Demo.dir/includes_CXX.rsp
CMakeFiles/Demo.dir/Main.cpp.obj: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Demo.dir/Main.cpp.obj"
	D:\pspro\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Demo.dir\Main.cpp.obj -c D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\Main.cpp

CMakeFiles/Demo.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Demo.dir/Main.cpp.i"
	D:\pspro\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\Main.cpp > CMakeFiles\Demo.dir\Main.cpp.i

CMakeFiles/Demo.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Demo.dir/Main.cpp.s"
	D:\pspro\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\Main.cpp -o CMakeFiles\Demo.dir\Main.cpp.s

# Object files for target Demo
Demo_OBJECTS = \
"CMakeFiles/Demo.dir/Main.cpp.obj"

# External object files for target Demo
Demo_EXTERNAL_OBJECTS =

../bin/Demo.exe: CMakeFiles/Demo.dir/Main.cpp.obj
../bin/Demo.exe: CMakeFiles/Demo.dir/build.make
../bin/Demo.exe: ../bin/libGA.dll.a
../bin/Demo.exe: CMakeFiles/Demo.dir/linklibs.rsp
../bin/Demo.exe: CMakeFiles/Demo.dir/objects1.rsp
../bin/Demo.exe: CMakeFiles/Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\bin\Demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Demo.dir/build: ../bin/Demo.exe

.PHONY : CMakeFiles/Demo.dir/build

CMakeFiles/Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Demo.dir/clean

CMakeFiles/Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build D:\pspro\C_C++_pro\SubjectResearch\GeneticAlgorithm\build\CMakeFiles\Demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Demo.dir/depend

