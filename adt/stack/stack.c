#include "stack.h"

Stack create_stack() {
    Stack *stack = (Stack *) allocate_memory(sizeof(Stack));
    stack->size = 0;
    stack->top = NULL;

    return *stack;
}

Node *create_node() {
    Node *node = (Node *) allocate_memory(sizeof(Node));
    node->container = NULL;
    node->next = NULL;

    return node;
}

void push(Stack *_stack) {
    Node *node = create_node();
    node->container = create_container();
    node->next = _stack->top;
    _stack->top = node;
    _stack->size++;
}

void push_multiple(Stack *_stack, int _n_container) {
    for (int i = 0; i < _n_container; ++i) {
        push(_stack);
    }
}

bool pop(Stack *_stack) {
    if (empty_stack(_stack))return false;

    Node *delete = _stack->top;
    _stack->top = _stack->top->next;
    _stack->size--;

    free_memory(delete);
    return true;
}

bool pop_multiple(Stack *_stack) {
    while (_stack->size > 0) {
        pop(_stack);
    }
    return true;
}

bool empty_stack(Stack *_stack) {
    return _stack->top == NULL;
}





