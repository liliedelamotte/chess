// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include "Knight.h"
#include "Square.h"

Knight::~Knight() {
    delete this;
}

bool Knight::canMoveTo(Square& location) {
    /* todo */
    return false;
}

string Knight::toString() {
    return "N";
}