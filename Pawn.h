// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#ifndef _PAWN_H
#define _PAWN_H
#include <iostream>
#include "RestrictedPiece.h"
using namespace std;

class Square;

/**
 * Implements the Pawn object.
 */
class Pawn: public RestrictedPiece {

    /** Lift base constructors into scope. */
    using RestrictedPiece::RestrictedPiece;

    public:

        /**
         * A Pawn destructor.
         */
        ~Pawn();

        /**
         * Determines whether or not the Pawn can move to a given location.
         *
         * @param location the Square in which the Pawn is to be moved to.
         * @return whether or not the Pawn can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
          * Returns a string version of a Pawn.
          *
          * @return a string version of a Pawn.
          */
        string toString();

};

#endif //_PAWN_H