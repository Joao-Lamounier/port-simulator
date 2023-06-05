#include "transport.service.h"

void transport_movements(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        if(_docs->pier[i].replacement==5){
            _docs->pier[i].move++;
        }
    }
}