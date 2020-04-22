cmake_minimum_required(VERSION 3.13)
project(VGS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(SFML 2.5 COMPONENTS graphics window system network audio)

add_executable(VGS
        main.cpp
        Engine.cpp
        Engine.h
        Draw.cpp
        Student.cpp
        Student.h
        Input.cpp
        Update.cpp
        )

target_link_libraries(VGS sfml-graphics sfml-audio sfml-network sfml-system sfml-window)
