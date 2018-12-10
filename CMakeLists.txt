cmake_minimum_required(VERSION 3.1)
# This is a comment !

set(CMAKE_CXX_STANDARD 14)
project(module)
set(SRCS 	fun.h
			fun.cpp
			MyClass.h
			MyClass.cpp
	)
add_executable(module module.cpp ${SRCS})
