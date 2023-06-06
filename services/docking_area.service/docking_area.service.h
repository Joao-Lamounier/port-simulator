#ifndef PORTSIMULATOR_DOCKING_AREA_SERVICE_H
#define PORTSIMULATOR_DOCKING_AREA_SERVICE_H

#include "../../adt/fifo/fifo.h"
#include "../../items/crossbeam/crossbeam.h"
#include "../../views/docking_area.view/docking_area.view.h"
#include "../../items/docks/docks.h"
#include "../crossbeam.service/crossbeam.service.h"

/**
 * Gerencia a chegada de navios e a designação dos mesmos
 * à fila de menor tamanho.
 * @param _docs: Área de atracamento.
 * */
void docking_manager(Docs *_docs);

/**
 * Desempilha um contêiner de cada fila de navios
 * e empilha na devida travessa.
 * @param _docs: Área de atracamento.
 * */
void container_crane(Docs *_docs, CrossbeamCollection *_collection);

/**
 * Gerencia a saída de navios.
 * @param _docs: Área de atracamento.
 * */
void ship_sailed(Docs *_docs);

#endif //PORTSIMULATOR_DOCKING_AREA_SERVICE_H
