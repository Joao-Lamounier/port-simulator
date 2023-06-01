#include "../include/ship.h"

Ship *ship_arrived() {
    Ship *ship = (Ship *) allocate_memory(sizeof(Ship));

    ship->id = random_numbers(900) + 100;
    ship->time_units = random_numbers(16);

    for (int i = 0; i < 4; ++i) {
        ship->stack[i] = create_stack();
        push_multiple(&ship->stack[i], random_numbers(5));
    }

    return ship;
}

bool empty_ship(Ship *_ship) {

    if (empty_stack(&_ship->stack[0]) &&
        empty_stack(&_ship->stack[1]) &&
        empty_stack(&_ship->stack[2]) &&
        empty_stack(&_ship->stack[3])) {
        return true;
    }
    return false;
}

int total_containers(Ship *_ship) {
    int total = 0;
    for (int i = 0; i < 4; ++i) {
        total += _ship->stack[i].size;
    }
    return total;
}

