// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _SQUARE_H
#define _SQUARE_H

#include "Piece.h"


class Square {
public: 
    
/**
 * @param rank
 * @param file
 */
void Square(int rank, int file);
    
int getRank();
    
int getFile();
    
boolean isOccupied();
    
Piece* getOccupant();
    
/**
 * @param occupant
 */
void setOccupant(Piece* occupant);
private: 
    int rank;
    int file;
    Piece location;
};

#endif //_SQUARE_H