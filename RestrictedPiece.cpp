// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include "RestrictedPiece.h"

/**
 * RestrictedPiece implementation
 */


/**
 * @param location
 * @param byPlayer
 * @return boolean
 */
virtual boolean RestrictedPiece::moveTo(Square& location, Player& byPlayer) {
    return false;
}

/**
 * @return boolean
 */
boolean RestrictedPiece::hasMoved() {
    return false;
}