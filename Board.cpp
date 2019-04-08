// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include <iostream>
#include <cstdlib>
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
            getSquareAt(j, i).setOccupant(nullptr);
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

    int fromFile = from.getFile();
    int toFile = to.getFile();
    int toRank = to.getRank();
    int currentFile = fromFile + 1;
    bool isClearRank = true;

    if (fromFile > toFile) {
        currentFile = fromFile - 1;
    }

    while (currentFile != toFile && isClearRank) {

        if (getSquareAt(currentFile, toRank).isOccupied()) {
            isClearRank = false;
        }

        // increments file according to
        // where it is supposed to approach
        if (fromFile > toFile) {
            currentFile--;
        }
        else {
            currentFile++;
        }

    }

    return isClearRank;
}

bool Board::isClearFile(Square& from, Square& to) {

    int fromRank = from.getRank();
    int toFile = to.getFile();
    int toRank = to.getRank();
    int currentRank = fromRank + 1;
    bool isClearFile = true;

    if (fromRank > toRank) {
        currentRank = fromRank - 1;
    }

    while (currentRank != toRank && isClearFile) {

        if (getSquareAt(toFile, currentRank).isOccupied()) {
            isClearFile = false;
        }

        // increments rank according to
        // where it is supposed to approach
        if (fromRank > toRank) {
            currentRank--;
        }
        else {
            currentRank++;
        }

    }

    return isClearFile;
}

bool Board::isClearDiagonal(Square& from, Square& to) {

    int fromFile = from.getFile();
    int fromRank = from.getRank();
    int toFile = to.getFile();
    int toRank = to.getRank();
    int currentFile = fromFile + 1;
    int currentRank = fromRank + 1;
    bool isClearDiagonal = true;

    if (fromFile > toFile) {
        currentFile = fromFile - 1;
    }
    if (fromRank > toRank) {
        currentRank = fromRank - 1;
    }

    if (abs(fromFile - toFile) != abs(fromRank - toRank)) {
        isClearDiagonal = false;
    }

    while ((currentFile != toFile && currentRank != toRank) && isClearDiagonal) {

        if (getSquareAt(currentFile, currentRank).isOccupied()) {
            isClearDiagonal = false;
        }

        // increments file and rank according to
        // where they are supposed to approach
        if (fromFile > toFile) {
            currentFile --;
        }
        else {
            currentFile++;
        }

        if (fromRank > toRank) {
            currentRank--;
        }
        else {
            currentRank++;
        }
    }

    return isClearDiagonal;
}

void Board::display() {

    Square* currentSquare;

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

            currentSquare = &getSquareAt(j, i);

            if (currentSquare->isOccupied()) {
                cout << " " << currentSquare->getOccupant()->getColor()
                << currentSquare->getOccupant()->toString() << " |";
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