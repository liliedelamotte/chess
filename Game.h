// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#ifndef _GAME_H
#define _GAME_H

#include <set>
#include "Player.h"

/**
 * Implements the game object.
 */
class Game {

    public:

        /**
         * Initializes the game and begins running the game.
         */
        static void initialize();

        /**
         * Returns a reference to the Player whose turn is next.
         *
         * @return a reference to the Player whose turn is next.
         */
        static Player& getNextPlayer();

        /**
         * Returns a reference to the opponent of a given Player.
         *
         * @param player a reference to a Player.
         * @return a reference to the opponent of a given Player.
         */
        static Player& getOpponentOf(Player& player);

    private:

        static Player* _player1;
        static Player* _player2;
        static Player* _currentPlayer;

        static set<Piece*> _whitePieces;
        static set<Piece*> _blackPieces;

};

#endif //_GAME_H