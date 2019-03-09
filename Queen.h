// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19

#ifndef _QUEEN_H
#define _QUEEN_H

#include "Piece.h"


class Queen: public Piece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
};

#endif //_QUEEN_H