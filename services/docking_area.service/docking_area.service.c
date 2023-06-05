#include "docking_area.service.h"

void docking_manager(Docs *_docs) {

    int ships_arrived = random_numbers(MAX_SHIPS_ARRIVED);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_piers[] = {_docs->pier[0].fifo.size, _docs->pier[1].fifo.size,
                            _docs->pier[2].fifo.size, _docs->pier[3].fifo.size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_piers, ROW_COUNT_MACRO);
        line_up(&(_docs->pier[smaller].fifo), ship);
        _docs->pier[smaller].all_containers += total_containers(ship);
    }
}

void container_crane(Docs *_docs, CrossbeamCollection *_collection) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Crossbeam *crossbeam = crossbeam_designate(_collection);
        if (!fifo_empty(&(_docs->pier[i].fifo)) && crossbeam != NULL) {
            bool unstack = false;
            int count = 0;

            while (!unstack && count != SHIP_STACK) {
                unstack = pop(&(_docs->pier[i].fifo.first->ship->stack[count]));
                count++;
            }
            _docs->pier[i].all_containers -= 1;
            push(&crossbeam->stack);

        }
    }
}

void ship_sailed(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        if (!fifo_empty(&(_docs->pier[i].fifo))) {
            bool container = empty_ship(_docs->pier[i].fifo.first->ship);

            if (container) {
                show_departure_port(_docs->pier[i].fifo.first->ship->id);
                un_queue(&(_docs->pier[i].fifo));
            }
        }
    }
}