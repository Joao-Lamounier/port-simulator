#include "crossbeam.service.h"

Crossbeam *crossbeam_designate(CrossbeamCollection *_collection) {
    bool available = true;
    int count = 0;

    while (available && count != ROW_COUNT_MACRO) {
        available = full_crossbeam(_collection->crossbeam[count]);
        count++;
    }

    if (!available) {
        return _collection->crossbeam[count - 1];
    }

    return NULL;
}

void crossbeam_sailed(CrossbeamCollection *_collection, Docs *_docs) {
    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        manager_time_crossbeam(_collection->crossbeam[i], _docs);
        crossbeam_available(_collection->crossbeam[i]);
    }
}

void manager_time_crossbeam(Crossbeam *_crossbeam, Docs *_docs) {
    if (_crossbeam->time_units == UNLOADING_TIME_CROSSBEAM) {
        transport_movements(_docs);
        _crossbeam->time_units = 0;
        pop_multiple(&_crossbeam->stack);
        _crossbeam->available = true;
        return;
    }
    if (full_crossbeam(_crossbeam)) {
        _crossbeam->time_units++;
    }
}