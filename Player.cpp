// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include <string>
#include <set>
#include <regex>
#include "Player.h"
#include "King.h"
#include "Piece.h"
#include "Board.h"
#include "Square.h"
#include "Game.h"
using namespace std;

Player::Player(string name, King& king, set<Piece*>& pieces)
: _name(name), _king(king), _pieces(pieces){ }

string Player::getName() {
    return _name;
}

King& Player::getKing() {
    return _king;
}

set<Piece*>& Player::getPieces() {
    return _pieces;
}

bool Player::makeMove() {

    bool validMove = false;
    bool pieceOnSquare = true;
    bool isRightColor = true;
    bool canMoveTo = true;
    bool gameIsInPlay = true;
    bool kingIsInCheck = false;
    int startingRank;
    int startingFile;
    int endingRank;
    int endingFile;
    Piece* pieceToMove;
    string startingLocation;
    string endingLocation;
    string move;
    Square* startingSquare;
    Square* endingSquare;
    regex validRe("([a-h][1-8])\\s+([a-h][1-8])");
    regex checkmateRe("(#)");


    Board* board = board->getInstance();

    while (!validMove) {

        // resets variables to ensure proper move validation
        validMove = true;
        pieceOnSquare = true;
        isRightColor = true;
        canMoveTo = true;

        // determines if the opposing player's King is in check
        for (Piece *piece: Game::getOpponentOf(*this).getPieces()) {
            if (piece->canMoveTo(*getKing().getLocation())) {
                kingIsInCheck = true;
            }
        }

        // lets the opposing player know that their King is in check
        if (kingIsInCheck) {
            cout << getName() << ", your King is in check!" << endl;
        }

        // gets the players move
        cout << this->getName() << ", enter your move: ";
        getline(cin, move);

        // determines if the format of the input is valid
        if (regex_match(move.begin(), move.end(), validRe)) {

            startingLocation = move.substr(0, 2);
            endingLocation = move.substr(3, 5);
            startingRank = (int)startingLocation[1] - '0';
            endingRank = (int)endingLocation[1] - '0';

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

            startingSquare = &board->getSquareAt(startingFile, startingRank - 1);
            endingSquare = &board->getSquareAt(endingFile, endingRank - 1);
            pieceToMove = startingSquare->getOccupant();

            // checks to see if there is actually a Piece at the starting location
            if (!startingSquare->isOccupied()) {
                pieceOnSquare = false;
            }
            else {
                // checks to see that the Piece the player wants to move is actually their own
                if (startingSquare->getOccupant()->getColor() != this->getKing().getColor()) {
                    isRightColor = false;
                }
                // calls the Piece's own method to see if it can legally
                // move to that space based on the kind of Piece that it is
                if (!pieceToMove->canMoveTo(*endingSquare)) {
                    canMoveTo = false;
                }
            }

            // only evaluates for a valid move with the given parameters
            // if the beginning square is the same as the ending square
            if (startingSquare->getRank() != endingSquare->getRank()
            || startingSquare->getFile() != endingSquare->getFile()) {
                validMove = pieceOnSquare && isRightColor && canMoveTo;
            }
            // if the starting square is the same as the ending square, a king has been tipped over
            else {
                gameIsInPlay = false;
                validMove = true;
            }
            if (!validMove) {
                cout << "Invalid move.\n" << endl;
            }

        }
        // determines if player decides they are in checkmate
        else if (move == "#" && kingIsInCheck) {
            gameIsInPlay = false;
            validMove = true;
        }
        else {
            validMove = false;
            cout << "Invalid move.\n" << endl;
        }
    }

    if (gameIsInPlay) {
        // removes the captured Piece (if any) from the owner's set as well as from the board
        if (endingSquare->isOccupied()) {
            capture(*endingSquare->getOccupant());
        }

        cout << "startingSquare: " << startingSquare->getFile() << "," << startingSquare->getRank() << endl;
        cout << "occupant at startingSquare: " << startingSquare->getOccupant()->getColor() << startingSquare->getOccupant()->toString() << endl;
        cout << "endingSquare: " << endingSquare->getFile() << "," << endingSquare->getRank() << endl;
        // moves the Piece chosen to its destination
        startingSquare->getOccupant()->moveTo(*endingSquare, *this);
    }

    return gameIsInPlay;

}

void Player::capture(Piece& piece) {

    Game::getOpponentOf(*this).getPieces().erase(&piece);
    piece.getLocation()->setOccupant(nullptr);

}