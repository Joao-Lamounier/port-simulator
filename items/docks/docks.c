#include "docks.h"

Docs *create_docs() {
    Docs *docs = (Docs *) allocate_memory(sizeof(Docs));
    for (int i = 0; i < ROW_COUNT_MACRO; ++i) {
        docs->pier[i] = create_pier();
        docs->pier[i].index_cross=i;
    }
    return docs;
}