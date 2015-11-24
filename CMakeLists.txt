cmake_minimum_required(VERSION 2.6)
project(gittestbench)

add_executable(gittestbench main.cpp)

install(TARGETS gittestbench RUNTIME DESTINATION bin)
