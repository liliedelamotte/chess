// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#ifndef _PIECE_H
#define _PIECE_H

#include <iostream>
#include <string>

using namespace std;

// forward declaration of a class needed as a data type
class Square;
class Player;

/**
 * Implements the Piece object.
 */
class Piece {

    public:

        /**
         * A Piece constructor.
         *
         * @param location the Square the Piece begins on.
         */
        Piece(Square* location, string color);

        /**
         * Returns the color of the Piece.
         *
         * @return the color of the Piece.
         */
        string getColor();

        /**
         * Returns a pointer to location of the Piece.
         *
         * @return the a pointer to location of the Piece.
         */
        Square* getLocation();

        /**
         * Sets the location of the Piece on the board.
         *
         * @param location the pointer to the Square
         * at which the Piece should be placed.
         */
        void setLocation(Square* location);

        /**
         * Determines whether or not the Piece is on the board.
         *
         * @return whether or not the Piece is on the board.
         */
        bool isOnSquare();

        /**
         * Determines whether or not the Piece can move to a given location.
         *
         * @param location the Square in which the Piece is to be moved to.
         * @return whether or not the Piece can move to the given location.
         */
        virtual bool canMoveTo(Square& location) = 0;

        /**
         * Moves a Piece to a given location.
         *
         * @param location the Square in which the Piece is to be moved to.
         * @param byPlayer the Player that is to make the move.
         * @return whether or not the move was successful.
         */
        bool moveTo(Square& location, Player& byPlayer);

        /**
         * Returns a string version of a Piece.
         *
         * @return a string version of a Piece.
         */
        virtual string toString() = 0;

    private:

        /**
         * The color of the piece.
         */
        string _color;

        /**
         * The Square at which the Piece is currently occupying.
         */
        Square* _location;

};

#endif //_PIECE_H