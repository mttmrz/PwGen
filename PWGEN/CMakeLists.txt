cmake_minimum_required(VERSION 3.16)
project(PWGEN
  LANGUAGES CXX
  VERSION 1.0
)
set(CMAKE_CXX_STANDARD 11)
add_executable(pwgen pwgen.cpp)
