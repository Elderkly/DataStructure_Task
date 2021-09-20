cmake_minimum_required(VERSION 3.20)
project(408_Demo C)

set(CMAKE_C_STANDARD 99)

add_executable(408_Demo main.c common/linkList.c common/linkList.h)
