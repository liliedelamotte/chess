// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


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

};

#endif //_KING_H