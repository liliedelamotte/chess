/**
 * Project Chess
 * @author Brian R. Snider
 */


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