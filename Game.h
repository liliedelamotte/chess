// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23

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
         * Initializes the game.
         */
        static void initialize();

        /**
         * Runs through the game.
         */
        static void playGame();

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

        static Player* player1;
        static Player* player2;
        static Player* currentPlayer;

        static set<Piece*> whitePieces;
        static set<Piece*> blackPieces;

};

#endif //_GAME_H