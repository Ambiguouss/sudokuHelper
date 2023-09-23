#include "intersection.h"
//duplicated code >:(, need to fix + i dont like couts, need to find different way
bool Intersection::step(Board &B){
    for(int i=0;i<B.getN();i++){
        Group* g = B.getColumn(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){
                f->setValue(x);
                std::cout<<"INTERSECTION "<<f->isDecided()<<" ON ROW "<<f->row<<" COL "<<f->col<<'\n';
                return 1;
            } 
        }
    }
    for(int i=0;i<B.getN();i++){
        Group* g = B.getRow(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){
                f->setValue(x);
                std::cout<<"INTERSECTION "<<f->isDecided()<<" ON ROW "<<f->row<<" COL "<<f->col<<'\n';
                return 1;
            } 
        }
    }
    for(int i=0;i<B.getN();i++){
        Group* g = B.getSquare(i);
        for(int x=1;x<=B.getN();x++){
            Field* f = g->whereMustBe(x);
            if(f!=nullptr){
                f->setValue(x);
                std::cout<<"INTERSECTION "<<f->isDecided()<<" ON ROW "<<f->row<<" COL "<<f->col<<'\n';
                return 1;
            } 
        }
    }
    return 0;
}