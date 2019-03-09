// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <string>
#include <set>
#include "Player.h"
#include "King.h"
using namespace std;

/**
 * Implements the Player object.
 */

/**
 * Constructs a Player.
 *
 * @param name the name of the Player.
 * @param king todo
 * @param pieces todo
 */
void Player::Player(string name, King& king, set<Piece*>& pieces) {
    /* todo */
}

/**
 * Returns the name of the Player called upon.
 *
 * @return the name of the Player called upon.
 */
string Player::getName() {
    /* todo */
    return "";
}

/**
 * Returns a reference to the King of the Player called upon.
 *
 * @return a reference to the King of the Player called upon.
 */
King& Player::getKing() {
    /* todo */
    return null;
}

/**
 * Returns a reference to a set of pointers to all the Pieces a player has.
 *
 * @return a reference to a set of pointers to all the Pieces a player has.
 */
set<Piece*>& Player::getPieces() {
    /* todo */
    return null;
}

/**
 * todo
 *
 * @return whether or not the move was successful.
 */
bool Player::makeMove() {
    /* todo */
    return false;
}

/**
 * Captures a Piece.
 *
 * @param piece a reference to the Piece to capture.
 */
void Player::capture(Piece& piece) {
    /* todo */
}

/**
 * Calculates a Player's total score.
 *
 * @return a Player's total score.
 */
int Player::calculateScore() {
    /* todo */
    return 0;
}