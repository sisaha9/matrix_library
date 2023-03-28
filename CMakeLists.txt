cmake_minimum_required(VERSION 3.16)

project(matrix_library
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)

include(cmake/UpdateSubmodules.cmake)
include(CTest)

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

add_library(matrix_library INTERFACE)
target_compile_options(matrix_library INTERFACE
    -Wall
    -Wpedantic
    -Wextra
    -Wshadow
    -Wcast-align
    -Wunused
    -Wconversion
    -Wsign-conversion
    -Wdouble-promotion
    -Waddress
    -Wnull-dereference
    -Wnon-virtual-dtor
    -Wduplicated-branches
    -Wduplicated-cond
    -Wrestrict
    -Woverloaded-virtual
    -Wold-style-cast
    -Werror
)
target_compile_features(matrix_library INTERFACE cxx_std_11)
target_include_directories(matrix_library INTERFACE ${PROJECT_SOURCE_DIR})

add_subdirectory(external)
add_subdirectory(${PROJECT_NAME})
add_subdirectory(examples)
add_subdirectory(tests)