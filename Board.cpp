// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include "Board.h"
#include "Square.h"
using namespace std;

Board::Board() {
    /* todo */
}

Board* Board::getInstance() {
    return _instance;
}

Square& Board::getSquareAt(int rank, int file) {
    /* todo */
    //return nullptr;
}

bool Board::isClearRank(Square& from, Square& to) {
    /* todo */
    return false;
}

bool Board::isClearFile(Square& from, Square& to) {
    /* todo */
    return false;
}

bool Board::isClearDiagonal(Square& from, Square& to) {
    return false;
}

void Board::display(ostream& os) {
    /* todo */
}