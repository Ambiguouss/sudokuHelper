#include "board.h"
#include <vector>


Board::Board(int k){
    n=k*k;
    fields=std::vector<Field*>(n*n,nullptr);
    rows=std::vector<Group*>(n);
    columns=std::vector<Group*>(n);
    squares=std::vector<Group*>(n);
    for(int i=0;i<n;i++){
        rows[i]=new Group();
        columns[i]=new Group();
        squares[i]=new Group();
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            fields[row*n+col] = new Field(row,col,n);
            fields[row*n+col]->addGroup(rows[row]);
            fields[row*n+col]->addGroup(columns[col]);
            fields[row*n+col]->addGroup(squares[row/k*k+col/k]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rows[i]->addField(fields[i*n+j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            columns[j]->addField(fields[i*n+j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            squares[i/k*k+j/k]->addField(fields[i*n+j]);
        }
    }

};

int Board::getN() const{
    return n;
}
Field* Board::getField(int row, int col){
    return fields[row*n+col];
}
int Board::getFieldValue(int row, int col)const{
    return fields[row*n+col]->isDecided();
}
void Board::setField(int row, int col, int x){
    fields[row*n+col]->setValue(x);
}
Group* Board::getColumn(int x){
    return columns[x];
}
Group* Board::getRow(int x){
    return rows[x];
}Group* Board::getSquare(int x){
    return squares[x];
}
std::istream& operator>>(std::istream &is,Board& B){
    for(int i=0;i<B.getN();i++){
        for(int j=0;j<B.getN();j++){
            char x;
            is>>x;
            x-='0';
            if(x>0&& x<=9)B.setField(i,j,x);
        }
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const Board& B){
    for(int i=0;i<B.getN();i++){
        for(int j=0;j<B.getN();j++){
            int x=B.getFieldValue(i,j);
            if(x==0)os<<". ";
            else os<<x<<' ';
        }
        os<<'\n';
    }
    return os;
}


Board::~Board(){
    for (auto* ptr : fields) {
        delete ptr;
    }
    for (auto* ptr : rows) {
        delete ptr;
    }
    for (auto* ptr : columns) {
        delete ptr;
    }
    for (auto* ptr : squares) {
        delete ptr;
    }
    
}