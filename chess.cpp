// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23

#include "Game.h"

using namespace std;

int main(int argc, char* argv[]) {

    set<Piece*> whitePieces;
    set<Piece*> blackPieces;

    Game::initialize(whitePieces, blackPieces);

    Game::endGame(whitePieces, blackPieces);

    return 0;

}