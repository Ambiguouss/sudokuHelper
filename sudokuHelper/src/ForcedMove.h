#ifndef FORCEDMOVE_HEADER
#define FORCEDMOVE_HEADER

#include "board.h"
#include "step.h"

class Board;
class ForcedMove:public Step{
    public:
    bool step(Board& B);
    ~ForcedMove() {}
};
#endif