#ifndef FIELD_HEADER
#define FIELD_HEADER

#include <vector>
#include "group.h"
#include "step.h"
class Group;

class Field{
    std::vector<bool>possibleValues; //1 = value might be in the field, 0 - value will not be in the field
    std::vector<Group*>groups;
    int solved=0;
    public:
    const int col,row;
    Field(int col,int row,int n);
    Field(int col,int row,int n,int x);
    void disallowValue(int x);
    void setValue(int x);
    void solve(int x);
    int isDecided();
    void notifyGroups();
    void addGroup(Group* g);
    friend ForcedMove;
};

#endif