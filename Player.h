// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>
#include <set>
#include "King.h"

using namespace std;

class King;
class Piece;

/**
 * Implements the Player object.
 */
class Player {

    public:

        /**
         * Constructs a Player.
         *
         * @param name the name of the Player.
         * @param king a reference to the Player's King.
         * @param pieces the set of Pieces the Player currently has.
         */
        Player(string name, King& king, set<Piece*>& pieces);

        /**
         * Returns the name of the Player called upon.
         *
         * @return the name of the Player called upon.
         */
        string getName();

        /**
         * Returns a reference to the King of the Player called upon.
         *
         * @return a reference to the King of the Player called upon.
         */
        King& getKing();

        /**
         * Returns a reference to a set of pointers to all the Pieces a player has.
         *
         * @return a reference to a set of pointers to all the Pieces a player has.
         */
        set<Piece*>& getPieces();

        /**
         * Aids the player in making a move.
         *
         * @return whether or not the move was successful.
         */
        bool makeMove();

        /**
         * Captures a Piece.
         *
         * @param piece a reference to the Piece to capture.
         */
        void capture(Piece& piece);

    private:

        /**
         * The name of the Player.
         */
        string _name;

        /**
         * The Player's King.
         */
        King& _king;

        /**
         * The Player's set of Pieces.
         */
        set<Piece*>& _pieces;

};

#endif //_PLAYER_H