#include "container.h"

Container* create_container() {
    Container* new_container = (Container*) alloca(sizeof(Container));
    return new_container;
}

