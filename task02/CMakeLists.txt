cmake_minimum_required(VERSION 3.22)
project(guess)
add_compile_options(-Wall -Wpedantic -Wshadow)
list( APPEND guess_src_files
  src/guess.cc
  test/test.cc
  )
add_executable(guess src/main.cpp ${guess_src_files})
add_executable(test src/main.cpp ${guess_src_files})
target_compile_definitions(test PUBLIC ENABLE_TEST=1)


target_include_directories(test PUBLIC test/ src/)
target_include_directories(guess PUBLIC test/ src/)
