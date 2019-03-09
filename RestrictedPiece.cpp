// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include "RestrictedPiece.h"
#include "Player.h"

/**
 * Implements the RestrictedPiece object.
 */

/**
 * Moves a Piece to a given location.
 *
 * @param location the Square in which the Piece is to be moved to.
 * @param byPlayer the Player that is to make the move.
 * @return whether or not the move was successful.
 */
virtual bool RestrictedPiece::moveTo(Square& location, Player& byPlayer) {
    /* todo */
    return false;
}

/**
 * Returns whether or not the Piece called upon has moved.
 *
 * @return whether or not the Piece called upon has moved.
 */
bool RestrictedPiece::hasMoved() {
    /* todo */
    return false;
}