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

    Board* board = board->getInstance();

    // creates all the pieces
//    Rook whiteRook1 = Rook(&board->getSquareAt(7, 0), WHITE);
//    Rook whiteRook2 = Rook(&board->getSquareAt(7, 7), WHITE);
//    Knight whiteKnight1 = Knight(&board->getSquareAt(7, 1), WHITE);
//    Knight whiteKnight2 = Knight(&board->getSquareAt(7, 6), WHITE);
//    Bishop whiteBishop1 = Bishop(&board->getSquareAt(7, 2), WHITE);
//    Bishop whiteBishop2 = Bishop(&board->getSquareAt(7, 5), WHITE);
//    Queen whiteQueen = Queen(&board->getSquareAt(7, 3), WHITE);
//    King whiteKing = King(&board->getSquareAt(7, 4), WHITE);
//    Pawn whitePawn1 = Pawn(&board->getSquareAt(6, 0), WHITE);
//    Pawn whitePawn2 = Pawn(&board->getSquareAt(6, 1), WHITE);
//    Pawn whitePawn3 = Pawn(&board->getSquareAt(6, 2), WHITE);
//    Pawn whitePawn4 = Pawn(&board->getSquareAt(6, 3), WHITE);
//    Pawn whitePawn5 = Pawn(&board->getSquareAt(6, 4), WHITE);
//    Pawn whitePawn6 = Pawn(&board->getSquareAt(6, 5), WHITE);
//    Pawn whitePawn7 = Pawn(&board->getSquareAt(6, 6), WHITE);
//    Pawn whitePawn8 = Pawn(&board->getSquareAt(6, 7), WHITE);
//
//    Rook blackRook1 = Rook(&board->getSquareAt(0, 0), BLACK);
//    Rook blackRook2 = Rook(&board->getSquareAt(0, 7), BLACK);
//    Knight blackKnight1 = Knight(&board->getSquareAt(0, 1), BLACK);
//    Knight blackKnight2 = Knight(&board->getSquareAt(0, 6), BLACK);
//    Bishop blackBishop1 = Bishop(&board->getSquareAt(0, 2), BLACK);
//    Bishop blackBishop2 = Bishop(&board->getSquareAt(0, 5), BLACK);
//    Queen blackQueen = Queen(&board->getSquareAt(0, 3), BLACK);
//    King blackKing = King(&board->getSquareAt(0, 4), BLACK);
//    Pawn blackPawn1 = Pawn(&board->getSquareAt(1, 0), BLACK);
//    Pawn blackPawn2 = Pawn(&board->getSquareAt(1, 1), BLACK);
//    Pawn blackPawn3 = Pawn(&board->getSquareAt(1, 2), BLACK);
//    Pawn blackPawn4 = Pawn(&board->getSquareAt(1, 3), BLACK);
//    Pawn blackPawn5 = Pawn(&board->getSquareAt(1, 4), BLACK);
//    Pawn blackPawn6 = Pawn(&board->getSquareAt(1, 5), BLACK);
//    Pawn blackPawn7 = Pawn(&board->getSquareAt(1, 6), BLACK);
//    Pawn blackPawn8 = Pawn(&board->getSquareAt(1, 7), BLACK);

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

    // adds pieces to corresponding set
//    blackPieces = {&blackRook1, &blackRook2, &blackKnight1, &blackKnight2,
//                   &blackBishop1, &blackBishop2, &blackQueen, &blackKing,
//                   &blackPawn1, &blackPawn2, &blackPawn3, &blackPawn4,
//                   &blackPawn5, &blackPawn6, &blackPawn7, &blackPawn8};
//
//    whitePieces = {&whiteRook1, &whiteRook2, &whiteKnight1, &whiteKnight2,
//                   &whiteBishop1, &whiteBishop2, &whiteQueen, &whiteKing,
//                   &whitePawn1, &whitePawn2, &whitePawn3, &whitePawn4,
//                   &whitePawn5, &whitePawn6, &whitePawn7, &whitePawn8};

    cout << "Welcome to Chess!\n";

    // todo: delete these
//    Player* p1 = new Player(player1Name, whiteKing, whitePieces);
//    Player* p2 = new Player(player2Name, blackKing, blackPieces);
//
//    player1 = p1;
//    player2 = p2;

}

void Game::playGame() {

    const string player1Name = "White";
    const string player2Name = "Black";

    bool validMove;
    bool validStartingRank;
    bool validStartingFile;
    bool validEndingRank;
    bool validEndingFile;
    string startingLocation;
    string endingLocation;
    int startingRank;
    int startingFile;
    int endingRank;
    int endingFile;
    Piece* pieceToMove;
    Square startingSquare;
    Square endingSquare;
    set<char> validFiles = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

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

        validMove = false;

        while (!validMove) {

            // resets all variables to ensure proper move validation
            validStartingFile = true;
            validStartingRank = true;
            validEndingFile = true;
            validEndingRank = true;

            // gets the players move
            cout << currentPlayer->getName() << ", enter your move: ";
            cin >> startingLocation >> endingLocation;

            // accesses the starting an ending file from input
            startingRank = (int)startingLocation[1] - '0';
            endingRank = (int)endingLocation[1] - '0';

            // todo I should probably check for extra characters and whitespace
            // checks that both ranks and files are actually on the board
            if (!validFiles.count(startingLocation[0])) {
                validStartingFile = false;
            }
            if (!validFiles.count(endingLocation[0])) {
                validEndingFile = false;
            }
            if (startingRank < 1 || startingRank > 8) {
                validStartingRank = false;
            }
            if (endingRank < 1 || endingRank > 8) {
                validEndingRank = false;
            }

            if (validStartingFile && validEndingFile && validStartingRank && validEndingRank ) {

                // changes the alphabetical rank to a numerical one
                if (startingLocation[0] == 'a') {
                    startingFile = 0;
                }
                else if (startingLocation[0] == 'b') {
                    startingFile = 1;
                }
                else if (startingLocation[0] == 'c') {
                    startingFile = 2;
                }
                else if (startingLocation[0] == 'd') {
                    startingFile = 3;
                }
                else if (startingLocation[0] == 'e') {
                    startingFile = 4;
                }
                else if (startingLocation[0] == 'f') {
                    startingFile = 5;
                }
                else if (startingLocation[0] == 'g') {
                    startingFile = 6;
                }
                else if (startingLocation[0] == 'h') {
                    startingFile = 7;
                }

                if (endingLocation[0] == 'a') {
                    endingFile = 0;
                }
                else if (endingLocation[0] == 'b') {
                    endingFile = 1;
                }
                else if (endingLocation[0] == 'c') {
                    endingFile = 2;
                }
                else if (endingLocation[0] == 'd') {
                    endingFile = 3;
                }
                else if (endingLocation[0] == 'e') {
                    endingFile = 4;
                }
                else if (endingLocation[0] == 'f') {
                    endingFile = 5;
                }
                else if (endingLocation[0] == 'g') {
                    endingFile = 6;
                }
                else if (endingLocation[0] == 'h') {
                    endingFile = 7;
                }

                // todo revert these
                startingSquare = board->getSquareAt(startingFile, startingRank - 1);
                endingSquare = board->getSquareAt(endingFile, endingRank - 1);
                pieceToMove = startingSquare.getOccupant();
                cout << "occupant: " << startingSquare.getOccupant()->getColor() << startingSquare.getOccupant()->toString() << endl;

                cout << "hello";

                // checks to see if there is actually a piece at the starting location
                if (!startingSquare.isOccupied()) {
                    validStartingFile = false;
                    cout << "sup1";
                }
                cout << "so far so good";
                // checks to see that the piece the player wants to move is actually their own
                if (startingSquare.getOccupant()->getColor() != currentPlayer->getKing().getColor()) {
                    validStartingFile = false;
                    cout << "sup2";
                }
                cout << "also good";
                // calls the Piece's own method to see if it can legally
                // move to that space based on the kind of Piece that it is
                if (!pieceToMove->canMoveTo(endingSquare)) {
                    validEndingFile = false;
                    cout << "sup3";
                }

            }

            validMove = validStartingRank && validEndingRank && validStartingFile && validEndingFile;
            if (!validMove) {
                cout << "Invalid move." << endl;
            }

        }

        // removes the captured Piece (if any) from the owner's set as well as from the board
        if (endingSquare.isOccupied()) {
            getOpponentOf(*currentPlayer).getPieces().erase(endingSquare.getOccupant());
            endingSquare.setOccupant(nullptr);
        }

        // moves the Piece chosen to its destination
        board->getSquareAt(startingFile, startingRank).getOccupant()->setLocation(&board->getSquareAt(endingFile, endingRank));

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