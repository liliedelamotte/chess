// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include <iostream>
#include <string>
#include "Pawn.h"
#include "Square.h"
#include "Board.h"
using namespace std;


// todo shouldn't this be `Queen* Queen::_delegate = nullptr`?
Queen* _delegate = nullptr;

bool Pawn::canMoveTo(Square& location) {

    Square *currentLocation = this->getLocation();
    bool hasMoved = this->hasMoved();
    bool canMoveToGivenLocation = false;
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (hasDelegate()) {
        canMoveToGivenLocation = _delegate->canMoveTo(location);
    }
    else {
        // runs a series of can move to tests based on the Pawn's color
        if (getColor() == "W") {

            if (!location.isOccupied()) {
                // checks to see if the Pawn can simply move forward
                if ((!hasMoved && (futureRank == currentRank + 2) && (currentFile == futureFile))
                    || ((futureRank == currentRank + 1) && (currentFile == futureFile))) {
                    canMoveToGivenLocation = true;
                }
            }
                // checks to see if the pawn can capture a Piece
            else if (location.isOccupied() && location.getOccupant()->getColor() == "B"
                     && location.getRank() == currentRank + 1
                     && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
                canMoveToGivenLocation = true;
            }

            if (getLocation()->getRank() == 7) {
                Queen delegate = Queen(getLocation(), getColor());
                setDelegate(delegate);
            }


        } else {
            if (!location.isOccupied()) {
                // checks to see if the Pawn can simply move forward
                if ((!hasMoved && (futureRank == currentRank - 2) && (currentFile == futureFile))
                    || ((futureRank == currentRank - 1) && (currentFile == futureFile))) {
                    canMoveToGivenLocation = true;
                }
            }
                // checks to see if the pawn can capture a Piece
            else if (location.isOccupied() && location.getOccupant()->getColor() == "W"
                     && location.getRank() == currentRank - 1
                     && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
                canMoveToGivenLocation = true;
            }

            if (getLocation()->getRank() == 0) {
                Queen delegate = Queen(getLocation(), getColor());
                setDelegate(delegate);
            }

        }
    }

    return canMoveToGivenLocation;
}

bool hasDelegate() {
    return (_delegate != nullptr);
}

void setDelegate(Queen& delegate) {
    _delegate = &delegate;
}

string Pawn::toString() {

    string pieceType = "P";

    if (hasDelegate()) {
        pieceType = _delegate->toString();
    }

    return pieceType;
}