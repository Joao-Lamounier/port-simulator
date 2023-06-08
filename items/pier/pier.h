#ifndef PORTSIMULATOR_PIER_H
#define PORTSIMULATOR_PIER_H

#include "../../adt/fifo/fifo.h"

typedef struct Pier {
    Fifo fifo;
    int move;
    int all_containers;
    int index_cross;
    int replacement;
} Pier;

/**
 * Cria um cais
 * @return: Novo cais
 * */
Pier create_pier();

/**
 * Verifica se está na hora do cais trocar de travessa.
 * @return: True caso sim, false caso contrário.
 * */
bool pier_replacement(Pier *_pier);

/**
 * Verifica se o cais recebeu uma travessa.
 * @return: True caso sim, false caso contrário.
 * */
bool received_crossbeam(Pier *_pier);
#endif //PORTSIMULATOR_PIER_H
