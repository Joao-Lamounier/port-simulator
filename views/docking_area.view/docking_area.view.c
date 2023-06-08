#include "docking_area.view.h"

void show_docking(Docs *_docs) {
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Element *element = _docs->pier[i].fifo.first;

        printf("Area %d\n", i + 1);
        while (element != NULL) {
            if (total_containers(element->ship) > 0)show_ship(element->ship);
            element = element->next;
        }
        printf("\nTravessa: ");
        if (received_crossbeam(_docs->pier)) printf("%d", _docs->pier[i].index_cross + 1);
        else printf("🚫");
        color(6);
        printf("\n--------------------------\n");
        color(7);
    }
}

void show_ship(Ship *_ship) {
    color(1);
    printf("  __|_____");
    color(7);
    printf("%02d", total_containers(_ship));
    color(1);
    printf("_\n  \\_");
    color(7);
    printf("%d", _ship->id);
    color(1);
    printf("_____/");
    color(7);
    printf("⏳%d\n", _ship->time_units);
    color(4);
    printf("~~~~~~~~~~~~~~~\n");
    color(7);
}

void show_departure_port(int _id) {
    printf("\nSaída do Porto\n");
    color(1);
    printf("  ________|__");
    printf("\n  \\_____");
    color(7);
    printf("%d", _id);
    color(1);
    printf("_/ \n");
    color(4);
    printf("~~~~~~~~~~~~~~~\n");
    color(7);
}

void show_crossbeam(CrossbeamCollection *collection) {

    printf("\nTravessas\n");

    for (int i = 0; i < CROSSBEAM_COUNT_MACRO; ++i) {
        color(2);
        printf(" T%d: ", i + 1);
        color(7);
        if (collection->crossbeam[i]->stack.size <= CROSSBEAM_COUNT_CONTAINERS &&
            collection->crossbeam[i]->time_units == 0) {
            printf("%d  |", collection->crossbeam[i]->stack.size);
        } else {
            printf("🚜 |");
        }
    }
}

void show_average_time(Docs *_docs) {
    printf("\nTempo Médio\n");
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        Pier pier = _docs->pier[i];
        float time;
        if (pier.fifo.size == 0) {
            time = 0;
        } else {
            time = arithmetic_average((float) (pier.all_containers), (pier.fifo.size));
        }
        color(2);
        printf("🕘A%d: ", i + 1);
        color(7);
        printf("%.1f |", time);
    }
}

void show_movements(Docs *_docs) {
    printf("\nMovimentações\n");
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        color(2);
        printf("🔁🚜%d°: ", i + 1);
        color(7);
        printf("%d | ", _docs->pier[i].move);
    }
}

