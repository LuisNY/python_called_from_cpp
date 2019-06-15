include_directories(
    /usr/include/python3.6m
)

add_executable(python_called_from_c++ src/main.cpp)

target_link_libraries(python_called_from_c++
    python3.6m
)