cmake_minimum_required(VERSION 3.3)
project(LibSegmentation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(LibSegmentation ${SOURCE_FILES})