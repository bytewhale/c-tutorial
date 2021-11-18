cmake_minimum_required(VERSION 3.20)
project(c_tutorial C)

set(CMAKE_C_STANDARD 11)

add_executable(first-c-program src/01-first-c-program/hello.c)

add_executable(data-type src/02-data-type/data-type.c)
add_executable(printf src/02-data-type/printf.c)
add_executable(03-variable src/03-variable/03-variable.c)
add_executable(operator src/04-operator/operator.c)