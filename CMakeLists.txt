cmake_minimum_required(VERSION 3.22)

project(xfoil-c)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(xfoil-c)

target_sources(xfoil-c
PRIVATE
    source/xfoil_lib.cc
)

target_include_directories(xfoil-c
PUBLIC
    include
)

add_subdirectory(test)