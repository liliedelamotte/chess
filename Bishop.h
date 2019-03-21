// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#ifndef _BISHOP_H
#define _BISHOP_H
#include "Piece.h"

class Square;

/**
 * Implements the Bishop object using Piece constructors.
 */
class Bishop: public Piece {

    /** Lift base constructors into scope. */
    using Piece::Piece;

    public:

        /**
         * A Piece destructor.
         */
        ~Bishop();

        /**
         * Determines whether or not the Bishop can move to a given location.
         *
         * @param location the Square in which the Bishop is to be moved to.
         * @return whether or not the Bishop can move to the given location.
         */
        bool canMoveTo(Square& location);


        /**
         * Returns a string version of a Bishop.
         *
         * @return a string version of a Bishop.
         */
        string toString();

};

#endif //_BISHOP_H