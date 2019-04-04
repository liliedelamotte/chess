// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-23


#include <iostream>
#include <string>
#include "Pawn.h"
#include "Square.h"
#include "Board.h"
using namespace std;

bool Pawn::canMoveTo(Square& location) {

    /* todo */
    Square *currentLocation = this->getLocation();
    bool hasMoved = this->hasMoved();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    bool canMoveToGivenLocation = false;

    // runs a series of can move to tests based on the Pawn's color
    if (this->getColor() == "W") {

        if (!location.isOccupied()) {
            // checks to see if the Pawn can simply move forward
            if ((!hasMoved && (futureRank == currentRank + 2))
                || (futureRank == currentRank + 1)) {
                canMoveToGivenLocation = true;
            }
        }
        else if (location.isOccupied() && location.getOccupant()->getColor() == "B"
                 && location.getRank() == currentRank + 1
                 && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
            canMoveToGivenLocation = true;
        }

//        // checks to see if the Pawn can simply move forward
//        if ((!hasMoved && (futureRank == currentRank + 2))
//            || (futureRank == currentRank + 1)) {
//            canMoveToGivenLocation = true;
//        }
        // checks to see if the Pawn can capture a piece
//        else if (location.getOccupant() != nullptr && location.getOccupant()->getColor() == "B"
//        && location.getRank() == currentRank + 1
//        && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
//            canMoveToGivenLocation = true;
//        }
    }
    else {
        if (!location.isOccupied()) {
            // checks to see if the Pawn can simply move forward
            if ((!hasMoved && (futureRank != currentRank - 2))
                || (hasMoved && futureRank == currentRank - 1)) {
                canMoveToGivenLocation = true;
            }
        }
        // checks to see if the pawn can capture a piece
        else if (location.isOccupied() && location.getOccupant()->getColor() == "W"
                 && location.getRank() == currentRank - 1
                 && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
            canMoveToGivenLocation = true;
        }

    }

    return canMoveToGivenLocation;
}

string Pawn::toString() {
    return "P";
}