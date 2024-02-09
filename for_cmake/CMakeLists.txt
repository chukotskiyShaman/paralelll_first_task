cmake_minimum_required(VERSION 3.10)
project(sinusi)

option(USE_FLOAT "Use float" ON)

if(USE_FLOAT)
    add_definitions(-DUSE_FLOAT)
endif()

# add_definitions(-DUSE_FLOAT)
# add_compile_definitions(USE_FLOAT)

add_executable(sinusi main.cpp)