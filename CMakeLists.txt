cmake_minimum_required(VERSION 3.16)
project(BluecatDocker)

set(CMAKE_CXX_STANDARD 14)

add_executable(BluecatDocker main.cpp docker.cpp docker.h)