#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <wchar.h>
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

    CrossbeamCollection *collection = create_crossbeam_collection();

    home_menu();

    bool enter;
    bool check = true;
    enter = check_exit();
    while (enter) {
        transport_movements(docs);
        container_crane(docs, collection);

        docking_manager(docs);
        show_docking(docs);

        ship_sailed(docs);

        show_crossbeam(collection, docs, &check);
        crossbeam_sailed(collection, docs);
        show_average_time(docs);

        show_movements(docs);


        enter = check_exit();
    }

    return 0;
}
