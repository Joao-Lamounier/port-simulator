#ifndef PORTSIMULATOR_DOCKING_AREA_VIEW_H
#define PORTSIMULATOR_DOCKING_AREA_VIEW_H

#include "../adt/fifo/fifo.h"
#include "../items/crossbeam/crossbeam.h"
#include "../items/docks/docks.h"

/**
 * Mostra a situação das áreas de atracamento.
 * @param _docs: Área de atracamento.
 * */
void show_docking(Docs *_docs);

/**
 * Mostra a chegada de navios em cada área de atracamento.
 * @param _ship: Navio à ser mostrado.
 * */
void show_ship(Ship *_ship);

/**
 * Mostra a saída de navios em cada área de atracamento.
 * @param _ship: Navio à ser mostrado.
 * */
void show_departure_port(int _id);

/**
 * Mostra a situação de todas as travessas.
 * @param _collection: Coleção de travessas à ser mostrada.
 * */
void show_crossbeam(CrossbeamCollection *_collection);

#endif //PORTSIMULATOR_DOCKING_AREA_VIEW_H
