// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _KING_H
#define _KING_H

#include "RestrictedPiece.h"


class King: public RestrictedPiece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
};

#endif //_KING_H