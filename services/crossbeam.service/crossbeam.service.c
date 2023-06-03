#include "crossbeam.service.h"

Crossbeam *crossbeam_designate(CrossbeamCollection *_collection) {
    bool available = true;
    int count = 0;

    while (available && count != 5) {
        available = full_crossbeam(_collection->crossbeam[count]);
        count++;
    }


    if (!available) {
        return _collection->crossbeam[count-1];
    }

    return NULL;
}

Crossbeam *crossbeam_sailed(CrossbeamCollection *_collection){
    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        manager_time_crossbeam(_collection->crossbeam[i]);
        crossbeam_available(_collection->crossbeam[i]);
    }
}

void manager_time_crossbeam(Crossbeam *_crossbeam){
    if(_crossbeam->time_units==2) {
        _crossbeam->time_units=0;
        pop_multiple(&_crossbeam->stack);
        _crossbeam->available=true;
        return;
    }
    if(full_crossbeam(_crossbeam)){
        _crossbeam->time_units++;
    }
}