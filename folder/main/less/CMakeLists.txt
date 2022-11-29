cmake_minimum_required(VERSION 2.8) 

project(less)				

set(SOURCE_LIB less.cpp)		

add_library(less STATIC ${SOURCE_LIB})
 
