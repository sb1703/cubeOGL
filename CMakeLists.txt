cmake_minimum_required(VERSION 3.0.0)
project(cube_opengl_project VERSION 0.1.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(cube_opengl_project 
    src/config.h
    src/config.cpp
    src/main.cpp
    src/glad.c
    src/cube.cpp
    src/cube.h
    src/material.cpp
)

target_include_directories(cube_opengl_project PRIVATE dependencies)

target_link_libraries(cube_opengl_project
    glfw
    OpenGL::GL
)