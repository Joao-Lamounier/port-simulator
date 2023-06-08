#include "transport.service.h"

void transport_movements(Docs *_docs, CrossbeamCollection *_collection) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        if (_docs->pier[i].index_cross != -1 &&
            _collection->crossbeam[_docs->pier[i].index_cross]->stack.size == 5 &&
            _collection->crossbeam[_docs->pier[i].index_cross]->time_units == 1) {
            _docs->pier[i].move++;
        }
    }
}