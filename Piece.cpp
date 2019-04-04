// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include <iostream>
#include <string>
#include "Piece.h"
#include "Player.h"
#include "Square.h"
using namespace std;


Piece::Piece(Square* location, string color)
: _location(location), _color(color) {
    if (_location != nullptr) {
        location->setOccupant(this);
    }
}

string Piece::getColor() {
    return _color;
}

Square* Piece::getLocation() {
    return _location;
}

void Piece::setLocation(Square* location) {
    _location = location;
    if (_location != nullptr) {
        location->setOccupant(this);
    }
}

bool Piece::isOnSquare() {
    return (_location != nullptr);
}

bool Piece::moveTo(Square& location, Player& byPlayer) {
    /* todo */
    return false;
}