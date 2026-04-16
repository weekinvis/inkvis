cmake_minimum_required(VERSION 3.10)

project(inkvis C)

set(CMAKE_C_STANDARD 17)

include_directories(include)

add_compile_options(-Wall -Wextra -Werror)

add_executable(func_ink
	src/main.c
)
