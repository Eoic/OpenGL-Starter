cmake_minimum_required(VERSION 3.12)
project(OpenGL)

# Set C++ standard directly
set(CMAKE_CXX_STANDARD 17)

# Find and include SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Find and include GLM
set(GLM_DIR "vendor/glm/cmake/glm")
find_package(GLM REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})

if(NOT GLM_FOUND)
    message(FATAL_ERROR "GLM not found")
endif()

# Include directories for third-party libraries.
include_directories(
    ${SDL2_INCLUDE_DIRS}
    vendor/glad/include
)

# Copy shaders directory to build directory.
file(COPY shaders DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Add the executable target.
add_executable(OpenGL main.cpp vendor/glad/src/glad.c)

# Link libraries to the executable.
target_link_libraries(OpenGL
        ${SDL2_LIBRARIES}
        ${GLM_LIBRARIES}
)