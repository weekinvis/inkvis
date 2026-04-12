cmake_minimum_required(VERSION 3.10)

project(inkvis C)

set(CMAKE_C_STANDARD 17)

include_directories(include)

add_compile_options(-Wall -Wextra -Werror)

add_executable(inkvis
	src/main.c
	src/feval.c  
	src/fmap.c  
	src/fparser.c  
	src/ftokenizer.c  
	src/main.c
)
