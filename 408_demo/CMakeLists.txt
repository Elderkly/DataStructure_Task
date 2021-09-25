cmake_minimum_required(VERSION 3.20)
project(408_Demo C)

set(CMAKE_C_STANDARD 99)

add_executable(408_Demo main.c common/linkList.c common/linkList.h common/sqList.c common/sqList.h common/search.c common/search.h common/string.c common/string.h common/sort.c common/sort.h common/tree.c common/tree.h)
