#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include "items/include/container.h"
#include "items/include/ship.h"
#include "items/include/utils.h"
#include "items/include/fifo.h"
#include "services/docking_area.service/docking_area.h"
#include "views/docking_area.view.h"


int main() {
    bool enter;

    srand(time(NULL));

    Fifo fifo[4];
    for (int i = 0; i < 4; ++i) {
        fifo[i] = create_fifo();
    }
    do {
        docking_manager(fifo);
        for (int i = 0; i < 4; ++i) {
            show_docking(&fifo[i], i);

        }
        for (int i = 0; i < 4; ++i) {
           container_crane(&fifo[i]);
        }
        for (int i = 0; i < 4; ++i) {
              ship_sailed(&fifo[i]);
        }

        enter = check_exit();
    } while (enter);


    return 0;
}
