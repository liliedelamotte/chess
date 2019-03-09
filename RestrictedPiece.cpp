/**
 * Project Chess
 * @author Brian R. Snider
 */


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