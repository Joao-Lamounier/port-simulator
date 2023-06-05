#ifndef PORTSIMULATOR_DOCKS_H
#define PORTSIMULATOR_DOCKS_H

#include "../pier/pier.h"
#include "../../consts.h"

typedef struct Docs {
    Pier pier[ROW_COUNT_MACRO];
} Docs;

/**
 * Cria uma área de atracamento
 * @return: Nova área de atracamento
 * */
Docs *create_docs();

#endif //PORTSIMULATOR_DOCKS_H
