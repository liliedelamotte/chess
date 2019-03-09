// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


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