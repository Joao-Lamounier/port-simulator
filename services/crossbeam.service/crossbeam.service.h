#ifndef PORTSIMULATOR_CROSSBEAM_SERVICE_H
#define PORTSIMULATOR_CROSSBEAM_SERVICE_H

#include "../../items/crossbeam/crossbeam.h"
Crossbeam *crossbeam_designate(CrossbeamCollection *_collection);
Crossbeam *crossbeam_sailed(CrossbeamCollection *_collection);
void manager_time_crossbeam(Crossbeam *_crossbeam);

#endif //PORTSIMULATOR_CROSSBEAM_SERVICE_H
