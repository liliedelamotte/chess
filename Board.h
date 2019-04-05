// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#ifndef _BOARD_H
#define _BOARD_H
#include <iostream>

using namespace std;

class Board;
class Square;
class Piece;

/** Implements the Board object. */
class Board {

    public:

        /**
         * A Board deconstructor.
         */
        ~Board();

        /**
         * Returns a reference to the Board object.
         *
         * @return a reference to the Board object.
         */
        static Board* getInstance();

        /**
         * Returns a reference to the Square at a given rank and file.
         *
         * @param rank horizontal rows of Squares, labeled 1 through 8.
         * @param file vertical columns of Squares, labeled a through h.
         * @return a reference to the Square at a given rank and file.
         */
        Square& getSquareAt(int file, int rank);

        /**
         * Determines whether or not a set of horizontal Squares is clear.
         *
         * @param from a Square reference.
         * @param to a Square reference.
         * @return whether or not the file is clear.
         */
        bool isClearRank(Square& from, Square& to);

        /**
         * Determines whether or not a set of vertical Squares is clear.
         *
         * @param from a Square reference.
         * @param to a Square reference.
         * @return whether or not the file is clear.
         */
        bool isClearFile(Square& from, Square& to);

        /**
         * Determines whether or not a set of diagonal Squares is clear.
         *
         * @param from a Square reference.
         * @param to a Square reference.
         * @return whether or not a set of diagonal Squares is clear.
         */
        bool isClearDiagonal(Square& from, Square& to);

        /**
         * Displays the Board.
         *
         * @param os an output stream.
         */
        void display();

    protected:

        /** The height and width of the board. */
        static const int DIMENSION = 8;

    private:

        /** The Board instance itself. */
        static Board* _instance;

        /** Creates an 2D array of Squares. */
        static Square* _squares[DIMENSION][DIMENSION];

        /** An initializer for the Board constructor. */
        Board();

};

#endif //_BOARD_H