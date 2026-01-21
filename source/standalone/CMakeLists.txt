cmake_minimum_required(VERSION 3.14...3.22)

project(Standalone LANGUAGES CXX)

# --- Import tools ----

include(${CMAKE_CURRENT_SOURCE_DIR}/../../cmake/tools.cmake)

# ---- Dependencies ----

include(${CMAKE_CURRENT_SOURCE_DIR}/../../cmake/CPM.cmake)

CPMAddPackage(NAME Engine SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../engine)

# CPMAddPackage( GITHUB_REPOSITORY jarro2783/cxxopts VERSION 3.0.0 OPTIONS "CXXOPTS_BUILD_EXAMPLES
# NO" "CXXOPTS_BUILD_TESTS NO" "CXXOPTS_ENABLE_INSTALL YES" )

# ---- Create standalone executable ----

file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${PROJECT_NAME} ${sources})

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23 OUTPUT_NAME "standalone")

target_link_libraries(${PROJECT_NAME} Engine::Engine)
