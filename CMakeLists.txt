cmake_minimum_required(VERSION 3.24)

project(sig_bug)

set(CMAKE_C_COMPILER "C:\\Program Files\\LLVM\\bin\\clang.exe")
set(CMAKE_CXX_COMPILER "C:\\Program Files\\LLVM\\bin\\clang++.exe")
set(CMAKE_CXX_STANDARD 20)

add_compile_options(-g -O0)

message(STATUS ${CMAKE_CXX_COMPILER_ID})
message(STATUS ${CMAKE_CXX_SIMULATE_ID})

add_executable(example
  main.cpp
)

include_directories(example PUBLIC "C:\\Boost\\include\\boost-1_81")