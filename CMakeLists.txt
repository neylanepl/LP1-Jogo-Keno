cmake_minimum_required(VERSION 3.18)
project( JogoKeno VERSION 0.1 LANGUAGES CXX )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -pedantic -fsanitize=address")

include_directories(include)

set(CMAKE_BINARY_DIR ../build)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable( JogoKeno  
		src/funcoes.cpp
		src/tabela.cpp
		src/classeKenoBet.cpp
		include/funcoes.h
		include/tabela.h
		include/classeKenoBet.h
		src/main.cpp)

