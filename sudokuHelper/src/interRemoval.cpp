#include "interRemoval.h"

bool InterRemoval::step(Board &B){
    for(int i=0;i<B.getN();i++){
        Group* g= B.getSquare(i);
        for(int x=1;x<=B.getN();x++){
            std::vector<Field*> v=g->whereCanBe(x);
            Group* w = commonGroupDiffThan(v,g);
            if(w==nullptr)continue;
            if(w->removeNotInGroup(x,g)){
                return true;
            }
        }
    }
    return false;
}