/**
 * Project Chess
 * @author Brian R. Snider
 */


#include "Piece.h"

/**
 * Piece implementation
 */


/**
 * @return int
 */
virtual int Piece::getValue() {
    return 0;
}

/**
 * @return string
 */
string Piece::getColor() {
    return "";
}

/**
 * @return Square*
 */
Square* Piece::getLocation() {
    return null;
}

/**
 * @param location
 */
void Piece::setLocation(Square* location) {

}

/**
 * @return boolean
 */
boolean Piece::isOnSquare() {
    return false;
}

/**
 * @param location
 * @return boolean
 */
virtual boolean Piece::canMoveTo(Square& location) {
    return false;
}

/**
 * @param location
 * @param byPlayer
 * @return boolean
 */
boolean Piece::moveTo(Square& location, Player& byPlayer) {
    return false;
}

/**
 * @param os
 */
void Piece::display(ostream& os) {

}