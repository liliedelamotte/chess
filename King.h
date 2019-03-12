// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _KING_H
#define _KING_H
#include "RestrictedPiece.h"

/**
 * Implements the King object.
 */
class King: public RestrictedPiece {

    public:

        /**
         * Returns the integer value of the King.
         *
         * @return the integer value of the King.
         */
        int getValue();

        /**
         * Determines whether or not the King can move to a given location.
         *
         * @param location the Square in which the King is to be moved to.
         * @return whether or not the King can move to the given location.
         */
        bool canMoveTo(Square& location);

};

#endif //_KING_H