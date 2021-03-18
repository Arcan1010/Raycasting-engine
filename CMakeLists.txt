cmake_minimum_required(VERSION 3.4)
project(Game)

set(CMAKE_CXX_STANDARD 20)
enable_language(CXX)

include_directories(source include data)

add_executable(Game
        main.cpp
        include/typedefs.h
        source/Camera.cpp
        source/Observer.cpp
        source/functions.cpp
        source/GraphicalInterpreter.cpp
        source/EventManager.cpp
        source/MovementManager.cpp
        source/Entity.cpp include/Entity.h source/Player.cpp include/Player.h source/Segment.cpp include/Segment.h source/SegmentManager.cpp include/SegmentManager.h)

#-----------------------------------------------------------#
set(SFML_DIR "D:/SFML cpp library/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)
target_link_libraries(Game sfml-graphics sfml-audio)
#-----------------------------------------------------------#

set(CMAKE_BUILD_TYPE Release)

set (-Wall -Wpedantic -Wextra -Werror)