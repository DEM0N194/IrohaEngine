# this script adds all subprojects to a single build to allow IDEs understand the full project
# structure.

cmake_minimum_required(VERSION 3.14...3.22)

project(IrohaEngine LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(cmake/tools.cmake)

CPMAddPackage(NAME Engine SOURCE_DIR ${CMAKE_SOURCE_DIR}/source/engine)

# needed to generate test target
enable_testing()

add_subdirectory(source/standalone ${CMAKE_BINARY_DIR}/standalone)
add_subdirectory(source/tests ${CMAKE_BINARY_DIR}/tests)
add_subdirectory(documentation ${CMAKE_BINARY_DIR}/documentation EXCLUDE_FROM_ALL)
