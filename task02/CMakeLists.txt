cmake_minimum_required(VERSION 3.22)

project(guess)

add_compile_options(-Wall -Wpedantic -Wshadow)

list( APPEND guess_src_files
  src/guess.cc
  )

add_executable(guess src/main.cpp ${guess_src_files})
target_include_directories(guess PUBLIC src/)

add_executable(test_guess test/test.cc ${guess_src_files})
target_include_directories(test_guess PUBLIC test/ src/)

enable_testing()
add_test(mytest test_guess)
