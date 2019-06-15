cmake_minimum_required(VERSION 3.13)
project(python_called_from_c++)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(main)

install(PROGRAMS bin/python_called_from_c++ DESTINATION bin)