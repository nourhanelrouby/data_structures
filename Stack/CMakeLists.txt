cmake_minimum_required(VERSION 4.2)
project(Queue)

set(CMAKE_CXX_STANDARD 20)

add_executable(Queue main.cpp
        Stack.cpp
        Stack.h)
