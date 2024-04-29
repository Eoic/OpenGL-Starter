cmake_minimum_required(VERSION 3.28)
project(SDL2)

set(CMAKE_CXX_STANDARD 20)

# Find and include SDL2
find_package(SDL2 REQUIRED)

include_directories(
    ${SDL2_INCLUDE_DIRS}
    vendor/glad/include
)

# Add the executable target.
add_executable(SDL2 main.cpp vendor/glad/src/glad.c)

# Link libraries to the executable.
target_link_libraries(SDL2 ${SDL2_LIBRARIES})