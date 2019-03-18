// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#include <iostream>
#include <string>
#include "Game.h"
#include "Player.h"
#include "King.h"
#include "Pawn.h"
#include "Square.h"
#include "Board.h"
#include "Bishop.h"

using namespace std;

const string BLACK = "BLACK";
const string WHITE = "WHITE";

void Game::initialize() {
    /* todo */
    string name1;
    string name2;

    cout << "Enter the name of the first player: ";
    cin >> name1;
    cout << "Enter the name of the second player: ";
    cin >> name2;

    Board* board = board->getInstance();

    Square blackRook1Square = board->getSquareAt(0, 0);
    Square blackRook2Square = board->getSquareAt(7, 0);
    Square blackKnight1Square = board->getSquareAt(1, 0);
    Square blackKnight2Square = board->getSquareAt(6, 0);
    Square blackBishop1Square = board->getSquareAt(2, 0);
    Square blackBishop2Square = board->getSquareAt(5, 0);
    Square blackQueenSquare = board->getSquareAt(3, 0);
    Square blackKingSquare = board->getSquareAt(4, 0);
    Square blackPawn1 = board->getSquareAt(0, 1);
    Square blackPawn2 = board->getSquareAt(1, 1);
    Square blackPawn3 = board->getSquareAt(2, 1);
    Square blackPawn4 = board->getSquareAt(3, 1);
    Square blackPawn5 = board->getSquareAt(4, 1);
    Square blackPawn6 = board->getSquareAt(5, 1);
    Square blackPawn7 = board->getSquareAt(6, 1);
    Square blackPawn8 = board->getSquareAt(7, 1);

    Square whiteRook1Square = board->getSquareAt(0, 7);
    Square whiteRook2Square = board->getSquareAt(7, 7);
    Square whiteKnight1Square = board->getSquareAt(1, 7);
    Square whiteKnight2Square = board->getSquareAt(6, 7);
    Square whiteBishop1Square = board->getSquareAt(2, 7);
    Square whiteBishop2Square = board->getSquareAt(5, 2);
    Square whiteQueenSquare = board->getSquareAt(4, 7);
    Square whiteKingSquare = board->getSquareAt(3, 7);
    Square whitePawn1 = board->getSquareAt(0, 6);
    Square whitePawn2 = board->getSquareAt(1, 6);
    Square whitePawn3 = board->getSquareAt(2, 6);
    Square whitePawn4 = board->getSquareAt(3, 6);
    Square whitePawn5 = board->getSquareAt(4, 6);
    Square whitePawn6 = board->getSquareAt(5, 6);
    Square whitePawn7 = board->getSquareAt(6, 6);
    Square whitePawn8 = board->getSquareAt(7, 6);

    Piece *whiteBishop1 = new Bishop(&whiteBishop1Square, WHITE);
    Piece *whiteBishop2 = new Bishop(&whiteBishop2Square, WHITE);

    // todo create all pieces
    // todo add pieces to corresponding set

    // todo create board
    // todo create squares
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