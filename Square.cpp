// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include "Square.h"
#include "Piece.h"

Square::Square(int file, int rank) :_file(file), _rank(rank), _occupant(nullptr) {}

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
}