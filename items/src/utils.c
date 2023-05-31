#include "../include/utils.h"

void *allocate_memory(size_t _size) {
    void *ptr = malloc(_size);
    if (ptr == NULL) {
        fprintf(stderr, "Error allocating memory!");
    }
    return ptr;
}

void free_memory(void *_ptr) {
    free(_ptr);
    _ptr = NULL;
}

int random_numbers(int _limit) {
    return rand() % _limit;
}

int get_smaller(const int _vet[], int _size) {
    int smaller = _vet[0];
    int j = 0;
    for (int i = 0; i < _size; ++i) {
        if (smaller > _vet[i]) {
            smaller = _vet[i];
            j = i;
        }
    }
    return j;
}

