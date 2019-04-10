// ldelamotte17@georgefox.edu
// Assignment 10
// 2019-04-20


#include "Knight.h"
#include "Square.h"

bool Knight::canMoveTo(Square& location) {

    bool canMoveToGivenLocation = false;
    Square *currentLocation = this->getLocation();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (location.isOccupied()) {
        if (!(location.getOccupant()->getColor() == this->getColor())) {
            if (((futureFile + 1 == currentFile) && (futureRank - 2 == currentRank))
            || ((futureFile - 1 == currentFile) && (futureRank - 2 == currentRank))
            || ((futureFile - 2 == currentFile) && (futureRank - 1 == currentRank))
            || ((futureFile - 2 == currentFile) && (futureRank + 1 == currentRank))
            || ((futureFile - 1 == currentFile) && (futureRank + 2 == currentRank))
            || ((futureFile + 1 == currentFile) && (futureRank + 2 == currentRank))
            || ((futureFile + 2 == currentFile) && (futureRank + 1 == currentRank))
            || ((futureFile + 2 == currentFile) && (futureRank - 1 == currentRank))) {
                canMoveToGivenLocation = true;
            }
        }
    }
    else {
        if (((futureFile + 1 == currentFile) && (futureRank - 2 == currentRank))
            || ((futureFile - 1 == currentFile) && (futureRank - 2 == currentRank))
            || ((futureFile - 2 == currentFile) && (futureRank - 1 == currentRank))
            || ((futureFile - 2 == currentFile) && (futureRank + 1 == currentRank))
            || ((futureFile - 1 == currentFile) && (futureRank + 2 == currentRank))
            || ((futureFile + 1 == currentFile) && (futureRank + 2 == currentRank))
            || ((futureFile + 2 == currentFile) && (futureRank + 1 == currentRank))
            || ((futureFile + 2 == currentFile) && (futureRank - 1 == currentRank))) {
            canMoveToGivenLocation = true;
        }
    }

    return canMoveToGivenLocation;

}

string Knight::toString() {
    return "N";
}