// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include "Square.h"
#include "Piece.h"

Square::Square(int rank, int file) : _rank(rank), _file(file) { }

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
    _occupant = occupant;
    occupant->setLocation(this);
}