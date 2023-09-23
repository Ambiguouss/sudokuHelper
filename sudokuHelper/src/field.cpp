#include "field.h"

Field::Field(int _col, int _row,int n) : col(_col),row(_row){
    possibleValues =  std::vector<bool>(n,1);
};
Field::Field(int _col, int _row, int n,int x):Field(_col,_row,n){
    setValue(x);
}
bool Field::disallowValue(int x){
    if(possibleValues[x-1]==0)return false;
    possibleValues[x-1]=0;
    return true;
}
void Field::solve(int x){
    solved=x;
    notifyGroups();
}
void Field::setValue(int x){
    for(auto &&a : possibleValues) a=0;
    possibleValues[x-1]=1;
    solve(x);
}
int Field::isDecided(){
    return solved;
}
void Field::notifyGroups(){
    for(auto x:groups)x->notify(this);
}
void Field::addGroup(Group* g){
    groups.insert(g);
}
bool Field::isPossible(int x){
    return possibleValues[x-1];
}
Group* commonGroupDiffThan(std::vector<Field*>& v,Group* g){
    std::map<Group*,int>mapa;
    for(auto x:v){
        for(auto y:x->groups){
            if(y!=g)mapa[y]++;
        }
    }
    for(const auto& [key,value] :mapa){
        if(value==v.size())return key;
    }
    return nullptr;
}
const std::set<Group*>& Field::getGroups(){
    return groups;
}