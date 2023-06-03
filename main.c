#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include "items/container/container.h"
#include "items/ship/ship.h"
#include "utils/utils.h"
#include "adt/fifo/fifo.h"
#include "services/docking_area.service/docking_area.service.h"
#include "views/docking_area.view.h"
#include "items/crossbeam/crossbeam.h"
#include "services/crossbeam.service/crossbeam.service.h"
#include "items/docks/docks.h"


int main() {
    bool enter;
    srand(time(NULL));

    Docs *docs = create_docs();

    CrossbeamCollection *collection = create_crossbeam_collection();

    do {
        printf("\n========================================================================\n");

        crossbeam_sailed(collection);
        container_crane(docs, collection);

        docking_manager(docs);

        show_docking(docs);

        ship_sailed(docs);

        show_crossbeam(collection);

        enter = check_exit();
    } while (enter);


    return 0;
}
