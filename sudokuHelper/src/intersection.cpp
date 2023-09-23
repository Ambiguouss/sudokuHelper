#include "intersection.h"

bool Intersection::step(Board &B){
    for(int i=0;i<B.getN();i++){
        Group* g = B.getColumn(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){f->setValue(x);return 1;} 
        }
    }
    for(int i=0;i<B.getN();i++){
        Group* g = B.getRow(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){f->setValue(x);return 1;} 
        }
    }
    for(int i=0;i<B.getN();i++){
        Group* g = B.getSquare(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){f->setValue(x);return 1;} 
        }
    }
    return 0;
}