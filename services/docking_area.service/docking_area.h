#ifndef PORTSIMULATOR_DOCKING_AREA_H
#define PORTSIMULATOR_DOCKING_AREA_H

#include "../../items/include/fifo.h"

void docking_manager(Fifo _fifos[]);
void container_crane(Fifo *_fifo);
void ship_sailed(Fifo *_fifo);

#endif //PORTSIMULATOR_DOCKING_AREA_H
