# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLion_projects\myGame1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLion_projects\myGame1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Game.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Game.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Game.dir\flags.make

CMakeFiles\Game.dir\main.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\main.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\main.cpp
<<

CMakeFiles\Game.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\main.cpp
<<

CMakeFiles\Game.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\main.cpp.s /c D:\CLion_projects\myGame1\main.cpp
<<

CMakeFiles\Game.dir\source\Camera.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\Camera.cpp.obj: ..\source\Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/source/Camera.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\Camera.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\Camera.cpp
<<

CMakeFiles\Game.dir\source\Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Camera.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\Camera.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\Camera.cpp
<<

CMakeFiles\Game.dir\source\Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Camera.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\Camera.cpp.s /c D:\CLion_projects\myGame1\source\Camera.cpp
<<

CMakeFiles\Game.dir\source\Observer.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\Observer.cpp.obj: ..\source\Observer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/source/Observer.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\Observer.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\Observer.cpp
<<

CMakeFiles\Game.dir\source\Observer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Observer.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\Observer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\Observer.cpp
<<

CMakeFiles\Game.dir\source\Observer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Observer.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\Observer.cpp.s /c D:\CLion_projects\myGame1\source\Observer.cpp
<<

CMakeFiles\Game.dir\source\functions.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\functions.cpp.obj: ..\source\functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/source/functions.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\functions.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\functions.cpp
<<

CMakeFiles\Game.dir\source\functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/functions.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\functions.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\functions.cpp
<<

CMakeFiles\Game.dir\source\functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/functions.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\functions.cpp.s /c D:\CLion_projects\myGame1\source\functions.cpp
<<

CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.obj: ..\source\GraphicalInterpreter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/source/GraphicalInterpreter.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\GraphicalInterpreter.cpp
<<

CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/GraphicalInterpreter.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\GraphicalInterpreter.cpp
<<

CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/GraphicalInterpreter.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.s /c D:\CLion_projects\myGame1\source\GraphicalInterpreter.cpp
<<

CMakeFiles\Game.dir\source\EventManager.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\EventManager.cpp.obj: ..\source\EventManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Game.dir/source/EventManager.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\EventManager.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\EventManager.cpp
<<

CMakeFiles\Game.dir\source\EventManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/EventManager.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\EventManager.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\EventManager.cpp
<<

CMakeFiles\Game.dir\source\EventManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/EventManager.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\EventManager.cpp.s /c D:\CLion_projects\myGame1\source\EventManager.cpp
<<

CMakeFiles\Game.dir\source\MovementManager.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\MovementManager.cpp.obj: ..\source\MovementManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Game.dir/source/MovementManager.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\MovementManager.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\MovementManager.cpp
<<

CMakeFiles\Game.dir\source\MovementManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/MovementManager.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\MovementManager.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\MovementManager.cpp
<<

CMakeFiles\Game.dir\source\MovementManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/MovementManager.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\MovementManager.cpp.s /c D:\CLion_projects\myGame1\source\MovementManager.cpp
<<

CMakeFiles\Game.dir\source\Entity.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\Entity.cpp.obj: ..\source\Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Game.dir/source/Entity.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\Entity.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\Entity.cpp
<<

CMakeFiles\Game.dir\source\Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Entity.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\Entity.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\Entity.cpp
<<

CMakeFiles\Game.dir\source\Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Entity.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\Entity.cpp.s /c D:\CLion_projects\myGame1\source\Entity.cpp
<<

CMakeFiles\Game.dir\source\Player.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\Player.cpp.obj: ..\source\Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Game.dir/source/Player.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\Player.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\Player.cpp
<<

CMakeFiles\Game.dir\source\Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Player.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\Player.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\Player.cpp
<<

CMakeFiles\Game.dir\source\Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Player.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\Player.cpp.s /c D:\CLion_projects\myGame1\source\Player.cpp
<<

CMakeFiles\Game.dir\source\Segment.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\Segment.cpp.obj: ..\source\Segment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Game.dir/source/Segment.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\Segment.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\Segment.cpp
<<

CMakeFiles\Game.dir\source\Segment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Segment.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\Segment.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\Segment.cpp
<<

CMakeFiles\Game.dir\source\Segment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Segment.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\Segment.cpp.s /c D:\CLion_projects\myGame1\source\Segment.cpp
<<

CMakeFiles\Game.dir\source\SegmentManager.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\source\SegmentManager.cpp.obj: ..\source\SegmentManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Game.dir/source/SegmentManager.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\source\SegmentManager.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c D:\CLion_projects\myGame1\source\SegmentManager.cpp
<<

CMakeFiles\Game.dir\source\SegmentManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/SegmentManager.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\source\SegmentManager.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion_projects\myGame1\source\SegmentManager.cpp
<<

CMakeFiles\Game.dir\source\SegmentManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/SegmentManager.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\source\SegmentManager.cpp.s /c D:\CLion_projects\myGame1\source\SegmentManager.cpp
<<

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles\Game.dir\main.cpp.obj" \
"CMakeFiles\Game.dir\source\Camera.cpp.obj" \
"CMakeFiles\Game.dir\source\Observer.cpp.obj" \
"CMakeFiles\Game.dir\source\functions.cpp.obj" \
"CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.obj" \
"CMakeFiles\Game.dir\source\EventManager.cpp.obj" \
"CMakeFiles\Game.dir\source\MovementManager.cpp.obj" \
"CMakeFiles\Game.dir\source\Entity.cpp.obj" \
"CMakeFiles\Game.dir\source\Player.cpp.obj" \
"CMakeFiles\Game.dir\source\Segment.cpp.obj" \
"CMakeFiles\Game.dir\source\SegmentManager.cpp.obj"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game.exe: CMakeFiles\Game.dir\main.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\Camera.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\Observer.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\functions.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\GraphicalInterpreter.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\EventManager.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\MovementManager.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\Entity.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\Player.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\Segment.cpp.obj
Game.exe: CMakeFiles\Game.dir\source\SegmentManager.cpp.obj
Game.exe: CMakeFiles\Game.dir\build.make
Game.exe: "D:\SFML cpp library\SFML-2.5.1\lib\sfml-graphics.lib"
Game.exe: "D:\SFML cpp library\SFML-2.5.1\lib\sfml-audio.lib"
Game.exe: "D:\SFML cpp library\SFML-2.5.1\lib\sfml-window.lib"
Game.exe: "D:\SFML cpp library\SFML-2.5.1\lib\sfml-system.lib"
Game.exe: CMakeFiles\Game.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Game.exe"
	"D:\CLion\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Game.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\Game.dir\objects1.rsp @<<
 /out:Game.exe /implib:Game.lib /pdb:D:\CLion_projects\myGame1\cmake-build-debug\Game.pdb /version:0.0  /machine:x64 /INCREMENTAL:NO /subsystem:console  "D:\SFML cpp library\SFML-2.5.1\lib\sfml-graphics.lib" "D:\SFML cpp library\SFML-2.5.1\lib\sfml-audio.lib" "D:\SFML cpp library\SFML-2.5.1\lib\sfml-window.lib" "D:\SFML cpp library\SFML-2.5.1\lib\sfml-system.lib" kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Game.dir\build: Game.exe

.PHONY : CMakeFiles\Game.dir\build

CMakeFiles\Game.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Game.dir\clean

CMakeFiles\Game.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\CLion_projects\myGame1 D:\CLion_projects\myGame1 D:\CLion_projects\myGame1\cmake-build-debug D:\CLion_projects\myGame1\cmake-build-debug D:\CLion_projects\myGame1\cmake-build-debug\CMakeFiles\Game.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Game.dir\depend
