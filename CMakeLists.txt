cmake_minimum_required(VERSION 3.24)
project(PortSimulator C)

set(CMAKE_C_STANDARD 11)

add_executable(PortSimulator main.c src/ship.c include/ship.h src/container.c include/container.h src/utils.c include/utils.h src/stack.c include/stack.h src/fifo.c include/fifo.h)
