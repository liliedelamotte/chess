// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _SQUARE_H
#define _SQUARE_H

class Piece;

/**
 * Implements the Square object.
 */
class Square {

    public:

        /**
         * Constructs a Square.
         *
         * @param rank horizontal rows of Squares, labeled 1 through 8.
         * @param file vertical columns of Squares, labeled a through h.
         */
        Square(int rank, int file);

        /**
         * Returns the rank of the Square.
         *
         * @return the rank of the Square.
         */
        int getRank();

        /**
         * Returns the file of the Square.
         *
         * @return the file of the Square.
         */
        int getFile();

        /**
         * Determines whether or not the Square called upon is occupied by a Piece.
         *
         * @return whether or not the Square called upon is occupied by a Piece.
         */
        bool isOccupied();

        /**
         * Returns a pointer to the occupant at the Square called upon.
         *
         * @return a pointer to the occupant at the Square called upon.
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
         * The rank of the Square.
         */
        int _rank;

        /**
         * The file of the Square.
         */
        int _file;

        /**
         * The location of a Piece.
         */
        Piece* _location;
};

#endif //_SQUARE_H