#include "docking_area.service.h"

void docking_manager(Fifo _fifos[]) {

    int ships_arrived = random_numbers(MAX_SHIPS_ARRIVED);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_fifos[] = {_fifos[0].size, _fifos[1].size, _fifos[2].size, _fifos[3].size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_fifos, ROW_COUNT_MACRO);
        line_up((&_fifos[smaller]), ship);
    }
}

void container_crane(Fifo *_fifo, Crossbeam *_crossbeam) {
    if(fifo_empty(_fifo)||_crossbeam==NULL)return;
    bool unstack = false;
    int i = 0;

    while (!unstack && i != SHIP_STACK) {
        unstack = pop(&(_fifo[0].first->ship->stack[i]));
        i++;
    }
    push(&_crossbeam->stack);
}



void ship_sailed(Fifo *_fifo) {
    if(fifo_empty(_fifo))return;
    bool container = empty_ship(_fifo->first->ship);

    if (container) {
        show_departure_port(_fifo->first->ship->id);
        un_queue(_fifo);
    }
}