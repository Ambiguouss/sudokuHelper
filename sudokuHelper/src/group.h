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
    void addField(Field* x);
    void notify(Field* x);
};

#endif