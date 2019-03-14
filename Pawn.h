// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


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

    public:

        /**
         * Determines whether or not the Pawn can move to a given location.
         *
         * @param location the Square in which the Pawn is to be moved to.
         * @return whether or not the Pawn can move to the given location.
         */
        bool canMoveTo(Square& location);

        /**
         * Displays the Pawn using a terminal-based figurine.
         *
         * @param os an output stream.
         */
        void display(ostream& os);

};

#endif //_PAWN_H