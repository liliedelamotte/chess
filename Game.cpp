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

// // #define BLACK = "B";
const string BLACK = "B";
const string WHITE = "W";

void Game::initialize() {
    /* todo */
    string name1;
    string name2;
    set<Piece*> whitePieces;
    set<Piece*> blackPieces;
    Board* board;

//    cout << "Enter the name of the first player: ";
//    cin >> name1;
//    cout << "Enter the name of the second player: ";
//    cin >> name2;

    board = board->getInstance();

    // todo is all this in the right place?
//    // gets the squares where all pieces are to be located
//    Square blackRook1Square = board->getSquareAt(0, 0);
//    Square blackRook2Square = board->getSquareAt(0, 7);
//    Square blackKnight1Square = board->getSquareAt(0, 1);
//    Square blackKnight2Square = board->getSquareAt(0, 6);
//    Square blackBishop1Square = board->getSquareAt(0, 2);
//    Square blackBishop2Square = board->getSquareAt(0, 5);
//    Square blackQueenSquare = board->getSquareAt(0, 3);
//    Square blackKingSquare = board->getSquareAt(0, 4);
//    Square blackPawn1Square = board->getSquareAt(1, 0);
//    Square blackPawn2Square = board->getSquareAt(1, 1);
//    Square blackPawn3Square = board->getSquareAt(1, 2);
//    Square blackPawn4Square = board->getSquareAt(1, 3);
//    Square blackPawn5Square = board->getSquareAt(1, 4);
//    Square blackPawn6Square = board->getSquareAt(1, 5);
//    Square blackPawn7Square = board->getSquareAt(1, 6);
//    Square blackPawn8Square = board->getSquareAt(1, 7);
//
//    Square whiteRook1Square = board->getSquareAt(7, 0);
//    Square whiteRook2Square = board->getSquareAt(7, 7);
//    Square whiteKnight1Square = board->getSquareAt(7, 1);
//    Square whiteKnight2Square = board->getSquareAt(7, 6);
//    Square whiteBishop1Square = board->getSquareAt(7, 2);
//    Square whiteBishop2Square = board->getSquareAt(2, 5);
//    Square whiteQueenSquare = board->getSquareAt(7, 4);
//    Square whiteKingSquare = board->getSquareAt(7, 3);
//    Square whitePawn1Square = board->getSquareAt(6, 0);
//    Square whitePawn2Square = board->getSquareAt(6, 1);
//    Square whitePawn3Square = board->getSquareAt(6, 2);
//    Square whitePawn4Square = board->getSquareAt(6, 3);
//    Square whitePawn5Square = board->getSquareAt(6, 4);
//    Square whitePawn6Square = board->getSquareAt(6, 5);
//    Square whitePawn7Square = board->getSquareAt(6, 6);
//    Square whitePawn8Square = board->getSquareAt(6, 7);


    // todo change 'new' if possible
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
//
//
//    // adds pieces to corresponding set
//    blackPieces.insert(blackRook1);
//    blackPieces.insert(blackRook2);
//    blackPieces.insert(blackKnight1);
//    blackPieces.insert(blackKnight2);
//    blackPieces.insert(blackBishop1);
//    blackPieces.insert(blackBishop2);
//    blackPieces.insert(blackQueen);
//    blackPieces.insert(blackKing);
//    blackPieces.insert(blackPawn1);
//    blackPieces.insert(blackPawn2);
//    blackPieces.insert(blackPawn3);
//    blackPieces.insert(blackPawn4);
//    blackPieces.insert(blackPawn5);
//    blackPieces.insert(blackPawn6);
//    blackPieces.insert(blackPawn7);
//    blackPieces.insert(blackPawn8);
//
//    whitePieces.insert(whiteRook1);
//    whitePieces.insert(whiteRook2);
//    whitePieces.insert(whiteKnight1);
//    whitePieces.insert(whiteKnight2);
//    whitePieces.insert(whiteBishop1);
//    whitePieces.insert(whiteBishop2);
//    whitePieces.insert(whiteQueen);
//    whitePieces.insert(whiteKing);
//    whitePieces.insert(whitePawn1);
//    whitePieces.insert(whitePawn2);
//    whitePieces.insert(whitePawn3);
//    whitePieces.insert(whitePawn4);
//    whitePieces.insert(whitePawn5);
//    whitePieces.insert(whitePawn6);
//    whitePieces.insert(whitePawn7);
//    whitePieces.insert(whitePawn8);

    board->display();

}

Player& Game::getNextPlayer() {
    /* todo */
//    return nullptr;
}

Player& Game::getOpponentOf(Player& player) {
    /* todo */
//    return nullptr;
}