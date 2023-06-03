#ifndef PORTSIMULATOR_DOCKING_AREA_SERVICE_H
#define PORTSIMULATOR_DOCKING_AREA_SERVICE_H

#include "../../adt/fifo/fifo.h"
#include "../../items/crossbeam/crossbeam.h"
#include "../../views/docking_area.view.h"

void docking_manager(Fifo _fifos[]);
void container_crane(Fifo *_fifo, Crossbeam *_crossbeam);
void ship_sailed(Fifo *_fifo);



#endif //PORTSIMULATOR_DOCKING_AREA_SERVICE_H
