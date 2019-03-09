// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _PIECE_H
#define _PIECE_H

#include "Square.h"


class Piece {
public: 
    
virtual int getValue() = 0;
    
string getColor();
    
Square* getLocation();
    
/**
 * @param location
 */
void setLocation(Square* location);
    
boolean isOnSquare();
    
/**
 * @param location
 */
virtual boolean canMoveTo(Square& location) = 0;
    
/**
 * @param location
 * @param byPlayer
 */
boolean moveTo(Square& location, Player& byPlayer);
    
/**
 * @param os
 */
void display(ostream& os);
private: 
    string color;
    Square occupant;
};

#endif //_PIECE_H