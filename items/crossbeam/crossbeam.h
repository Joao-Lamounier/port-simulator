#ifndef PORTSIMULATOR_CROSSBEAM_H
#define PORTSIMULATOR_CROSSBEAM_H

#include "../../adt/stack/stack.h"
#include <stdbool.h>
#include "../../consts.h"


typedef struct Crossbeam{
    Stack stack;
    bool available;
    int time_units;
}Crossbeam;

typedef struct CrossbeamCollection{
    Crossbeam *crossbeam[CROSSBEAM_COUNT_MACRO];
}CrossbeamCollection;

/**
 * Cria uma nova travessa de contêineres
 * @return: Travessa de contêineres
 * */
Crossbeam *create_crossbeam();

/**
 * Cria uma nova coleção de travessas
 * @return: Coleção de travessas
 * */
CrossbeamCollection *create_crossbeam_collection();

/**
 * Verifica de a travessa está disponível para uso
 * @param _crossbeam: Travessa à ser verificada
 * @return: true se ela estiver disponível, false caso contrário.
 * */
bool crossbeam_available(Crossbeam *_crossbeam);

/**
 * Verifica de a travessa está cheia
 * @param _crossbeam: Travessa à ser verificada
 * @return: true se ela estiver cheia, false caso contrário.
 * */
bool full_crossbeam(Crossbeam *_crossbeam);

/**
 * Verifica de a travessa está vazia
 * @param _crossbeam: Travessa à ser verificada
 * @return: true se ela estiver vazia, false caso contrário.
 * */
bool empty_crossbeam(Crossbeam *_crossbeam);

#endif //PORTSIMULATOR_CROSSBEAM_H
