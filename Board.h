// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _BOARD_H
#define _BOARD_H
#include <iostream>
using namespace std;

class Board;
class Square;

/**
 * Implements the Board object.
 */
class Board {

    public:

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
        Square& getSquareAt(int rank, int file);

        /**
         * Determines whether or not a set of horizontal Squares is clear.
         *
         * @param from todo
         * @param to todo
         * @return whether or not the file is clear.
         */
        bool isClearRank(Square& from, Square& to);

        /**
         * Determines whether or not a set of vertical Squares is clear.
         *
         * @param from todo
         * @param to todo
         * @return whether or not the file is clear.
         */
        bool isClearFile(Square& from, Square& to);

        /**
         * Determines whether or not a set of diagonal Squares is clear.
         *
         * @param from todo
         * @param to todo
         * @return whether or not a set of diagonal Squares is clear.
         */
        bool isClearDiagonal(Square& from, Square& to);

        /**
         * Displays the Board.
         *
         * @param os an output stream.
         */
        void display(ostream& os);

    private:

        /*
         * The height and width of the board.
         */
        int DIMENSION = 8;

        /*
         * The Board instance itself.
         */
        static Board* _instance;

        /* todo */
        Board();

};

#endif //_BOARD_H