#include "docking_area.h"

void docking_manager(Fifo _fifos[]){
    int ships_arrived = random_numbers(4);

    for (int i = 0; i < ships_arrived; ++i) {
        int size_fifos[]={_fifos[0].size, _fifos[1].size, _fifos[2].size, _fifos[3].size};
        Ship *ship = ship_arrived();
        int smaller = get_smaller(size_fifos, 4);
        line_up((&_fifos[smaller]), ship);
    }
}