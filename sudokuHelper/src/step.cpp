#include "step.h"

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
            if(res>0){f->solve(res);return 1;}
        }
    }
    return 0;
}