// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include "Square.h"

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
    /* todo */
    return false;
}

Piece* Square::getOccupant() {
    /* todo */
//    return _occupant;
}

void Square::setOccupant(Piece* occupant) {
    /* todo */
    // fyi: should be _occupant = occupant; after it's changed
//    _occupant = occupant;
//    occupant->setLocation(this);
}