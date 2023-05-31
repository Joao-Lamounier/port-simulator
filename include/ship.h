#ifndef PORTSIMULATOR_SHIP_H
#define PORTSIMULATOR_SHIP_H

#include "stack.h"

typedef struct Ship{
    int id;
    int time_units;
    Stack stack[4];
}Ship;

Ship *create_ship();
Ship *ship_arrived();

#endif //PORTSIMULATOR_SHIP_H
