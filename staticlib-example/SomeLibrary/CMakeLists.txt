# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(SomeLibrary LANGUAGES CXX)

add_library(SomeLibrary "")

target_sources(SomeLibrary
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/src/SomeClass.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include/SomeClass.h
  )

target_include_directories(SomeLibrary
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include
  )