cmake_minimum_required(VERSION 3.23)
project(CP3 C)

set(CMAKE_C_STANDARD 99)

add_executable(CP3 main.c matrix.c array.c load.c load.h fun.h)
