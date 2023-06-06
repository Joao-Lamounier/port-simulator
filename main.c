#include <stdio.h>
#include <stdbool.h>
#include "items/container/container.h"
#include "items/ship/ship.h"
#include "utils/utils.h"
#include "adt/fifo/fifo.h"
#include "services/docking_area.service/docking_area.service.h"
#include "views/docking_area.view/docking_area.view.h"
#include "items/crossbeam/crossbeam.h"
#include "services/crossbeam.service/crossbeam.service.h"
#include "items/docks/docks.h"
#include "views/menu.view/menu.view.h"
#include "services/transport/transport.service.h"


int main() {
    srand(time(NULL));

    Docs *docs = create_docs();

    CrossbeamCollection *crossbeam_colletion = create_crossbeam_collection();

    home_menu();

    bool enter;
    enter = check_exit();
    while (enter) {
        //Verificação se houve movimentações dos veículos
        transport_movements(docs, crossbeam_colletion);

        //Desempilha do navio e empilha na travessa
        container_crane(docs, crossbeam_colletion);

        //Gera navios e designa para a devida fila
        docking_manager(docs);

        //Mostra as áreas de atracamento
        show_docking(docs);

        //Verifica se um navio pode partir (caso descarregado)
        ship_sailed(docs);

        //Mostra as travessas
        show_crossbeam(crossbeam_colletion);

        //Gerencia as travessas, quando cheias são levadas ao pátio
        crossbeam_sailed(docs, crossbeam_colletion);

        //Mostra tempo médio das filas
        show_average_time(docs);

        //Mostra a quantidade que cada transporte se movimentou
        show_movements(docs);

        enter = check_exit();
    }

    return 0;
}
