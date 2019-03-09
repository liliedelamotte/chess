// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include "Board.h"
#include "Square.h"

/**
 * Implements the Board object.
 */

/**
 * Returns a reference to the Board object.
 *
 * @return a reference to the Board object.
 */
static Board& Board::getInstance() {
    /* todo */
    return null;
}

/**
 * Returns a reference to the Square at a given rank and file.
 *
 * @param rank todo
 * @param file todo
 * @return a reference to the Square at a given rank and file.
 */
Square& Board::getSquareAt(int rank, int file) {
    /* todo */
    return null;
}

/**
 * todo
 *
 * @param from todo
 * @param to todo
 * @return whether or not the file is clear.
 */
bool Board::isClearRank(Square& from, Square& to) {
    /* todo */
    return false;
}

/**
 * todo
 *
 * @param from todo
 * @param to todo
 * @return whether or not the file is clear.
 */
bool Board::isClearFile(Square& from, Square& to) {
    /* todo */
    return false;
}

/**
 * Determines whether or not a set of diagonal Squares is clear.
 *
 * @param from todo
 * @param to todo
 * @return whether or not a set of diagonal Squares is clear.
 */
bool Board::isClearDiagonal(Square& from, Square& to) {
    return false;
}

/**
 * Displays the Board.
 *
 * @param os an output stream.
 */
void Board::display(ostream& os) {
    /* todo */
}

/*
 * todo
 */
Board::Board() {
    /* todo */
}