#include "crossbeam.h"

Crossbeam *create_crossbeam() {
    Crossbeam *crossbeam = (Crossbeam *) allocate_memory(sizeof(Crossbeam));

    crossbeam->stack = create_stack();
    crossbeam->available = true;
    crossbeam->time_units = 0;

    return crossbeam;
}

CrossbeamCollection *create_crossbeam_collection() {
    CrossbeamCollection *collection = (CrossbeamCollection *) allocate_memory(sizeof(CrossbeamCollection));

    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        collection->crossbeam[i] = create_crossbeam();
    }

    return collection;
}

bool crossbeam_available(Crossbeam *_crossbeam) {
    if (full_crossbeam(_crossbeam)) {
        _crossbeam->available = false;
    }

    return _crossbeam->available;
}

bool full_crossbeam(Crossbeam *_crossbeam) {
    return (_crossbeam->stack.size == CROSSBEAM_COUNT_CONTAINERS);
}

bool empty_crossbeam(Crossbeam *_crossbeam) {
    return (_crossbeam->stack.size == 0);
}