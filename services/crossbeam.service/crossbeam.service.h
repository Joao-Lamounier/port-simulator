#ifndef PORTSIMULATOR_CROSSBEAM_SERVICE_H
#define PORTSIMULATOR_CROSSBEAM_SERVICE_H

#include "../../items/crossbeam/crossbeam.h"
#include "../transport/transport.service.h"

/**
 * Designa uma travessa disponível
 * @param _collection: Coleção de travessas
 * @return: Uma travessa se existir uma disponível, -1 caso contrário.
 * */
int crossbeam_designate(CrossbeamCollection *_collection);

/**
 * Verifica se uma pode sair para ser descarregada
 * @param _collection: Coleção de travessas à ser verificada
 * */
void crossbeam_sailed(Docs *_docs, CrossbeamCollection *_collection);

/**
 * Gerencia quanto tempo as travessas ficaram fora da área de atracameto
 * @param _crossbeam: Travessa à ser gerenciada
 * */
void manager_time_crossbeam(Crossbeam *_crossbeam, Docs *_docs);

/**
 * Realiza a troca de travessas.
 * @param _pier: Cais à receber a travessa.
 * @param _collection: Coleção de travessas.
 * */
void replacement_crossbeam(Pier *_pier, CrossbeamCollection *_collection);

#endif //PORTSIMULATOR_CROSSBEAM_SERVICE_H
