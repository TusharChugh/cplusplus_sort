cmake_minimum_required(VERSION 3.8)
project(sort_test)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

set(SOURCE_FILES sort/unit_tests.cpp sort/merge_sort_test.cpp sort/quick_sort_test.cpp)

add_executable(unittest_sort ${SOURCE_FILES})
target_link_libraries(unittest_sort ${GTEST_LIBRARIES} sort pthread)