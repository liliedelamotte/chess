// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include "Board.h"
#include "Square.h"
using namespace std;

Board::Board() {

    Square* _instance[8][8]; // put in class Board

    // _squares[1][2] = Square(1, 2);

    /* todo */

    // creates a Square for all spots on the Board
    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            Square square = Square(i, j);
            _instance[i][j] = &square;
        }
    }
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

void Board::display() {
    /* todo */
    for (int i = 0; i < DIMENSION; i++) {

        if (i == 0 || i == DIMENSION) {
            cout << "     a     b     c     d     e     f     g     h\n";
        }

        if (i == 0) {
            cout << "  +-----+-----+-----+-----+-----+-----+-----+-----+\n";
        }

        for (int j = 0; j < DIMENSION; j++) {
            if (j == 0) {
                cout << (i + 1) << " |";
            }
            cout << "  " << this->getInstance()->getSquareAt(i, j).getOccupant() << " |";
            if (j == 8) {
                cout << " " << j << "\n";
            }
        }

        cout << "\n  +-----+-----+-----+-----+-----+-----+-----+-----+\n";
    }
}