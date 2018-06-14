cmake_minimum_required(VERSION 3.9)
project(cmake-tutorial)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_subdirectory(core)