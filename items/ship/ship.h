#ifndef PORTSIMULATOR_SHIP_H
#define PORTSIMULATOR_SHIP_H

#include "../../adt/stack/stack.h"
#include "../../consts.h"

typedef struct Ship{
    int id;
    int time_units;
    Stack stack[SHIP_STACK];
}Ship;

/**
 * Cria um navio com quantidade de conteineres indetermidada (0 à 4)
 * @return Novo navio
 * */
Ship *ship_arrived();

/**
 * Verifica se o navio está vazio
 * @param _ship: Navio à ser verificada
 * @return: true se ele estiver vazio, false caso contrário.
 * */
bool empty_ship(Ship *_ship);

/**
 * Somatório de todos os contêiners de um navio
 * @param _ship: Navio à ser calculado os contêineres
 * @return: Total de contêineres
 * */
int total_containers(Ship *_ship);

#endif //PORTSIMULATOR_SHIP_H
