cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(CMAKE_GENERATOR_TOOLSET "Intel C++ Compiler 2021" CACHE STRING "Platform Toolset" FORCE)
SET(CMAKE_CXX_FLAGS_RELEASE "-O3 -w -QxCORE-AVX2 -Qfma")
SET(CMAKE_CXX_FLAGS_DEBUG "-O3 -w -QxCORE-AVX2 -Qfma")

project(Project)

include(cmake/function.cmake)

add_subdirectory(rand_lib)
add_subdirectory(module)
