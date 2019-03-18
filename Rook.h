// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _ROOK_H
#define _ROOK_H
#include "RestrictedPiece.h"

class Square;

/**
 * Implements the Rook object.
 */
class Rook: public RestrictedPiece {

    /** Lift base constructors into scope. */
    using RestrictedPiece::RestrictedPiece;

    public:

        /**
         * Determines whether or not the Rook can move to a given space.
         *
         * @param location the Square in which the Rook is to be moved to.
         * @return whether or not the Knight can move to the given location.
         */
        bool canMoveTo(Square& location);

};

#endif //_ROOK_H