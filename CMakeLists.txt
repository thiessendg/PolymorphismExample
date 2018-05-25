cmake_minimum_required(VERSION 3.10)
project(PolymorphismExample)

set(CMAKE_CXX_STANDARD 11)

include_directories(PolymorphismExample)
include_directories(PolymorphismExample/Debug)
include_directories(PolymorphismExample/Release)
include_directories(PolymorphismExample/x64)
include_directories(PolymorphismExample/x64/Debug)
include_directories(PolymorphismExample/x64/Release)

add_executable(PolymorphismExample
        PolymorphismExample/Debug/PolymorphismExample.pch
        PolymorphismExample/Release/PolymorphismExample.pch
        PolymorphismExample/x64/Debug/PolymorphismExample.pch
        PolymorphismExample/x64/Release/PolymorphismExample.pch
        PolymorphismExample/Animal.cpp
        PolymorphismExample/Animal.h
        PolymorphismExample/Cat.cpp
        PolymorphismExample/Cat.h
        PolymorphismExample/Dog.cpp
        PolymorphismExample/Dog.h
        PolymorphismExample/PolymorphismExample.cpp
        PolymorphismExample/Rabbit.cpp
        PolymorphismExample/Rabbit.h
        PolymorphismExample/stdafx.cpp
        PolymorphismExample/stdafx.h
        PolymorphismExample/targetver.h)
