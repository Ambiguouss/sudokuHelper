#ifndef BOARD_HEADER
#define BOARD_HEADER

#include<vector>
#include "field.h"
#include "group.h"

class Field;
class Group;
class Board{
    int n;
    std::vector<Field*>fields;
    std::vector<Group*>columns;
    std::vector<Group*>rows;
    std::vector<Group*>squares;
    public:
    Board(int n);
    int getN() const;
    Field* getField(int row, int col);
    Group* getColumn(int x);
    Group* getRow(int x);
    Group* getSquare(int x);
    int getFieldValue(int row, int col)const;
    void setField(int row,int col,int x);
    friend std::istream& operator>>(std::istream& is, Board& B);
    friend std::ostream& operator<<(std::ostream& os, const Board& B);
    ~Board();
};

#endif