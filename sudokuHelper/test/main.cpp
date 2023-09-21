#include "board.h"
#include "field.h"
#include "group.h"
#include "step.h"
#include "step.cpp"
#include<iostream>
int main(){
    Board b(3);
    std::cin>>b;
    std::cout<<b;
    ForcedMove s=ForcedMove();
    while(s.step(b));
    std::cout<<b;
}