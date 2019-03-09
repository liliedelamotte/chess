// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include "Piece.h"
#include "Player.h"

using namespace std;


/**
 * Implements the Piece object.
 */


/**
 * Returns the integer value of the Piece.
 *
 * @return the integer value of the Piece.
 */
virtual int Piece::getValue() {
    /* todo */
    return 0;
}


/**
 * Returns the color of the Piece.
 *
 * @return the color of the Piece.
 */
string Piece::getColor() {
    /* todo */
    return "";
}


/**
 * Returns a pointer to location of the Piece.
 *
 * @return the a pointer to location of the Piece.
 */
Square* Piece::getLocation() {
    /* todo */
    return null;
}


/**
 * Sets the location of the Piece on the board.
 *
 * @param location the pointer to the Square
 * at which the Piece should be placed.
 */
void Piece::setLocation(Square* location) {
    /* todo */
}


/**
 * Determines whether or not the Piece is on the board.
 *
 * @return whether or not the Piece is on the board.
 */
bool Piece::isOnSquare() {
    /* todo */
    return false;
}


/**
 * Determines whether or not the Piece can move to a given location.
 *
 * @param location the Square in which the Piece is to be moved to.
 * @return whether or not the Piece can move to the given location.
 */
virtual bool Piece::canMoveTo(Square& location) {
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