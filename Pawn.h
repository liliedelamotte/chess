// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


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
         * Determines whether or not the Pawn can move to a given location.
         *
         * @param location the Square in which the Pawn is to be moved to.
         * @return whether or not the Pawn can move to the given location.
         */
        bool canMoveTo(Square& location);

        static bool hasDelegate();

        static void setDelegate(Piece& delegate);

        /**
          * Returns a string version of a Pawn.
          *
          * @return a string version of a Pawn.
          */
        string toString();

    private:

//        static Piece* _delegate;


};

#endif //_PAWN_H