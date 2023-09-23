#ifndef INTERSECTION_HEADER
#define INTERSECTION_HEADER

#include "board.h"
#include "step.h"
class Board;
class Intersection:public Step{
    public:
    bool step(Board& B);
    ~Intersection() {}
};

#endif