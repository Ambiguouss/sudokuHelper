#ifndef STEP_HEADER
#define STEP_HEADER

#include "board.h"


class Board;
class Step{
    public:
    bool step(Board& B);
};
class ForcedMove : public Step{
    public:
    bool step(Board& B);
};

#endif