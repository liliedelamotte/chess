// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>

class Board;
class Square;

Board* Board::getInstance() {
    /* todo */
    return nullptr;
}

Square& Board::getSquareAt(int rank, int file) {
    /* todo */
    return nullptr;
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

Board::Board() {
    /* todo */
}