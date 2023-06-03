#ifndef PORTSIMULATOR_CROSSBEAM_H
#define PORTSIMULATOR_CROSSBEAM_H

#include "../../adt/stack/stack.h"
#include <stdbool.h>
#include "../../consts.h"


typedef struct Crossbeam{
    Stack stack;
    bool available;
    int time_units;
}Crossbeam;

typedef struct CrossbeamCollection{
    Crossbeam *crossbeam[CROSSBEAM_COUNT_MACRO];
}CrossbeamCollection;

Crossbeam *create_crossbeam();

CrossbeamCollection *create_crossbeam_collection();

bool crossbeam_available(Crossbeam *_crossbeam);

bool full_crossbeam(Crossbeam *_crossbeam);
bool empty_crossbeam(Crossbeam *_crossbeam);

#endif //PORTSIMULATOR_CROSSBEAM_H
