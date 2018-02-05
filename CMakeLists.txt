cmake_minimum_required(VERSION 3.8)
project(sort)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)
add_library(sort INTERFACE)
target_link_libraries(sort INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(test)