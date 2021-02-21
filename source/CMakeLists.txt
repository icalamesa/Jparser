cmake_minimum_required(VERSION 3.0)
project("Json Parser" VERSION 0.1 LANGUAGES CXX)

include_directories("${CMAKE_SOURCE_DIR}/bin" "${CMAKE_SOURCE_DIR}/parser")

add_compile_options(-Wall -pedantic -Werror -g)

add_subdirectory(bin)
add_subdirectory(parser)

