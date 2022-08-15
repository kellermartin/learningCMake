# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(cmake LANGUAGES CXX)

add_subdirectory(hello-world)
add_subdirectory(staticlib-example)
