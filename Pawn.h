// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _PAWN_H
#define _PAWN_H

#include "RestrictedPiece.h"


class Pawn: public RestrictedPiece {
public: 
    
int getValue();
    
/**
 * @param location
 */
boolean canMoveTo(Square& location);
    
/**
 * @param os
 */
void display(ostream& os);
};

#endif //_PAWN_H