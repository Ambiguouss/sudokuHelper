#ifndef GROUP_HEADER
#define GROUP_HEADER

#include <vector>
#include <set>
#include <iostream>
#include "field.h"

class Field;

class Group{
    std::vector<Field*>fields;
    public:
    Field* whereMustBe(int x);
    void addField(Field* x);
    void notify(Field* x);
    const std::vector<Field*>& getFields(); 
    std::vector<Field*> whereCanBe(int x);
    bool removeNotInGroup(int x,Group* g);
};

#endif