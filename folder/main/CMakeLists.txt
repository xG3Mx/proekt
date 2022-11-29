cmake_minimum_required(VERSION 2.8)

project(main)				

set(SOURCE_LIB main.cpp)		

add_library(main STATIC ${SOURCE_LIB}) 

include_directories(less)

add_subdirectory(less)

target_link_libraries(main less)		
