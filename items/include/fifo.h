#ifndef PORTSIMULATOR_FIFO_H
#define PORTSIMULATOR_FIFO_H

#include "ship.h"

typedef struct Element {
    Ship *ship;
    struct Element* next;
} Element;

typedef struct Fifo {
    Element * first;
    Element * last;
    int size;
} Fifo;

Fifo create_fifo();
Element *create_element();
void line_up(Fifo * _fifo, Ship *_ship);
Ship *un_queue(Fifo *_fifo);
bool fifo_empty(Fifo *_fifo);


#endif //PORTSIMULATOR_FIFO_H
