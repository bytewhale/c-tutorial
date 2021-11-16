cmake_minimum_required(VERSION 3.20)
project(c_tutorial C)

set(CMAKE_C_STANDARD 11)

add_executable(first-c-program src/01-first-c-program/hello.c)

add_executable(data-type src/02-data-type/data-type.c)