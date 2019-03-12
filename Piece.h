// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _PIECE_H
#define _PIECE_H
#include "Square.h"

/**
 * Implements the Piece object.
 */
class Piece {

    public:

        /**
         * Returns the integer value of the Piece.
         *
         * @return the integer value of the Piece.
         */
        virtual int getValue() = 0;

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
        virtual boolean canMoveTo(Square& location) = 0;

        /**
         * Moves a Piece to a given location.
         *
         * @param location the Square in which the Piece is to be moved to.
         * @param byPlayer the Player that is to make the move.
         * @return whether or not the move was successful.
         */
        bool moveTo(Square& location, Player& byPlayer);

        /**
         * Displays the Piece using a terminal-based figurine.
         *
         * @param os an output stream.
         */
        void display(ostream& os);

    private:

        /**
         * The color of the piece.
         */
        string color;

        /**
         * The Square at which the Piece is currently occupying.
         */
        Square occupant;

};

#endif //_PIECE_H