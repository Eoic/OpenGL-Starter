cmake_minimum_required(VERSION 3.28)
project(OpenGL)
set(CMAKE_CXX_STANDARD 20)

# GLEW
set(BUILD_UTILS OFF CACHE BOOL "" FORCE)
add_subdirectory(vendor/glew/build/cmake) 

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(vendor/glfw)

include_directories(vendor/glew/include)
include_directories(vendor/glfw/include)

add_executable(OpenGL main.cpp)
target_link_libraries(OpenGL glew glfw)
