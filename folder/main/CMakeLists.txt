cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(main)				# Название проекта

set(SOURCE_LIB main.cpp)		# Установка переменной со списком исходников

add_library(main STATIC ${SOURCE_LIB}) 

include_directories(less)

add_subdirectory(less)

target_link_libraries(main less)		# Линковка программы с библиотекой
