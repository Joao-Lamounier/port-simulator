#include "docking_area.view.h"

void show_docking(Fifo *_fifo, int _n_fifo) {
    Element *element = _fifo->first;

    printf("\n=======================\n");
    printf("Area %d\n", _n_fifo + 1);
    while (element != NULL) {
        show_ship(element->ship->id, total_containers(element->ship));
        // printf("\n O navio %d chegou!", element->ship->id);
        element = element->next;
    }
}

void show_ship(int _id, int _n_containers) {
    printf("__|__  %d    \n", _id);
    printf(" \\_%d______/ \n", _n_containers);

}

