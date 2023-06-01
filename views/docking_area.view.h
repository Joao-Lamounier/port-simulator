#ifndef PORTSIMULATOR_DOCKING_AREA_VIEW_H
#define PORTSIMULATOR_DOCKING_AREA_VIEW_H

#include "../items/include/fifo.h"

void show_docking(Fifo *_fifo, int _n_fifo);
void show_ship(int _id, int _n_containers);

#endif //PORTSIMULATOR_DOCKING_AREA_VIEW_H
