#ifndef PORTSIMULATOR_PIER_H
#define PORTSIMULATOR_PIER_H

#include "../../adt/fifo/fifo.h"

typedef struct Pier {
    Fifo fifo;
    int move;
    int all_containers;
    int index_cross;
} Pier;

/**
 * Cria um cais
 * @return: Novo cais
 * */
Pier create_pier();

#endif //PORTSIMULATOR_PIER_H
