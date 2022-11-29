cmake_minimum_required(VERSION 2.8) 

project(grgr)			

set(SOURCE_EXE side.cpp)		

include_directories(main)	

add_executable(side ${SOURCE_EXE})	

add_subdirectory(main)				

target_link_libraries(side main)		
