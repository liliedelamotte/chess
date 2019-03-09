// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _BISHOP_H
#define _BISHOP_H

#include "Piece.h"


class Bishop: public Piece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
};

#endif //_BISHOP_H