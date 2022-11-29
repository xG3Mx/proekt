cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(less)				# Название проекта

set(SOURCE_LIB less.cpp)		# Установка переменной со списком исходников

add_library(less STATIC ${SOURCE_LIB})# Создание статической библиотеки
 
