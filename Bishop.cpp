// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include "Bishop.h"
#include "Square.h"

bool Bishop::canMoveTo(Square& location) {
    /* todo */
    return false;
}

Bishop::~Bishop() {
    delete this;
}

string Bishop::toString() {
    return "B";
}