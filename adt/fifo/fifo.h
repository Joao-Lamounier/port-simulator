#ifndef PORTSIMULATOR_FIFO_H
#define PORTSIMULATOR_FIFO_H

#include "../../items/ship/ship.h"

typedef struct Element {
    Ship *ship;
    struct Element *next;
} Element;

typedef struct Fifo {
    Element *first;
    Element *last;
    int size;
} Fifo;

/**
 * Cria uma fila iniciando seu tamanho como 0 e suas posições como NULL.
 * @return nova fila.
 * */
Fifo create_fifo();

/**
 * Cria um novo elemento para a fila, deixando seus elementos como NULL.
 * @return nova fila.
 * */
Element *create_element();

/**
 * Enfileira um navio na última posição da fila.
 * @param _fifo: fila à ser adicionado um navio.
 * @param _ship: navio à ser enfileirado
 * */
void line_up(Fifo *_fifo, Ship *_ship);

/**
 * Desnfileira um navio da fila.
 * @param _fifo: fila à ser removido um navio.
 * @return _ship: navio removido.
 * */
Ship *un_queue(Fifo *_fifo);

/**
 * Verifica se a fila está vazia.
 * @param _fifo: fila à ser verificada.
   @return: true se a fila estiver vazia, false caso contrário
 * */
bool fifo_empty(Fifo *_fifo);

#endif //PORTSIMULATOR_FIFO_H
