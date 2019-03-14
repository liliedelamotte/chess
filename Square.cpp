// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include "Square.h"
#include "Piece.h"

Square::Square(int rank, int file) {
    /* todo */
}

int Square::getRank() {
    return _rank;
}

int Square::getFile() {
    return _file;
}

bool Square::isOccupied() {
    return _occupant != nullptr;
}

Piece* Square::getOccupant() {
    return _occupant;
}

void Square::setOccupant(Piece* occupant) {
    /* todo */
    _occupant = occupant;
    occupant->setLocation(this);
}