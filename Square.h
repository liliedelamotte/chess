// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _SQUARE_H
#define _SQUARE_H
#include "Piece.h"

/**
 * Implements the Square object.
 */
class Square {

    public:

        /**
         * Constructs a Square.
         *
         * @param rank todo
         * @param file todo
         */
        void Square(int rank, int file);

        /**
         * Returns the integer rank of the Square called upon.
         */
        int getRank();

        /**
         * todo
         */
        int getFile();

        /**
         * Determines whether or not the Square called upon is occupied by a Piece.
         */
        boolean isOccupied();

        /**
         * Returns a pointer to the occupant at the Square called upon.
         */
        Piece* getOccupant();

        /**
         * Sets a given occupant at the Square called upon.
         *
         * @param occupant a pointer to the Piece to be placed at the Square called upon.
         */
        void setOccupant(Piece* occupant);

    private:

        /**
         * todo
         */
        int rank;

        /**
         * todo
         */
        int file;

        /**
         * The location of a Piece.
         */
        Piece location;
};

#endif //_SQUARE_H