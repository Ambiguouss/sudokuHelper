#include "group.h"
#include <sstream>
void Group::addField(Field* x){
    fields.push_back(x);
};
void Group::notify(Field* x){
    int k=x->isDecided();
    std::set<int>s;
    for(auto a:fields){
        int y=a->isDecided();
        if(y){
            if(!s.count(y))s.insert(y);
            else {
                //std::stringstream er;
                //er<<"Bad :(( "<<a->row<<' '<<a->col<<" is many times"<<'\n';
                //throw er;
            }
        }
    }
    for(auto y:fields)if(y!=x)y->disallowValue(k);
}