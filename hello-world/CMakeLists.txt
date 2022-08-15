# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
message("Configuring hello-world project")
# project name and language
project(hello-world LANGUAGES CXX)

add_executable(hello-world main.cpp)