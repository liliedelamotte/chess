// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#ifndef _KING_H
#define _KING_H
#include "RestrictedPiece.h"

class Square;

/**
 * Implements the King object.
 */
class King: public RestrictedPiece {

    /** Lift base constructors into scope. */
    using RestrictedPiece::RestrictedPiece;

    public:

        /**
         * Determines whether or not the King can move to a given location.
         *
         * @param location the Square in which the King is to be moved to.
         * @return whether or not the King can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
         * Returns a string version of a King.
         *
         * @return a string version of a King.
         */
        string toString();

};

#endif //_KING_H