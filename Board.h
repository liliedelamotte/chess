// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _BOARD_H
#define _BOARD_H

class Board {
public: 
    
static Board& getInstance();
    
/**
 * @param rank
 * @param file
 */
Square& getSquareAt(int rank, int file);
    
/**
 * @param from
 * @param to
 */
boolean isClearRank(Square& from, Square& to);
    
/**
 * @param from
 * @param to
 */
boolean isClearFile(Square& from, Square& to);
    
/**
 * @param from
 * @param to
 */
boolean isClearDiagonal(Square& from, Square& to);
    
/**
 * @param os
 */
void display(ostream& os);
private: 
    int DIMENSION = 8;
    static Board& instance;
    
void Board();
};

#endif //_BOARD_H