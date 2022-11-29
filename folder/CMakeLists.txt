cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(grgr)				# Название проекта

set(SOURCE_EXE side.cpp)			# Установка переменной со списком исходников

include_directories(main)			# Расположение заголовочных файлов

add_executable(side ${SOURCE_EXE})	# Создает исполняемый файл с именем main

add_subdirectory(main)				# Добавление подпроекта, указывается имя дирректории

target_link_libraries(side main)		# Линковка программы с библиотекой