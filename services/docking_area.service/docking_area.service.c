#include "docking_area.service.h"

void docking_manager(Docs *_docs) {

    int ships_arrived = random_numbers(MAX_SHIPS_ARRIVED);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_fifos[] = {_docs->fifo[0].size, _docs->fifo[1].size, _docs->fifo[2].size, _docs->fifo[3].size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_fifos, ROW_COUNT_MACRO);
        line_up(&_docs->fifo[smaller], ship);
    }
}

void container_crane(Docs *_docs, CrossbeamCollection *_collection) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Crossbeam *crossbeam = crossbeam_designate(_collection);
        if (!fifo_empty(&_docs->fifo[i]) && crossbeam != NULL) {
            bool unstack = false;
            int count = 0;

            while (!unstack && count != SHIP_STACK) {
                unstack = pop(&(_docs->fifo[i].first->ship->stack[count]));
                count++;
            }
            push(&crossbeam->stack);
        }
    }
}

void ship_sailed(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        if (!fifo_empty(&_docs->fifo[i])) {
            bool container = empty_ship(_docs->fifo[i].first->ship);

            if (container) {
                show_departure_port(_docs->fifo[i].first->ship->id);
                un_queue(&_docs->fifo[i]);
            }
        }
    }
}