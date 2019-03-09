// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19

#ifndef _GAME_H
#define _GAME_H

class Game {
public: 
    
static void initialize();
    
static Player& getNextPlayer();
    
/**
 * @param player
 */
static Player& getOpponentOf(Player& player);
};

#endif //_GAME_H