#include <stdio.h>
#include "include/container.h"
#include "include/ship.h"
#include "include/utils.h"
#include "include/fifo.h"



int main() {
    srand(time(NULL));

    Fifo fifo = create_fifo();

    for (int i = 0; i < 4; ++i) {
        Ship *ship = ship_arrived();
        line_up(&fifo, ship);
    }


    for (int i = 0; i < 4; ++i) {
        printf("\nFila %d", i+1);
        print_fifo(&fifo);
    }
    return 0;
}
