cmake_minimum_required(VERSION 3.7)
project(Set)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Set.h Dog.cpp Dog.h)
add_executable(Set ${SOURCE_FILES})