#include <stdio.h>
#include "include/container.h"
#include "include/ship.h"
#include "include/utils.h"



int main() {
    srand(time(NULL));
    Ship *ship = ship_arrived();

    printf("\nO navio %d chegou!", ship->id);
    for (int i = 0; i < 4; ++i) {
       printf("\nA pilha %d tem %d conteineres", i+1,  ship->stack[i].size);
    }
    return 0;
}
