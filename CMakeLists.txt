cmake_minimum_required(VERSION 3.24)
project(PortSimulator C)

set(CMAKE_C_STANDARD 11)

add_executable(PortSimulator main.c items/src/ship.c items/include/ship.h items/src/container.c items/include/container.h items/src/utils.c items/include/utils.h items/src/stack.c items/include/stack.h items/src/fifo.c items/include/fifo.h services/docking_area.service/docking_area.c services/docking_area.service/docking_area.h views/docking_area.view.c views/docking_area.view.h)
