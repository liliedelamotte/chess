// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include <iostream>
#include <string>
#include <set>
#include "Game.h"
#include "Player.h"
#include "King.h"
#include "Pawn.h"
#include "Square.h"
#include "Board.h"
#include "Bishop.h"
#include "Rook.h"
#include "RestrictedPiece.h"
#include "Knight.h"
#include "Queen.h"

using namespace std;

Player* Game::player1;
Player* Game::player2;
Player* Game::currentPlayer;
set<Piece*> Game::whitePieces;
set<Piece*> Game::blackPieces;

const string BLACK = "B";
const string WHITE = "W";

void Game::initialize() {

//    string player1Name = "White";
//    string player2Name = "Black";
//
//    Board* board = board->getInstance();
//
//    // creates all the pieces
//    Rook whiteRook1 = Rook(&board->getSquareAt(0, 0), WHITE);
//    Rook whiteRook2 = Rook(&board->getSquareAt(7, 0), WHITE);
//    Knight whiteKnight1 = Knight(&board->getSquareAt(1, 0), WHITE);
//    Knight whiteKnight2 = Knight(&board->getSquareAt(6, 0), WHITE);
//    Bishop whiteBishop1 = Bishop(&board->getSquareAt(2, 0), WHITE);
//    Bishop whiteBishop2 = Bishop(&board->getSquareAt(5, 0), WHITE);
//    Queen whiteQueen = Queen(&board->getSquareAt(3, 0), WHITE);
//    King whiteKing = King(&board->getSquareAt(4, 0), WHITE);
//    Pawn whitePawn1 = Pawn(&board->getSquareAt(0, 1), WHITE);
//    Pawn whitePawn2 = Pawn(&board->getSquareAt(1, 1), WHITE);
//    Pawn whitePawn3 = Pawn(&board->getSquareAt(2, 1), WHITE);
//    Pawn whitePawn4 = Pawn(&board->getSquareAt(3, 1), WHITE);
//    Pawn whitePawn5 = Pawn(&board->getSquareAt(4, 1), WHITE);
//    Pawn whitePawn6 = Pawn(&board->getSquareAt(5, 1), WHITE);
//    Pawn whitePawn7 = Pawn(&board->getSquareAt(6, 1), WHITE);
//    Pawn whitePawn8 = Pawn(&board->getSquareAt(7, 1), WHITE);
//
//    Rook blackRook1 = Rook(&board->getSquareAt(0, 7), BLACK);
//    Rook blackRook2 = Rook(&board->getSquareAt(7, 7), BLACK);
//    Knight blackKnight1 = Knight(&board->getSquareAt(1, 7), BLACK);
//    Knight blackKnight2 = Knight(&board->getSquareAt(6, 7), BLACK);
//    Bishop blackBishop1 = Bishop(&board->getSquareAt(2, 7), BLACK);
//    Bishop blackBishop2 = Bishop(&board->getSquareAt(5, 7), BLACK);
//    Queen blackQueen = Queen(&board->getSquareAt(3, 7), BLACK);
//    King blackKing = King(&board->getSquareAt(4, 7), BLACK);
//    Pawn blackPawn1 = Pawn(&board->getSquareAt(0, 6), BLACK);
//    Pawn blackPawn2 = Pawn(&board->getSquareAt(1, 6), BLACK);
//    Pawn blackPawn3 = Pawn(&board->getSquareAt(2, 6), BLACK);
//    Pawn blackPawn4 = Pawn(&board->getSquareAt(3, 6), BLACK);
//    Pawn blackPawn5 = Pawn(&board->getSquareAt(4, 6), BLACK);
//    Pawn blackPawn6 = Pawn(&board->getSquareAt(5, 6), BLACK);
//    Pawn blackPawn7 = Pawn(&board->getSquareAt(6, 6), BLACK);
//    Pawn blackPawn8 = Pawn(&board->getSquareAt(7, 6), BLACK);
//
//    // adds pieces to corresponding set
//    blackPieces = {&blackRook1, &blackRook2, &blackKnight1, &blackKnight2,
//                   &blackBishop1, &blackBishop2, &blackQueen, &blackKing,
//                   &blackPawn1, &blackPawn2, &blackPawn3, &blackPawn4,
//                   &blackPawn5, &blackPawn6, &blackPawn7, &blackPawn8};
//
//    whitePieces = {&whiteRook1, &whiteRook2, &whiteKnight1, &whiteKnight2,
//                   &whiteBishop1, &whiteBishop2, &whiteQueen, &whiteKing,
//                   &whitePawn1, &whitePawn2, &whitePawn3, &whitePawn4,
//                   &whitePawn5, &whitePawn6, &whitePawn7, &whitePawn8};
//
//    cout << "Welcome to Chess!\n";
//
//    // todo: delete these
//    Player* p1 = new Player(player1Name, whiteKing, whitePieces);
//    Player* p2 = new Player(player2Name, blackKing, blackPieces);
//
//    player1 = p1;
//    player2 = p2;

}

void Game::playGame() {

    const string player1Name = "White";
    const string player2Name = "Black";

    Board* board = board->getInstance();

    // creates all the pieces
    Rook whiteRook1 = Rook(&board->getSquareAt(0, 0), WHITE);
    Rook whiteRook2 = Rook(&board->getSquareAt(7, 0), WHITE);
    Knight whiteKnight1 = Knight(&board->getSquareAt(1, 0), WHITE);
    Knight whiteKnight2 = Knight(&board->getSquareAt(6, 0), WHITE);
    Bishop whiteBishop1 = Bishop(&board->getSquareAt(2, 0), WHITE);
    Bishop whiteBishop2 = Bishop(&board->getSquareAt(5, 0), WHITE);
    Queen whiteQueen = Queen(&board->getSquareAt(3, 0), WHITE);
    King whiteKing = King(&board->getSquareAt(4, 0), WHITE);
    Pawn whitePawn1 = Pawn(&board->getSquareAt(0, 1), WHITE);
    Pawn whitePawn2 = Pawn(&board->getSquareAt(1, 1), WHITE);
    Pawn whitePawn3 = Pawn(&board->getSquareAt(2, 1), WHITE);
    Pawn whitePawn4 = Pawn(&board->getSquareAt(3, 1), WHITE);
    Pawn whitePawn5 = Pawn(&board->getSquareAt(4, 1), WHITE);
    Pawn whitePawn6 = Pawn(&board->getSquareAt(5, 1), WHITE);
    Pawn whitePawn7 = Pawn(&board->getSquareAt(6, 1), WHITE);
    Pawn whitePawn8 = Pawn(&board->getSquareAt(7, 1), WHITE);

    Rook blackRook1 = Rook(&board->getSquareAt(0, 7), BLACK);
    Rook blackRook2 = Rook(&board->getSquareAt(7, 7), BLACK);
    Knight blackKnight1 = Knight(&board->getSquareAt(1, 7), BLACK);
    Knight blackKnight2 = Knight(&board->getSquareAt(6, 7), BLACK);
    Bishop blackBishop1 = Bishop(&board->getSquareAt(2, 7), BLACK);
    Bishop blackBishop2 = Bishop(&board->getSquareAt(5, 7), BLACK);
    Queen blackQueen = Queen(&board->getSquareAt(3, 7), BLACK);
    King blackKing = King(&board->getSquareAt(4, 7), BLACK);
    Pawn blackPawn1 = Pawn(&board->getSquareAt(0, 6), BLACK);
    Pawn blackPawn2 = Pawn(&board->getSquareAt(1, 6), BLACK);
    Pawn blackPawn3 = Pawn(&board->getSquareAt(2, 6), BLACK);
    Pawn blackPawn4 = Pawn(&board->getSquareAt(3, 6), BLACK);
    Pawn blackPawn5 = Pawn(&board->getSquareAt(4, 6), BLACK);
    Pawn blackPawn6 = Pawn(&board->getSquareAt(5, 6), BLACK);
    Pawn blackPawn7 = Pawn(&board->getSquareAt(6, 6), BLACK);
    Pawn blackPawn8 = Pawn(&board->getSquareAt(7, 6), BLACK);

    blackPieces = {&blackRook1, &blackRook2, &blackKnight1, &blackKnight2,
                   &blackBishop1, &blackBishop2, &blackQueen, &blackKing,
                   &blackPawn1, &blackPawn2, &blackPawn3, &blackPawn4,
                   &blackPawn5, &blackPawn6, &blackPawn7, &blackPawn8};

    whitePieces = {&whiteRook1, &whiteRook2, &whiteKnight1, &whiteKnight2,
                   &whiteBishop1, &whiteBishop2, &whiteQueen, &whiteKing,
                   &whitePawn1, &whitePawn2, &whitePawn3, &whitePawn4,
                   &whitePawn5, &whitePawn6, &whitePawn7, &whitePawn8};

    Player* p1 = new Player(player1Name, whiteKing, whitePieces);
    Player* p2 = new Player(player2Name, blackKing, blackPieces);

    player1 = p1;
    player2 = p2;

    currentPlayer = player1;

    board->display();

    for(int i = 0; i < 10; i++) {

        currentPlayer->makeMove();
        board->display();
        currentPlayer = &getNextPlayer();

    }
}

Player& Game::getNextPlayer() {
    return getOpponentOf(*currentPlayer);
}

Player& Game::getOpponentOf(Player& player) {
    Player* opponent = player1;

    if (&player == player1) {
        opponent = player2;
    }

    return *opponent;
}

void Game::endGame() {
    cout << "\nThanks for playing!";
    /* todo */
}