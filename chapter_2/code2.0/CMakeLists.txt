cmake_minimum_required(VERSION 3.10)
project(program1 CXX)
set(CMAKE_CXX_STANDARD 11)

add_library(background STATIC background.cpp)
add_executable(main main.cpp)
target_link_libraries(main background)