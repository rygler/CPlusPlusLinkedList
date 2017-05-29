cmake_minimum_required(VERSION 3.7)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedList.cpp LinkedList.h Node.cpp Node.h)
add_executable(LinkedList ${SOURCE_FILES})