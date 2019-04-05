// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include "Bishop.h"
#include "Square.h"
#include "Board.h"

bool Bishop::canMoveTo(Square& location) {

    Board* board = board->getInstance();
    bool canMoveToGivenLocation = false;
    Square *currentLocation = this->getLocation();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (currentFile != futureFile && currentRank != futureRank) {
        if ((location.isOccupied() && (this->getColor() != location.getOccupant()->getColor()))
            || !location.isOccupied()) {
            canMoveToGivenLocation = board->isClearDiagonal(*currentLocation, location);
        }
    }


    return canMoveToGivenLocation;

}

string Bishop::toString() {
    return "B";
}