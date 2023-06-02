#include "../include/fifo.h"

Fifo create_fifo() {
    Fifo *fifo = (Fifo *) allocate_memory(sizeof(Fifo));
    fifo->size = 0;
    fifo->last = NULL;
    fifo->first = NULL;

    return *fifo;
}

Element *create_element() {
    Element *element = (Element *) allocate_memory(sizeof(Element));
    element->ship = NULL;
    element->next = NULL;

    return element;
}


void line_up(Fifo *_fifo, Ship *_ship) {
    if (_fifo->size >= 3) {
        printf("Warning");
        return;
    }


    Element *element = create_element();
    element->ship = _ship;

    if (_fifo->first == NULL) {
        _fifo->first = element;
        _fifo->last = element;
    } else {
        _fifo->last->next = element;
        _fifo->last = element;
    }

    _fifo->size++;
}

Ship *un_queue(Fifo *_fifo) {
    Element *element = _fifo->first;
    Ship *ship = element->ship;

    _fifo->first = _fifo->first->next;
    free_memory(ship);
    if (_fifo->first == NULL)_fifo->last = NULL;

    _fifo->size--;
    return ship;
}

bool fifo_empty(Fifo *_fifo) {
    return _fifo->first == NULL && _fifo->last == NULL;
}


