// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _ROOK_H
#define _ROOK_H

#include "RestrictedPiece.h"


class Rook: public RestrictedPiece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
};

#endif //_ROOK_H