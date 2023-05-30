#include "../include/container.h"

Container* create_container() {
    Container* new_container = (Container*) malloc(sizeof(Container));
    return new_container;
}

