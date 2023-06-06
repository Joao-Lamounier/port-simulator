CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = port-simulator
SRC = $(wildcard *.c) adt/fifo/fifo.c \
adt/stack/stack.c \
items/container/container.c \
items/crossbeam/crossbeam.c \
items/docks/docks.c \
items/pier/pier.c \
items/ship/ship.c \
services/crossbeam.service/crossbeam.service.c \
services/docking_area.service/docking_area.service.c \
services/transport/transport.service.c \
utils/utils.c \
views/docking_area.view/docking_area.view.c \
views/menu.view/menu.view.c

OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET)
