cmake_minimum_required(VERSION 3.22)
project(silas_webserver)
set(CMAKE_CXX_STANDARD 11)
include_directories(include)
file(GLOB SRC_LIST "src/*.cpp")
add_executable(silas_webserver ${SRC_LIST})

