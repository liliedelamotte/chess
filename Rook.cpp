// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include "Rook.h"
#include "Square.h"

Rook::~Rook() {
    delete this;
}

bool Rook::canMoveTo(Square& location) {
    /* todo */
    return false;
}

string Rook::toString() {
    return "R";
}