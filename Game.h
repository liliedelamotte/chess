/**
 * Project Chess
 * @author Brian R. Snider
 */


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