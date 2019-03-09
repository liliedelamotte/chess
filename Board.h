// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _BOARD_H
#define _BOARD_H
#include <iostream>
#include "Square.h"
using namespace std;

/**
 * Implements the Board object.
 */
class Board {

    public:

        /**
         * Returns a reference to the Board object.
         */
        static Board& getInstance();

        /**
         * Returns a reference to the Square at a given rank and file.
         *
         * @param rank todo
         * @param file todo
         */
        Square& getSquareAt(int rank, int file);

        /**
         * @param from todo
         * @param to todo
         */
        bool isClearRank(Square& from, Square& to);

        /**
         * @param from todo
         * @param to todo
         */
        bool isClearFile(Square& from, Square& to);

        /**
         * @param from todo
         * @param to todo
         */
        bool isClearDiagonal(Square& from, Square& to);

        /**
         * Displays the Board.
         *
         * @param os an output stream.
         */
        void display(ostream& os);

    private:

        /* todo */
        int DIMENSION = 8;

        /* todo */
        static Board& instance;

        /* todo */
        Board();

};

#endif //_BOARD_H