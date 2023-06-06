#include "container.h"

Container *create_container() {
    Container *new_container = (Container *) allocate_memory(sizeof(Container));
    return new_container;
}

