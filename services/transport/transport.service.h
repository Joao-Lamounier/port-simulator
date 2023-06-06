#ifndef PORTSIMULATOR_TRANSPORT_SERVICE_H
#define PORTSIMULATOR_TRANSPORT_SERVICE_H

#include "../../items/docks/docks.h"
#include "../../items/crossbeam/crossbeam.h"

/**
 * Gerência qual transporte irá esvaziar a travessa
 * @param _docs: Área de atracamento.
 * */
void transport_movements(Docs *_docs, CrossbeamCollection *_collection);

#endif //PORTSIMULATOR_TRANSPORT_SERVICE_H
