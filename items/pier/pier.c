#include "pier.h"

Pier create_pier() {
    Pier pier;
    pier.fifo = create_fifo();
    pier.all_containers = 0;
    pier.move = 0;
    pier.index_cross = -1;
    pier.replacement = 0;
    return pier;
}

bool pier_replacement(Pier *_pier){
    return _pier->replacement==5;
}

bool received_crossbeam(Pier *_pier){
    return _pier->index_cross!=-1;
}