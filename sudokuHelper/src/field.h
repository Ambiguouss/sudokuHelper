#ifndef FIELD_HEADER
#define FIELD_HEADER

#include <vector>
#include <map>
#include "group.h"
#include "step.h"
class Group;

class Field{
    std::vector<bool>possibleValues; //1 = value migt be in the field, 0 - value will not be in the field
    std::set<Group*>groups;
    int solved=0;
    public:
    const int col,row;
    Field(int col,int row,int n);
    Field(int col,int row,int n,int x);
    bool disallowValue(int x);
    void setValue(int x);
    void solve(int x);
    int isDecided();
    bool isPossible(int x);
    void notifyGroups();
    void addGroup(Group* g);
    const std::set<Group*>& getGroups();
    friend ForcedMove;
    friend Group* commonGroupDiffThan(std::vector<Field*>& v,Group* g);
};

#endif