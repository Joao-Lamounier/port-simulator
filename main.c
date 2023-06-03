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


int main() {
    bool enter;
    srand(time(NULL));

    Fifo fifo[4];

    for (int i = 0; i < 4; ++i) {
        fifo[i] = create_fifo();
    }

    CrossbeamCollection *collection = create_crossbeam_collection();


    do {
        printf("\n========================================================================\n");

        crossbeam_sailed(collection);
        for (int i = 0; i < 4; ++i) {
            container_crane(&fifo[i], crossbeam_designate(collection));
        }

        docking_manager(fifo);
        for (int i = 0; i < 4; ++i) {
            show_docking(&fifo[i], i);
        }
        for (int i = 0; i < 4; ++i) {
            ship_sailed(&fifo[i]);
        }

        show_crossbeam(collection);



        enter = check_exit();
    } while (enter);


    return 0;
}
