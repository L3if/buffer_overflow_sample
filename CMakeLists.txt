cmake_minimum_required(VERSION 3.10)

project(overflow_sample CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(exec main.cpp)
add_library(lib STATIC lib.cpp lib.h)

target_link_libraries(exec PUBLIC lib)