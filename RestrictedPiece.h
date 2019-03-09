/**
 * Project Chess
 * @author Brian R. Snider
 */


#ifndef _RESTRICTEDPIECE_H
#define _RESTRICTEDPIECE_H

#include "Piece.h"


class RestrictedPiece: public Piece {
public: 
    
/**
 * @param location
 * @param byPlayer
 */
virtual boolean moveTo(Square& location, Player& byPlayer) = 0;
protected: 
    
boolean hasMoved();
private: 
    boolean moved = false;
};

#endif //_RESTRICTEDPIECE_H