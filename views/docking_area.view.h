#ifndef PORTSIMULATOR_DOCKING_AREA_VIEW_H
#define PORTSIMULATOR_DOCKING_AREA_VIEW_H

#include "../adt/fifo/fifo.h"
#include "../items/crossbeam/crossbeam.h"

void show_docking(Fifo *_fifo, int _n_fifo);
void show_ship(Ship *_ship);
void show_departure_port(int _id);
void show_crossbeam(CrossbeamCollection *_collection);

#endif //PORTSIMULATOR_DOCKING_AREA_VIEW_H
