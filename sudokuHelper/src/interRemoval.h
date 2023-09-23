#ifndef INTERREMOVAL_HEADER
#define INTERREMOVAL_HEADER

#include "board.h"
#include "step.h"
class Board;
class InterRemoval:public Step{
    public:
    bool step(Board& B);
    ~InterRemoval() {}
};

#endif