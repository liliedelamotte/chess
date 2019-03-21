// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#ifndef _KNIGHT_H
#define _KNIGHT_H

#include "Piece.h"

class Square;

/**
 * Implements the Knight object.
 */
class Knight: public Piece {

    /** Lift base constructors into scope. */
    using Piece::Piece;

    public:

        /**
         * A Knight destructor.
         */
        ~Knight();

        /**
         * Determines whether or not the Knight can move to a given space.
         *
         * @param location the Square in which the Knight is to be moved to.
         * @return whether or not the Knight can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
         * Returns a string version of a Knight.
         *
         * @return a string version of a Knight.
         */
        string toString();

};

#endif //_KNIGHT_H