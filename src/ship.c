#include "../include/ship.h"
Ship *create_ship() {
    Ship *ship = (Ship *) allocate_memory(sizeof(Ship));
    ship->id= random_numbers(1000);
    ship->time_units = random_numbers(16);
    for (int i = 0; i < 4; ++i) {
        ship->stack[i]=create_stack();
        push_multiple(&ship->stack[i], random_numbers(5));
    }
    return ship;
}

Ship *ship_arrived(){
    Ship *ship=create_ship();
    return ship;
}