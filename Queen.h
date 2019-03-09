// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _QUEEN_H
#define _QUEEN_H
#include "Piece.h"

/**
 * Implements the Queen object.
 */
class Queen: public Piece {

    public:

        /**
         * Returns the integer value of the Queen.
         */
        int getValue();

        /**
         * Determines whether or not the Queen can move to a given location.
         *
         * @param location the Square in which the Queen is to be moved to.
         */
        bool canMoveTo(Square& location);

};

#endif //_QUEEN_H