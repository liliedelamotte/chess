// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include "Queen.h"
#include "Square.h"

Queen::~Queen() {
    delete this;
};

bool Queen::canMoveTo(Square& location) {
    /* todo */
    return false;
}

string Queen::toString() {
    return "Q";
}