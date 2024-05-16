cmake_minimum_required(VERSION 3.28)
project(OpenGL)

set(CMAKE_CXX_STANDARD 20)
include_directories(vendor/glad/include)
add_executable(OpenGL main.cpp vendor/glad/src/glad.c)