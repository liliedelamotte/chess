// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <string>
#include <set>
#include "Player.h"
#include "King.h"
#include "Piece.h"
using namespace std;

Player::Player(string name, King& king, set<Piece*>& pieces)
: _name(name), _king(king), _pieces(pieces){ }

string Player::getName() {
    return _name;
}

King& Player::getKing() {
    return _king;
}

set<Piece*>& Player::getPieces() {
    return _pieces;
}

bool Player::makeMove() {
    /* todo */
    return false;
}

void Player::capture(Piece& piece) {
    /* todo */
}