cmake_minimum_required(VERSION 3.13)
project(VGS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(SFML 2.5 COMPONENTS graphics window system network audio)

add_executable(VGS
        main.cpp
        Engine/Engine.cpp
        Engine/Engine.h
        Engine/Draw.cpp
        Student.cpp
        Student.h
        Engine/Input.cpp
        Engine/Update.cpp
        Entities/Prep.cpp Entities/Prep.h Entities/Entity.cpp Entities/Entity.h)

target_link_libraries(VGS sfml-graphics sfml-audio sfml-network sfml-system sfml-window)
