// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _KNIGHT_H
#define _KNIGHT_H

#include "Piece.h"


class Knight: public Piece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
};

#endif //_KNIGHT_H