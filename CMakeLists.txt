cmake_minimum_required(VERSION 3.24)
project(PortSimulator C)

set(CMAKE_C_STANDARD 11)

add_executable(PortSimulator main.c items/ship/ship.c items/ship/ship.h items/container/container.c items/container/container.h utils/utils.c utils/utils.h adt/stack/stack.c adt/stack/stack.h adt/fifo/fifo.c adt/fifo/fifo.h services/docking_area.service/docking_area.service.c services/docking_area.service/docking_area.service.h views/docking_area.view.c views/docking_area.view.h items/crossbeam/crossbeam.c items/crossbeam/crossbeam.h consts.h services/crossbeam.service/crossbeam.service.c services/crossbeam.service/crossbeam.service.h)
