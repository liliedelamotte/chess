// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _PLAYER_H
#define _PLAYER_H

class Player {
public: 
    
/**
 * @param name
 * @param king
 * @param pieces
 */
void Player(string name, King& king, set<Piece*>& pieces);
    
string getName();
    
King& getKing();
    
set<Piece*>& getPieces();
    
boolean makeMove();
    
/**
 * @param piece
 */
void capture(Piece& piece);
    
int calculateScore();
private: 
    string name;
};

#endif //_PLAYER_H