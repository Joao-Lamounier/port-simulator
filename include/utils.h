#ifndef PORTSIMULATOR_UTILS_H
#define PORTSIMULATOR_UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void *allocate_memory(size_t _size);

void free_memory(void *_ptr);

int random_numbers();

#endif //PORTSIMULATOR_UTILS_H
