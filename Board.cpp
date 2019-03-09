// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19

#include "Board.h"

/**
 * Board implementation
 */


/**
 * @return Board&
 */
static Board& Board::getInstance() {
    return null;
}

/**
 * @param rank
 * @param file
 * @return Square&
 */
Square& Board::getSquareAt(int rank, int file) {
    return null;
}

/**
 * @param from
 * @param to
 * @return boolean
 */
boolean Board::isClearRank(Square& from, Square& to) {
    return false;
}

/**
 * @param from
 * @param to
 * @return boolean
 */
boolean Board::isClearFile(Square& from, Square& to) {
    return false;
}

/**
 * @param from
 * @param to
 * @return boolean
 */
boolean Board::isClearDiagonal(Square& from, Square& to) {
    return false;
}

/**
 * @param os
 */
void Board::display(ostream& os) {

}

void Board::Board() {

}