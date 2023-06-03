#ifndef PORTSIMULATOR_CROSSBEAM_SERVICE_H
#define PORTSIMULATOR_CROSSBEAM_SERVICE_H

#include "../../items/crossbeam/crossbeam.h"

/**
 * Designa uma travessa disponível
 * @param _collection: Coleção de travessas
 * @return: Uma travessa se existir uma disponível, NULL caso contrário.
 * */
Crossbeam *crossbeam_designate(CrossbeamCollection *_collection);

/**
 * Verifica se uma pode sair para ser descarregada
 * @param _collection: Coleção de travessas à ser verificada
 * */
void crossbeam_sailed(CrossbeamCollection *_collection);

/**
 * Gerencia quanto tempo as travessas ficaram fora da área de atracameto
 * @param _crossbeam: Travessa à ser gerenciada
 * */
void manager_time_crossbeam(Crossbeam *_crossbeam);

#endif //PORTSIMULATOR_CROSSBEAM_SERVICE_H
