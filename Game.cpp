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

const string BLACK = "B";
const string WHITE = "W";

void Game::initialize() {
    /* todo */

    set<Piece*> whitePieces;
    set<Piece*> blackPieces;
    Board* board = nullptr;

    board = board->getInstance();

    // note that I plan on deleting each piece after it
    // has been captured, it is just not implemented yet

    // creates all the pieces
    Piece *blackRook1 = new Rook(&board->getSquareAt(0, 0), BLACK);
    Piece *blackRook2 = new Rook(&board->getSquareAt(0, 7), BLACK);
    Piece *blackKnight1 = new Knight(&board->getSquareAt(0, 1), BLACK);
    Piece *blackKnight2 = new Knight(&board->getSquareAt(0, 6), BLACK);
    Piece *blackBishop1 = new Bishop(&board->getSquareAt(0, 2), BLACK);
    Piece *blackBishop2 = new Bishop(&board->getSquareAt(0, 5), BLACK);
    Piece *blackQueen = new Queen(&board->getSquareAt(0, 4), BLACK);
    Piece *blackKing = new King(&board->getSquareAt(0, 3), BLACK);
    Piece *blackPawn1 = new Pawn(&board->getSquareAt(1, 0), BLACK);
    Piece *blackPawn2 = new Pawn(&board->getSquareAt(1, 1), BLACK);
    Piece *blackPawn3 = new Pawn(&board->getSquareAt(1, 2), BLACK);
    Piece *blackPawn4 = new Pawn(&board->getSquareAt(1, 3), BLACK);
    Piece *blackPawn5 = new Pawn(&board->getSquareAt(1, 4), BLACK);
    Piece *blackPawn6 = new Pawn(&board->getSquareAt(1, 5), BLACK);
    Piece *blackPawn7 = new Pawn(&board->getSquareAt(1, 6), BLACK);
    Piece *blackPawn8 = new Pawn(&board->getSquareAt(1, 7), BLACK);

    Piece *whiteRook1 = new Rook(&board->getSquareAt(7, 0), WHITE);
    Piece *whiteRook2 = new Rook(&board->getSquareAt(7, 7), WHITE);
    Piece *whiteKnight1 = new Knight(&board->getSquareAt(7, 1), WHITE);
    Piece *whiteKnight2 = new Knight(&board->getSquareAt(7, 6), WHITE);
    Piece *whiteBishop1 = new Bishop(&board->getSquareAt(7, 2), WHITE);
    Piece *whiteBishop2 = new Bishop(&board->getSquareAt(7, 5), WHITE);
    Piece *whiteQueen = new Queen(&board->getSquareAt(7, 3), WHITE);
    Piece *whiteKing = new King(&board->getSquareAt(7, 4), WHITE);
    Piece *whitePawn1 = new Pawn(&board->getSquareAt(6, 0), WHITE);
    Piece *whitePawn2 = new Pawn(&board->getSquareAt(6, 1), WHITE);
    Piece *whitePawn3 = new Pawn(&board->getSquareAt(6, 2), WHITE);
    Piece *whitePawn4 = new Pawn(&board->getSquareAt(6, 3), WHITE);
    Piece *whitePawn5 = new Pawn(&board->getSquareAt(6, 4), WHITE);
    Piece *whitePawn6 = new Pawn(&board->getSquareAt(6, 5), WHITE);
    Piece *whitePawn7 = new Pawn(&board->getSquareAt(6, 6), WHITE);
    Piece *whitePawn8 = new Pawn(&board->getSquareAt(6, 7), WHITE);

    board->display();

    // adds pieces to corresponding set
    blackPieces.insert(blackRook1);
    blackPieces.insert(blackRook2);
    blackPieces.insert(blackKnight1);
    blackPieces.insert(blackKnight2);
    blackPieces.insert(blackBishop1);
    blackPieces.insert(blackBishop2);
    blackPieces.insert(blackQueen);
    blackPieces.insert(blackKing);
    blackPieces.insert(blackPawn1);
    blackPieces.insert(blackPawn2);
    blackPieces.insert(blackPawn3);
    blackPieces.insert(blackPawn4);
    blackPieces.insert(blackPawn5);
    blackPieces.insert(blackPawn6);
    blackPieces.insert(blackPawn7);
    blackPieces.insert(blackPawn8);

    whitePieces.insert(whiteRook1);
    whitePieces.insert(whiteRook2);
    whitePieces.insert(whiteKnight1);
    whitePieces.insert(whiteKnight2);
    whitePieces.insert(whiteBishop1);
    whitePieces.insert(whiteBishop2);
    whitePieces.insert(whiteQueen);
    whitePieces.insert(whiteKing);
    whitePieces.insert(whitePawn1);
    whitePieces.insert(whitePawn2);
    whitePieces.insert(whitePawn3);
    whitePieces.insert(whitePawn4);
    whitePieces.insert(whitePawn5);
    whitePieces.insert(whitePawn6);
    whitePieces.insert(whitePawn7);
    whitePieces.insert(whitePawn8);

}

Player& Game::getNextPlayer() {
    /* todo */
//    return nullptr;
}

Player& Game::getOpponentOf(Player& player) {
    /* todo */
//    return nullptr;
}