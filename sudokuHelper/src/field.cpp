#include "field.h"

Field::Field(int _col, int _row,int n) : col(_col),row(_row){
    possibleValues =  std::vector<bool>(n,1);
};
Field::Field(int _col, int _row, int n,int x):Field(_col,_row,n){
    setValue(x);
}
void Field::disallowValue(int x){
    possibleValues[x-1]=0;
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
    for(auto &x:groups)x->notify(this);
}
void Field::addGroup(Group* g){
    groups.push_back(g);
}