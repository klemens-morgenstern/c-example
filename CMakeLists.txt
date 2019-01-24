cmake_minimum_required(VERSION 3.8)
project(c_example C)

set(CMAKE_C_STANDARD 11)

add_library(unity STATIC libs/unity/src/unity.c)
target_include_directories(unity PUBLIC libs/unity/src)

add_subdirectory(libs/cmocka)
add_subdirectory(libs/criterion)
include_directories(libs/criterion/include)
add_subdirectory(test)