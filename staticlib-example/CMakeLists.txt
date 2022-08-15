# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

message("Configuring staticlib example")

# project name and language
project(staticlib LANGUAGES CXX)

find_package(Threads REQUIRED)

add_executable(hello-world-static main.cpp)

add_subdirectory(SomeLibrary)


target_link_libraries(hello-world-static SomeLibrary Threads::Threads)