#include "ForcedMove.h"

bool ForcedMove::step(Board &B){
    for(int i=0;i<B.getN();i++){
        for(int j=0;j<B.getN();j++){
            Field* f =B.getField(i,j);
            if(f->isDecided())continue;
            int res=0;
            for(int i=0;i<(int)f->possibleValues.size();i++) {
                if(f->possibleValues[i]==1&&res){res=-1;break;}
                else if(f->possibleValues[i]==1)  res=i+1;
            }
            if(res>0){
                f->solve(res);
                std::cout<<"FORCED MOVE "<<f->isDecided()<<" ON ROW "<<f->row+1<<" COL "<<f->col+1<<'\n'; //not very fun way
                return 1;
            }
        }
    }
    return 0;
}
