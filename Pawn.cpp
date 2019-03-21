// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include <iostream>
#include "Pawn.h"
using namespace std;

Pawn::~Pawn() {
    delete this;
}

bool Pawn::canMoveTo(Square& location) {
    /* todo */
    return false;
}

string Pawn::toString() {
    return "P";
}