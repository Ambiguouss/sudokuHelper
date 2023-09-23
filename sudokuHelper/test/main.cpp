#include "board.h"
#include "field.h"
#include "group.h"
#include "step.h"
#include "step.cpp"
#include "interRemoval.h"
#include "intersection.h"
#include "intersection.cpp"
#include "interRemoval.cpp"


#include<iostream>
int main(){
    Board b(3);
    std::cin>>b;
    ForcedMove s=ForcedMove();
    Intersection i=Intersection();
    InterRemoval r= InterRemoval();
    while(s.step(b)||i.step(b)||r.step(b));
    std::cout<<b<<'\n';
}