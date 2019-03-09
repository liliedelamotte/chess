/**
 * Project Chess
 * @author Brian R. Snider
 */


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