// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


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

const string BLACK = "BLACK";
const string WHITE = "WHITE";

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

    // gets the squares where all pieces are to be located
    Square blackRook1Square = board->getSquareAt(0, 0);
    Square blackRook2Square = board->getSquareAt(7, 0);
    Square blackKnight1Square = board->getSquareAt(1, 0);
    Square blackKnight2Square = board->getSquareAt(6, 0);
    Square blackBishop1Square = board->getSquareAt(2, 0);
    Square blackBishop2Square = board->getSquareAt(5, 0);
    Square blackQueenSquare = board->getSquareAt(3, 0);
    Square blackKingSquare = board->getSquareAt(4, 0);
    Square blackPawn1Square = board->getSquareAt(0, 1);
    Square blackPawn2Square = board->getSquareAt(1, 1);
    Square blackPawn3Square = board->getSquareAt(2, 1);
    Square blackPawn4Square = board->getSquareAt(3, 1);
    Square blackPawn5Square = board->getSquareAt(4, 1);
    Square blackPawn6Square = board->getSquareAt(5, 1);
    Square blackPawn7Square = board->getSquareAt(6, 1);
    Square blackPawn8Square = board->getSquareAt(7, 1);

    Square whiteRook1Square = board->getSquareAt(0, 7);
    Square whiteRook2Square = board->getSquareAt(7, 7);
    Square whiteKnight1Square = board->getSquareAt(1, 7);
    Square whiteKnight2Square = board->getSquareAt(6, 7);
    Square whiteBishop1Square = board->getSquareAt(2, 7);
    Square whiteBishop2Square = board->getSquareAt(5, 2);
    Square whiteQueenSquare = board->getSquareAt(4, 7);
    Square whiteKingSquare = board->getSquareAt(3, 7);
    Square whitePawn1Square = board->getSquareAt(0, 6);
    Square whitePawn2Square = board->getSquareAt(1, 6);
    Square whitePawn3Square = board->getSquareAt(2, 6);
    Square whitePawn4Square = board->getSquareAt(3, 6);
    Square whitePawn5Square = board->getSquareAt(4, 6);
    Square whitePawn6Square = board->getSquareAt(5, 6);
    Square whitePawn7Square = board->getSquareAt(6, 6);
    Square whitePawn8Square = board->getSquareAt(7, 6);

    // creates all the pieces
    Piece *blackRook1 = new Rook(&blackRook1Square, BLACK);
    Piece *blackRook2 = new Rook(&blackRook2Square, BLACK);
    Piece *blackKnight1 = new Knight(&blackKnight1Square, BLACK);
    Piece *blackKnight2 = new Knight(&blackKnight2Square, BLACK);
    Piece *blackBishop1 = new Bishop(&blackBishop1Square, BLACK);
    Piece *blackBishop2 = new Bishop(&blackBishop2Square, BLACK);
    Piece *blackQueen = new Queen(&blackQueenSquare, BLACK);
    Piece *blackKing = new King(&blackKingSquare, BLACK);
    Piece *blackPawn1 = new Pawn(&blackPawn1Square, BLACK);
    Piece *blackPawn2 = new Pawn(&blackPawn2Square, BLACK);
    Piece *blackPawn3 = new Pawn(&blackPawn3Square, BLACK);
    Piece *blackPawn4 = new Pawn(&blackPawn4Square, BLACK);
    Piece *blackPawn5 = new Pawn(&blackPawn5Square, BLACK);
    Piece *blackPawn6 = new Pawn(&blackPawn6Square, BLACK);
    Piece *blackPawn7 = new Pawn(&blackPawn7Square, BLACK);
    Piece *blackPawn8 = new Pawn(&blackPawn8Square, BLACK);

    Piece *whiteRook1 = new Rook(&whiteRook1Square, WHITE);
    Piece *whiteRook2 = new Rook(&whiteRook2Square, WHITE);
    Piece *whiteKnight1 = new Knight(&whiteKnight1Square, WHITE);
    Piece *whiteKnight2 = new Knight(&whiteKnight2Square, WHITE);
    Piece *whiteBishop1 = new Bishop(&whiteBishop1Square, WHITE);
    Piece *whiteBishop2 = new Bishop(&whiteBishop2Square, WHITE);
    Piece *whiteQueen = new Queen(&whiteQueenSquare, WHITE);
    Piece *whiteKing = new King(&whiteKingSquare, WHITE);
    Piece *whitePawn1 = new Pawn(&whitePawn1Square, WHITE);
    Piece *whitePawn2 = new Pawn(&whitePawn2Square, WHITE);
    Piece *whitePawn3 = new Pawn(&whitePawn3Square, WHITE);
    Piece *whitePawn4 = new Pawn(&whitePawn4Square, WHITE);
    Piece *whitePawn5 = new Pawn(&whitePawn5Square, WHITE);
    Piece *whitePawn6 = new Pawn(&whitePawn6Square, WHITE);
    Piece *whitePawn7 = new Pawn(&whitePawn7Square, WHITE);
    Piece *whitePawn8 = new Pawn(&whitePawn8Square, WHITE);

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

    board->display();
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