#include "docking_area.view.h"

void show_docking(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Element *element = _docs->pier[i].fifo.first;

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
    printf("  __|_____%02d_", total_containers(_ship));
    color(11);
    printf("\n  \\_%d_____/ \n", _ship->id);
    color(1);
    printf("~~~~~~~~~~~~~~~\n");
    color(7);
}

void show_departure_port(int _id) {
    printf("\nSaída do Porto\n");
    color(11);
    printf("  ________|__");
    printf("\n  \\_____%d_/ \n", _id);
    color(1);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    color(7);
}

void show_crossbeam(CrossbeamCollection *collection, Docs *_docs, bool *first) {

    printf("\nTravessas\n");
    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        if (i <= 3) printf(" Area %d-> T%d: ", i + 1, _docs->pier[i].index_cross + 1);
        else printf(" T%d: ", i + 1);

        if (collection->crossbeam[i]->stack.size <= 5 &&
            collection->crossbeam[i]->time_units == 0) {

            printf("%d  |", collection->crossbeam[i]->stack.size);
        } else {
            printf("🚜 |");
        }
    }
    *first = false;
}

void show_average_time(Docs *_docs) {
    printf("\nTempo Médio\n");
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Pier pier = _docs->pier[i];
        float time;
        if (pier.fifo.size == 0) {
            time = 0;
        } else {
            time = (float) (pier.all_containers) / (float) (pier.fifo.size);
        }
        printf("🕘A%d: %.1f |", i + 1, time);
    }
}

void show_movements(Docs *_docs) {
    printf("\nMovimentações\n");
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        printf("🔁🚜%d°: %d | ", i + 1, _docs->pier[i].move);
    }
}

