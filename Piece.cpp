// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include <string>
#include "Piece.h"
#include "Player.h"
#include "Square.h"
using namespace std;


Piece::Piece(Square* location, string color)
: _location(location), _color(color) {};

string Piece::getColor() {
    return _color;
}

Square* Piece::getLocation() {
    return _location;
}

void Piece::setLocation(Square* location) {
    _location = location;
    location->setOccupant(this);
}

bool Piece::isOnSquare() {
    /* todo */
    return (_location != nullptr);
}

bool Piece::moveTo(Square& location, Player& byPlayer) {
    /* todo */
    return false;
}

void Piece::display(ostream& os) {
    /* todo */
}