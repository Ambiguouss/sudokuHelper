#include "group.h"
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
        }
    }
    for(auto y:fields)if(y!=x)y->disallowValue(k);
}
Field* Group::whereMustBe(int x){
    int count=0;
    Field* res=nullptr;
    for(auto f:fields){
        if(f->isDecided())continue;
        if(f->isPossible(x)){count++; res = f;}
    }
    
    if(count==1)return res;
    return nullptr;
}
const std::vector<Field*>& Group::getFields(){
    return fields;
}
std::vector<Field*> Group::whereCanBe(int x){
    std::vector<Field*>res;
    for(auto f:fields){
        if(f->isDecided())continue;
        if(f->isPossible(x)){res.push_back(f);}
    }
    return res;
}
bool Group::removeNotInGroup(int y,Group* g){
    bool res=0;
    if(g==nullptr) return 0;
    for(auto x:fields){
        if(!x->getGroups().count(g)&&x->disallowValue(y)){ 
            res=1;
        }
    }
    return res;
}