#ifndef PORTSIMULATOR_UTILS_H
#define PORTSIMULATOR_UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>


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

/**
 * Seleciona o menor elemento do vetor
 * @param _vet: Vetor de inteiros.
 * @param _size: Tamanho do vetor.
 * @return: Ìndice do vetor com o menor elemento.
 * */
int get_smaller(const int _vet[], int _size);

/**
 * Checagem de finalização do programa
 * @return: true se o usuário quiser continuar, false caso contrário
 * */
bool check_exit();

/**
 * Gerencia as cores do terminal
 * @param _docs: Número da cor de acordo com a tabela ANSI.
 * @return: Cor desejada no terminal
 * */
WINBOOL color(int _color);

#endif //PORTSIMULATOR_UTILS_H
