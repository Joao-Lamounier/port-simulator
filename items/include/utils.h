#ifndef PORTSIMULATOR_UTILS_H
#define PORTSIMULATOR_UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>


/**
 * Aloca memória
 * @param _size número de bytes á ser alocado para o ponteiro
 * */
void *allocate_memory(size_t _size);

/**
 * Libera memória
 * @param _ptr Ponteiro á ser liberado
 * */
void free_memory(void *_ptr);

/**
 * Gera números aleatórios
 * @param _limit representa o limite superior
 * @return número aleatório
 * */
int random_numbers(int _limit);

int get_smaller(const int _vet[], int _size);

bool check_exit();


#endif //PORTSIMULATOR_UTILS_H
