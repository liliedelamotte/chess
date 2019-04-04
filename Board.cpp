// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include <iostream>
#include "Board.h"
#include "Square.h"
#include "Piece.h"
using namespace std;

Board* Board::_instance;
Square* Board::_squares[DIMENSION][DIMENSION];

Board::Board() {

    // creates a Square for all spots on the Board
    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            _squares[j][i] = new Square(j, i);
        }
    }

}

Board::~Board() {

    for (int i = 0; i < DIMENSION; i++) {
        for (int j = 0; j < DIMENSION; j++) {
            delete &getSquareAt(j, i);
        }
    }

    delete _instance;

}

Board* Board::getInstance() {

    if (_instance == nullptr) {
        _instance = new Board();
    }

    return _instance;

}

Square& Board::getSquareAt(int file, int rank) {
    return *_squares[file][rank];
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
    /* todo */
    return false;
}

void Board::display() {

    for (int i = DIMENSION - 1; i >= 0; i--) {

        if (i == DIMENSION - 1) {
            cout << "\n     a    b    c    d    e    f    g    h\n";
        }

        if (i == DIMENSION - 1) {
            cout << "  +----+----+----+----+----+----+----+----+\n";
        }

        for (int j = 0; j < DIMENSION; j++) {

            if (j == 0) {
                cout << i + 1 << " |";
            }

            Square& square = getSquareAt(j, i);

            if (square.isOccupied()) {
                cout << " " << square.getOccupant()->getColor()
                << square.getOccupant()->toString() << " |";
//                cout << "  "
//                     << square.getOccupant()->toString() << " |";
            }
            else {
                cout << "    |";
            }

            if (j == DIMENSION) {
                cout << " " << j << "\n";
            }

        }

        cout << " " << i + 1 << "\n  +----+----+----+----+----+----+----+----+\n";

    }

    cout << "     a    b    c    d    e    f    g    h\n";

}