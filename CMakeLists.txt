cmake_minimum_required(VERSION 3.23)
project(egorkForecast)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(bin)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)