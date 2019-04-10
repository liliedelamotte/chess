// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include <iostream>
#include <string>
#include "Piece.h"
#include "Player.h"
#include "Square.h"
using namespace std;


Piece::Piece(Square* location, string color)
: _location(location), _color(color) {
    if (isOnSquare()) {
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
    if (isOnSquare()) {
        location->setOccupant(this);
    }
}

bool Piece::isOnSquare() {
    return (_location != nullptr);
}

bool Piece::moveTo(Square& location, Player& byPlayer) {
    this->getLocation()->setOccupant(nullptr);
    this->setLocation(&location);
    return true;
}