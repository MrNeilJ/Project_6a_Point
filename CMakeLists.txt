cmake_minimum_required(VERSION 3.6)
project(point)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.hpp LineSegment.cpp LineSegment.hpp)
add_executable(point ${SOURCE_FILES})