cmake_minimum_required(VERSION 3.17)
project(Library_Functions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(LibraryFunctions/Array)

add_executable(Library_Functions
        test.cpp)
