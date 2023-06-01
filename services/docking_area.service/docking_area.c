#include "docking_area.h"

void docking_manager(Fifo _fifos[]) {
    int ships_arrived = random_numbers(4);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_fifos[] = {_fifos[0].size, _fifos[1].size, _fifos[2].size, _fifos[3].size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_fifos, 4);
        line_up((&_fifos[smaller]), ship);
    }
}

void container_crane(Fifo *_fifo) {
    if(fifo_empty(_fifo))return;
    bool unstack = false;
    int i = 0;

    while (!unstack && i != 4) {
        unstack = pop(&(_fifo[0].first->ship->stack[i]));
        i++;
    }
}

void ship_sailed(Fifo *_fifo) {
    if(fifo_empty(_fifo))return;
    bool container = empty_ship(_fifo->first->ship);

    if (container) {
        un_queue(_fifo);
    }
}