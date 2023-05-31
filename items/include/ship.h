#ifndef PORTSIMULATOR_SHIP_H
#define PORTSIMULATOR_SHIP_H

#include "stack.h"

typedef struct Ship{
    int id;
    int time_units;
    Stack stack[4];
}Ship;

/**
 * Cria navios com quantidade de conteineres indetermidada (0 à 4)
 * @return Navio
 * */
Ship *ship_arrived();

#endif //PORTSIMULATOR_SHIP_H
