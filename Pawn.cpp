// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include <iostream>
#include <string>
#include "Pawn.h"
#include "Square.h"
#include "Board.h"
#include "Queen.h"
#include "Game.h"

using namespace std;


// todo shouldn't this be `Queen* Queen::_delegate = nullptr`?
//Queen* _delegate = nullptr;

bool Pawn::canMoveTo(Square& location) {

    Square *currentLocation = this->getLocation();
    bool hasMoved = this->hasMoved();
    bool canMoveToGivenLocation = false;
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

//    if (hasDelegate()) {
//        // temporarily creates a Queen at the current position
//        // to see if they could move to the desired spot
//        Queen delegate = Queen(getLocation(), getColor());
//        canMoveToGivenLocation = delegate.canMoveTo(location);
//        // places the Pawn back to where it currently is
//        this->setLocation(delegate.getLocation());
//    }
//    else {
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

//            if (canMoveToGivenLocation && futureRank == 7 && !hasDelegate()) {
//                cout << "there's a delegate, yay";
//                _hasDelegate = true;
//            }


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

//            if (canMoveToGivenLocation && futureRank == 0 && !hasDelegate()) {
//                _hasDelegate = true;
//            }

        }
//    }

    return canMoveToGivenLocation;
}

bool Pawn::hasDelegate() {
    return _hasDelegate;
}

//Queen& Pawn::getDelegate() {
//    return *_delegate;
//}
//
//void Pawn::setDelegate(Queen& delegate) {
//    _hasDelegate = true;
//    _delegate = &delegate;
//}

string Pawn::toString() {

    string pieceType = "P";

    if (hasDelegate()) {
        Queen delegate = Queen(getLocation(), getColor());
        pieceType = delegate.toString();
        this->setLocation(delegate.getLocation());
    }

    return pieceType;
}