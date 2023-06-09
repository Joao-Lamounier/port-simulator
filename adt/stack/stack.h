#ifndef PORTSIMULATOR_STACK_H
#define PORTSIMULATOR_STACK_H


#include "../../items/container/container.h"
#include "../../utils/utils.h"

typedef struct Node {
    Container *container;
    struct Node* next;
}Node;

typedef struct Stack {
    int size;
    struct Node* top;
}Stack;

/**
 * Cria uma nova pilha de contêineres
 * @return Pilha de contêineres
 * */
Stack create_stack();

/**
 * Cria um novo nó (Container *)
 * @return Novo nó
 * */
Node *create_node();

/**
 * Empilha 1 contêiner
 * @param _stack: Pilha à ser adicionado 1 contêiner
 * */
void push(Stack *_stack);

/**
 * Empilha 'n' contêineres
 * @param _stack: Pilha à ser adicionado  os contêineres
 * @param _n_container: Número de contêineres á serem empilhados
 * */
void push_multiple(Stack *_stack, int _n_container);

/**
 * Desempilha 1 contêiner
 * @param _stack: Pilha a ser desempilhada
 * */
bool pop(Stack *_stack);

/**
 * Verifica se a pilha está vazia.
 * @param _stack: pilha à ser verificada.
   @return: true se a pilha estiver vazia, false caso contrário.
 * */
bool empty_stack(Stack *_stack);

/**
 * Desempilha todos contêineres
 * @param _stack: Pilha à ser desempilhada os contêineres.
 * @return: true se o desempilhamento ocorreu, false caso contrário.
 * */
bool pop_multiple(Stack* _stack);

#endif //PORTSIMULATOR_STACK_H
