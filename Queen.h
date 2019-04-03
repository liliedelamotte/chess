// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#ifndef _QUEEN_H
#define _QUEEN_H
#include "Piece.h"

class Square;

/**
 * Implements the Queen object.
 */
class Queen: public Piece {

    /** Lift base constructors into scope. */
    using Piece::Piece;

    public:

        /**
         * Determines whether or not the Queen can move to a given location.
         *
         * @param location the Square in which the Queen is to be moved to.
         * @return whether or not the Queen can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
         * Returns a string version of a Queen.
         *
         * @return a string version of a Queen.
         */
        string toString();

};

#endif //_QUEEN_H