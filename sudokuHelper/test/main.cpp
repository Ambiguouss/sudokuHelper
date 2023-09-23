#include "board.h"
#include "field.h"
#include "group.h"
#include "step.h"
#include "interRemoval.h"
#include "intersection.h"
#include "ForcedMove.h"
#include "ForcedMove.cpp"
#include "intersection.cpp"
#include "interRemoval.cpp"


#include<iostream>
int main(){
    int n;
    std::cin>>n;
    Board b(n);
    std::cin>>b;
    ForcedMove s=ForcedMove();
    Intersection i=Intersection();
    InterRemoval r= InterRemoval();
    while(s.step(b)||i.step(b)||r.step(b));
    std::cout<<b<<'\n';
}