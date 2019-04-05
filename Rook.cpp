// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include "Rook.h"
#include "Square.h"
#include "Board.h"

bool Rook::canMoveTo(Square& location) {

    Board* board = board->getInstance();
    bool canMoveToGivenLocation = false;
    Square *currentLocation = this->getLocation();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (!(currentFile == futureFile && currentRank == futureRank)) {
        if (location.isOccupied()) {
            if (this->getColor() != location.getOccupant()->getColor()) {
                if (currentFile == futureFile) {
                    canMoveToGivenLocation = board->isClearFile(*currentLocation, location);
                }
                else {
                    canMoveToGivenLocation = board->isClearRank(*currentLocation, location);
                }
            }
        }
        else {
            if (currentFile == futureFile) {
                canMoveToGivenLocation = board->isClearFile(*currentLocation, location);
            }
            else {
                canMoveToGivenLocation = board->isClearRank(*currentLocation, location);
            }
        }
    }


    return canMoveToGivenLocation;

}

string Rook::toString() {
    return "R";
}