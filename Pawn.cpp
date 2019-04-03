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
    int currentRank = currentLocation->getRank();
    int currentFile = currentLocation->getFile();
    int futureRank = location.getRank();
    int futureFile = location.getFile();

    bool canMoveToGivenLocation = false;

    if (this->getColor() == "W") {
        // checks to see if the Pawn can simply move forward
        if ((!hasMoved && (futureRank == currentRank + 2))
            || (hasMoved && futureRank == currentRank + 1)) {
            canMoveToGivenLocation = true;
        }
        // checks to see if the Pawn can capture a piece
        else if (location.getOccupant() != nullptr && location.getOccupant()->getColor() == "B"
        && location.getRank() == currentRank + 1
        && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
            canMoveToGivenLocation = true;
        }
    }
    else {
        // checks to see if the Pawn can simply move forward
        if ((!hasMoved && (futureRank != currentRank - 2))
            || (hasMoved && futureRank == currentRank - 1)) {
            canMoveToGivenLocation = true;
        }
        // checks to see if the pawn can capture a piece
        else if (location.getOccupant() != nullptr && location.getOccupant()->getColor() == "W"
                 && location.getRank() == currentRank + 1
                 && ((currentFile == futureFile - 1) || (currentFile == futureFile + 1))) {
            canMoveToGivenLocation = true;
        }

    }

    return canMoveToGivenLocation;
}

string Pawn::toString() {
    return "P";
}