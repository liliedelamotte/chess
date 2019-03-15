// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include <string>
#include "Game.h"
#include "Player.h"
#include "King.h"

using namespace std;

void Game::initialize() {
    /* todo */
    string name1;
    string name2;

    cout << "Enter the name of the first player: ";
    cin >> name1;
    cout << "Enter the name of the second player: ";
    cin >> name2;

    // todo create all pieces
    // todo add pieces to corresponding set
    // todo also place pieces on the board somehow

}

Player& Game::getNextPlayer() {
    /* todo */
//    return nullptr;
}

Player& Game::getOpponentOf(Player& player) {
    /* todo */
//    return nullptr;
}