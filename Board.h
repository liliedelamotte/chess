// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _BOARD_H
#define _BOARD_H
#include <iostream>
#include <array>
using namespace std;

class Board;
class Square;
class Piece;

/** Implements the Board object. */
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
        int DIMENSION = 8;

    private:

        /** The Board instance itself. */
        static Board* _instance;

        /** An initializer for the Board constructor. */
        Board();
//        Board() {
//            //_instance = new array<Square>[DIMENSION][DIMENSION];
//            Piece** _instance = new Piece*[DIMENSION];
//            for(int i = 0; i < DIMENSION; i++)
//                _instance[i] = new Piece[DIMENSION];
//        };

};

#endif //_BOARD_H