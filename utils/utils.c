#include "utils.h"

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

bool check_exit() {
    char input;
    printf("\n-> ");
    input = getchar();

    if (input == '\n') return true;

    return false;
}

void color(int _color) {
    switch (_color) {
        case 0:
            printf(ANSI_COLOR_BLACK);
            break;
        case 1:
            printf(ANSI_COLOR_RED);
            break;
        case 2:
            printf(ANSI_COLOR_GREEN);
            break;
        case 3:
            printf(ANSI_COLOR_YELLOW);
            break;
        case 4:
            printf(ANSI_COLOR_BLUE);
            break;
        case 5:
            printf(ANSI_COLOR_MAGENTA);
            break;
        case 6:
            printf(ANSI_COLOR_CYAN);
            break;
        case 7:
            printf(ANSI_COLOR_WHITE);
            break;
        default:
            printf(ANSI_COLOR_RESET);
            break;
    }
}

float arithmetic_average(float _sum, int _n_elements) {
    return _sum / (float) _n_elements;
}
