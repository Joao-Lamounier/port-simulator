#include "docking_area.service.h"

void docking_manager(Docs *_docs) {

    int ships_arrived = random_numbers(MAX_SHIPS_ARRIVED);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_piers[] = {_docs->pier[0].fifo.size, _docs->pier[1].fifo.size,
                            _docs->pier[2].fifo.size, _docs->pier[3].fifo.size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_piers, ROW_COUNT_MACRO);
        ship->time_units = _docs->pier[smaller].all_containers;
        line_up(&(_docs->pier[smaller].fifo), ship);
        _docs->pier[smaller].all_containers += total_containers(ship);
    }
}

void container_crane(Docs *_docs, CrossbeamCollection *_collection) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        if (_docs->pier[i].replacement == 5) {
            replacement_crossbeam(&_docs->pier[i], _collection);
        }
        if (!fifo_empty(&(_docs->pier[i].fifo)) && _docs->pier[i].index_cross != -1) {
            bool unstack = false;
            int count = 0;

            while (!unstack && count != SHIP_STACK) {
                unstack = pop(&(_docs->pier[i].fifo.first->ship->stack[count]));
                count++;
            }
            _docs->pier[i].all_containers -= 1;
            push(&_collection->crossbeam[_docs->pier[i].index_cross]->stack);
            _docs->pier[i].replacement++;
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
