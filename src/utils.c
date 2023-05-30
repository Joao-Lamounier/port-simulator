#include "../include/utils.h"

void *allocate_memory(size_t _size) {
    void *ptr = malloc(_size);
    if (ptr == NULL) {
        fprintf(stderr, "Error allocating memory!");
    }
    return ptr;
}
//double* real = (double*) alocarMemoria(sizeof(double));
void free_memory(void* _ptr) {
    free(_ptr);
    _ptr=NULL;
}

int random_numbers(){
    srand(time(NULL));
    return rand()%4;
}

