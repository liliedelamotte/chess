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

    string player1Name;
    string player2Name;

    Board* board = board->getInstance();

    // creates all the pieces
    Rook whiteRook1 = Rook(&board->getSquareAt(7, 0), WHITE);
    Rook whiteRook2 = Rook(&board->getSquareAt(7, 7), WHITE);
    Knight whiteKnight1 = Knight(&board->getSquareAt(7, 1), WHITE);
    Knight whiteKnight2 = Knight(&board->getSquareAt(7, 6), WHITE);
    Bishop whiteBishop1 = Bishop(&board->getSquareAt(7, 2), WHITE);
    Bishop whiteBishop2 = Bishop(&board->getSquareAt(7, 5), WHITE);
    Queen whiteQueen = Queen(&board->getSquareAt(7, 3), WHITE);
    King whiteKing = King(&board->getSquareAt(7, 4), WHITE);
    Pawn whitePawn1 = Pawn(&board->getSquareAt(6, 0), WHITE);
    Pawn whitePawn2 = Pawn(&board->getSquareAt(6, 1), WHITE);
    Pawn whitePawn3 = Pawn(&board->getSquareAt(6, 2), WHITE);
    Pawn whitePawn4 = Pawn(&board->getSquareAt(6, 3), WHITE);
    Pawn whitePawn5 = Pawn(&board->getSquareAt(6, 4), WHITE);
    Pawn whitePawn6 = Pawn(&board->getSquareAt(6, 5), WHITE);
    Pawn whitePawn7 = Pawn(&board->getSquareAt(6, 6), WHITE);
    Pawn whitePawn8 = Pawn(&board->getSquareAt(6, 7), WHITE);

    Rook blackRook1 = Rook(&board->getSquareAt(0, 0), BLACK);
    Rook blackRook2 = Rook(&board->getSquareAt(0, 7), BLACK);
    Knight blackKnight1 = Knight(&board->getSquareAt(0, 1), BLACK);
    Knight blackKnight2 = Knight(&board->getSquareAt(0, 6), BLACK);
    Bishop blackBishop1 = Bishop(&board->getSquareAt(0, 2), BLACK);
    Bishop blackBishop2 = Bishop(&board->getSquareAt(0, 5), BLACK);
    Queen blackQueen = Queen(&board->getSquareAt(0, 3), BLACK);
    King blackKing = King(&board->getSquareAt(0, 4), BLACK);
    Pawn blackPawn1 = Pawn(&board->getSquareAt(1, 0), BLACK);
    Pawn blackPawn2 = Pawn(&board->getSquareAt(1, 1), BLACK);
    Pawn blackPawn3 = Pawn(&board->getSquareAt(1, 2), BLACK);
    Pawn blackPawn4 = Pawn(&board->getSquareAt(1, 3), BLACK);
    Pawn blackPawn5 = Pawn(&board->getSquareAt(1, 4), BLACK);
    Pawn blackPawn6 = Pawn(&board->getSquareAt(1, 5), BLACK);
    Pawn blackPawn7 = Pawn(&board->getSquareAt(1, 6), BLACK);
    Pawn blackPawn8 = Pawn(&board->getSquareAt(1, 7), BLACK);

    // adds pieces to corresponding set
    blackPieces = {&blackRook1, &blackRook2, &blackKnight1, &blackKnight2,
                   &blackBishop1, &blackBishop2, &blackQueen, &blackKing,
                   &blackPawn1, &blackPawn2, &blackPawn3, &blackPawn4,
                   &blackPawn5, &blackPawn6, &blackPawn7, &blackPawn8};

    whitePieces = {&whiteRook1, &whiteRook2, &whiteKnight1, &whiteKnight2,
                   &whiteBishop1, &whiteBishop2, &whiteQueen, &whiteKing,
                   &whitePawn1, &whitePawn2, &whitePawn3, &whitePawn4,
                   &whitePawn5, &whitePawn6, &whitePawn7, &whitePawn8};

    cout << "Welcome to Chess!\nWhat is Player One's name?\n";
    cin >> player1Name;
    cout << "What is Player Two's name?\n";
    cin >> player2Name;

    Player p1 = Player(player1Name, whiteKing, whitePieces);
    Player p2 = Player(player2Name, blackKing, blackPieces);

    player1 = &p1;
    player2 = &p2;

}

void Game::playGame() {

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
    set<char> validRanks = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    currentPlayer = player1;

    Board* board = board->getInstance();

    for(int i = 0; i < 10; i++) {

        validMove = false;

        while (!validMove) {

            // resets all variables to ensure proper move validation
            validStartingRank = true;
            validStartingFile = true;
            validEndingRank = true;
            validEndingFile = true;

            // gets the players move
            cout << currentPlayer->getName() << ", enter your move: ";
            cin >> startingLocation >> endingLocation;

            // accesses the starting an ending file from input
            startingFile = startingLocation[1];
            endingFile = endingLocation[1];

            // todo I should probably check for extra characters and whitespace
            // checks that both ranks and files are actually on the board
            if (!validRanks.count(startingLocation[0])) {
                validStartingRank = false;
            }
            if (!validRanks.count(endingLocation[0])) {
                validEndingRank = false;
            }
            if (startingFile < 1 || startingFile > 8) {
                validStartingFile = false;
            }
            if (endingFile < 1 || endingFile > 8) {
                validEndingFile = false;
            }

            if (validStartingRank && validEndingRank && validStartingFile && validEndingFile) {

                // changes the alphabetical rank to a numerical one
                if (startingLocation[0] == 'a') {
                    startingRank = 1;
                }
                else if (startingLocation[0] == 'b') {
                    startingRank = 2;
                }
                else if (startingLocation[0] == 'c') {
                    startingRank = 3;
                }
                else if (startingLocation[0] == 'd') {
                    startingRank = 4;
                }
                else if (startingLocation[0] == 'e') {
                    startingRank = 5;
                }
                else if (startingLocation[0] == 'f') {
                    startingRank = 6;
                }
                else if (startingLocation[0] == 'g') {
                    startingRank = 7;
                }
                else if (startingLocation[0] == 'h') {
                    startingRank = 8;
                }

                if (endingLocation[0] == 'a') {
                    endingRank = 1;
                }
                else if (endingLocation[0] == 'b') {
                    endingRank = 2;
                }
                else if (endingLocation[0] == 'c') {
                    endingRank = 3;
                }
                else if (endingLocation[0] == 'd') {
                    endingRank = 4;
                }
                else if (endingLocation[0] == 'e') {
                    endingRank = 5;
                }
                else if (endingLocation[0] == 'f') {
                    endingRank = 6;
                }
                else if (endingLocation[0] == 'g') {
                    endingRank = 7;
                }
                else if (endingLocation[0] == 'h') {
                    endingRank = 8;
                }

                startingSquare = board->getSquareAt(startingRank, startingFile);
                endingSquare = board->getSquareAt(endingRank, endingFile);
                pieceToMove = startingSquare.getOccupant();

                // checks to see if there is actually a piece at the starting location
                if (!startingSquare.isOccupied()) {
                    validStartingFile = false;
                }
                // checks to see that the piece the player wants to move is actually their own
                else if (startingSquare.getOccupant()->getColor()
                != currentPlayer->getKing().getColor()) {
                    validStartingFile = false;
                }
                // calls the Piece's own method to see if it can legally
                // move to that space based on the kind of Piece that it is
                else if (!pieceToMove->canMoveTo(endingSquare)) {
                    validEndingFile = false;
                }

            }

            validMove = validStartingRank && validEndingRank && validStartingFile && validEndingFile;

        }

        // removes the captured Piece (if any) from the owner's set as well as from the board
        if (endingSquare.isOccupied()) {
            getOpponentOf(*currentPlayer).getPieces().erase(endingSquare.getOccupant());
            endingSquare.setOccupant(nullptr);
        }

        // moves the Piece chosen to its destination
        board->getSquareAt(startingRank, startingFile).getOccupant()->setLocation(&board->getSquareAt(endingRank, endingFile));

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