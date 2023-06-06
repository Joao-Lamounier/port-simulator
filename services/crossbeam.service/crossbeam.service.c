#include "crossbeam.service.h"

int crossbeam_designate(CrossbeamCollection *_collection) {
    bool available = false;
    int count = 0;

    while (!available && count != 5) {
        available = empty_crossbeam(_collection->crossbeam[count]);
        count++;
    }

    if (available && _collection->crossbeam[count - 1]->available) {
        _collection->crossbeam[count - 1]->available = false;
        return count - 1;
    }

    return -1;
}

void crossbeam_sailed(Docs *_docs, CrossbeamCollection *_collection) {
    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        manager_time_crossbeam(_collection->crossbeam[i], _docs);
    }
}

void manager_time_crossbeam(Crossbeam *_crossbeam, Docs *_docs) {
    if (_crossbeam->time_units == UNLOADING_TIME_CROSSBEAM) {
        _crossbeam->time_units = 0;
        pop_multiple(&_crossbeam->stack);
        _crossbeam->available = true;
        return;
    }
    if (full_crossbeam(_crossbeam)) {
        _crossbeam->available = false;
        _crossbeam->time_units++;
    }
}

void replacement_crossbeam(Pier *_pier, CrossbeamCollection *_collection) {
    _pier->index_cross = crossbeam_designate(_collection);
    if (_pier->index_cross != -1)_pier->replacement = 0;
}