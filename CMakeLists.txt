cmake_minimum_required(VERSION 3.7)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp dynamic_planning.h array_algori.h stack_algori.h recursvie.h bit_opt.h other.h)
add_executable(algorithm ${SOURCE_FILES})