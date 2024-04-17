cmake_minimum_required(VERSION 3.22)
project(guess)
add_compile_options(-Wall -Wpedantic -Wshadow)

add_executable(gues src/main.cpp)

add_executable(test guess src/main.cpp)
target_compile_definitions(test PUBLIC ENABLE_TEST=1)
