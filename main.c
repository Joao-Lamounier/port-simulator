#include <stdio.h>
#include "items/include/container.h"
#include "items/include/ship.h"
#include "items/include/utils.h"
#include "items/include/fifo.h"
#include "services/docking_area.h"



int main() {
    srand(time(NULL));

    Fifo fifo[4];
    for (int i = 0; i < 4; ++i) {
        fifo[i]=create_fifo();
    }
    docking_manager(fifo);

    printf("\noi");
    for (int i = 0; i < 4; ++i) {
        printf("\nFila %d", i+1);
        print_fifo(&fifo[i]);
    }

    return 0;
}
