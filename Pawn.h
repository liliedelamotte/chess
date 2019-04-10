// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#ifndef _PAWN_H
#define _PAWN_H
#include <iostream>
#include "RestrictedPiece.h"
#include "Queen.h"
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
         * Determines whether or not the Pawn can move to a given location.
         *
         * @param location the Square in which the Pawn is to be moved to.
         * @return whether or not the Pawn can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
         * Returns whether or not the Pawn has a delegate.
         *
         * @return whether or not the Pawn has a delegate.
         */
        bool hasDelegate();

        /**
          * Returns a string version of a Pawn.
          *
          * @return a string version of a Pawn.
          */
        string toString();

    private:

        /**
         * Whether or not a Pawn has a delegate yet.
         */
        bool _hasDelegate = false;


};

#endif //_PAWN_H