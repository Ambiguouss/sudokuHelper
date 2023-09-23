#ifndef STEP_HEADER
#define STEP_HEADER

#include "board.h"


class Board;
class Step{
    public:
    virtual bool step(Board& B)=0;
    virtual ~Step() {}
};
#endif