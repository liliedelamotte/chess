// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#ifndef _RESTRICTEDPIECE_H
#define _RESTRICTEDPIECE_H
#include "Piece.h"

class Player;
class Square;

/**
 * Implements the RestrictedPiece object.
 */
class RestrictedPiece: public Piece {

    /** Lift base constructors into scope. */
    using Piece::Piece;

    protected:

        /**
         * Returns whether or not the Piece called upon has moved.
         *
         * @return whether or not the Piece called upon has moved.
         */
        bool hasMoved();

    private:

        /**
         * Whether or not the Restricted Piece has moved yet.
         */
        bool _moved = false;

};

#endif //_RESTRICTEDPIECE_H