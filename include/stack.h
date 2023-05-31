#ifndef PORTSIMULATOR_STACK_H
#define PORTSIMULATOR_STACK_H

#include "container.h"
#include "utils.h"

typedef struct Node {
    Container *container;
    struct Node* next;
}Node;

typedef struct Stack {
    int size;
    struct Node* top;
}Stack;

Stack create_stack();
Node *create_node();
void push(Stack *_stack);
void push_multiple(Stack *_stack, int _n_container);
void pop(Stack *_stack);

#endif //PORTSIMULATOR_STACK_H
