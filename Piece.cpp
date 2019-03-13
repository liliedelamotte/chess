// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include "Piece.h"
#include "Player.h"
#include "Square.h"
using namespace std;

Piece::Piece(Square* location) : _location(location) { }

int Piece::getValue() {
    /* todo */
    return 0;
}

string Piece::getColor() {
    /* todo */
    return "";
}

Square* Piece::getLocation() {
    /* todo */
    return nullptr;
}

void Piece::setLocation(Square* location) {
    /* todo */
    location = location;
    location->setOccupant(this);
}


bool Piece::isOnSquare() {
    /* todo */
    return false;
}

bool Piece::canMoveTo(Square& location) {
    /* todo */
    return false;
}


/**
 * Moves a Piece to a given location.
 *
 * @param location the Square in which the Piece is to be moved to.
 * @param byPlayer the Player that is to make the move.
 * @return whether or not the move was successful.
 */
bool Piece::moveTo(Square& location, Player& byPlayer) {
    /* todo */
    return false;
}


/**
 * Displays the Piece using a terminal-based figurine.
 *
 * @param os an output stream.
 */
void Piece::display(ostream& os) {
    /* todo */
}