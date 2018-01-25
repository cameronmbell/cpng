cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

set (CMAKE_CXX_STANDARD 11)

project("cpng")

add_executable(cpng 
	main.cpp
	png.cpp)
