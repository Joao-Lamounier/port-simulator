#include "docking_area.view.h"

void show_docking(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Element *element = _docs->fifo[i].first;

        printf("\n--------------------------\n");
        printf("Area %d\n", i + 1);
        while (element != NULL) {
            if (total_containers(element->ship) > 0)show_ship(element->ship);
            element = element->next;
        }
    }
}

void show_ship(Ship *_ship) {
    color(11);
    printf("__|__  %d", _ship->id);
    color(14);
    printf("  ⌛:%d ", _ship->time_units);
    color(11);
    printf("\n\\_%d______/ \n", total_containers(_ship));
    color(1);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    color(7);
}

void show_departure_port(int _id) {
    printf("\nSaída do Porto\n");
    color(11);
    printf("%d  __|__", _id);
    printf("\n\\_________/ \n");
    color(1);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    color(7);
    color(7);
}

void show_crossbeam(CrossbeamCollection *collection) {
    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        printf("T%d:", i + 1);
        if (collection->crossbeam[i]->available) {
            printf(" %d  ", collection->crossbeam[i]->stack.size);
        } else {
            printf(" - ");
        }
    }
}

