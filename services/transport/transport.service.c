#include "transport.service.h"

void transport_movements(Docs *_docs) {
    int size_movements[] = {_docs->pier[0].move, _docs->pier[1].move,
                            _docs->pier[2].move, _docs->pier[3].move};

    int smaller = get_smaller(size_movements, ROW_COUNT_MACRO);

    _docs->pier[smaller].move++;
}