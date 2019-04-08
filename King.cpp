// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include "King.h"
#include "Square.h"
#include "Board.h"

bool King::canMoveTo(Square& location) {

    bool canMoveToGivenLocation = false;
    Square *currentLocation = this->getLocation();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (currentFile == futureFile && currentRank == futureRank) {
        canMoveToGivenLocation = true;
    }
    else if (location.isOccupied()) {
        if (!(location.getOccupant()->getColor() == this->getColor())) {
            if (futureFile + 1 == currentFile) {
                if (futureRank + 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
                if (futureRank == currentRank) {
                    canMoveToGivenLocation = true;
                }
                if (futureRank - 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
            }
            if (futureFile == currentFile) {
                if (futureRank + 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
                if (futureRank - 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
            }
            if (futureFile - 1 == currentFile) {
                if (futureRank + 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
                if (futureRank == currentRank) {
                    canMoveToGivenLocation = true;
                }
                if (futureRank - 1 == currentRank) {
                    canMoveToGivenLocation = true;
                }
            }
        }
    }
    else {
        if (futureFile + 1 == currentFile) {
            if (futureRank + 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
            if (futureRank == currentRank) {
                canMoveToGivenLocation = true;
            }
            if (futureRank - 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
        }
        if (futureFile == currentFile) {
            if (futureRank + 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
            if (futureRank - 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
        }
        if (futureFile - 1 == currentFile) {
            if (futureRank + 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
            if (futureRank == currentRank) {
                canMoveToGivenLocation = true;
            }
            if (futureRank - 1 == currentRank) {
                canMoveToGivenLocation = true;
            }
        }
    }

    return canMoveToGivenLocation;

}

string King::toString() {
    return "K";
}