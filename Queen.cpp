// ldelamotte17@georgefox.edu
// Assignment 8
// 2019-04-06


#include "Queen.h"
#include "Square.h"
#include "Board.h"

bool Queen::canMoveTo(Square& location) {

    Board* board = board->getInstance();
    bool canMoveToGivenLocationDiagonal = false;
    bool canMoveToGivenLocationStraight = false;
    Square *currentLocation = this->getLocation();
    int currentFile = currentLocation->getFile();
    int currentRank = currentLocation->getRank();
    int futureFile = location.getFile();
    int futureRank = location.getRank();

    if (currentFile != futureFile && currentRank != futureRank) {
        if ((location.isOccupied() && (this->getColor() != location.getOccupant()->getColor()))
            || !location.isOccupied()) {
            canMoveToGivenLocationDiagonal = board->isClearDiagonal(*currentLocation, location);
        }
    }
    else {
        canMoveToGivenLocationDiagonal = true;
    }

    if (!(currentFile == futureFile && currentRank == futureRank)) {
        if (location.isOccupied()) {
            if (this->getColor() != location.getOccupant()->getColor()) {
                if (currentFile == futureFile) {
                    canMoveToGivenLocationStraight = board->isClearFile(*currentLocation, location);
                }
                else {
                    canMoveToGivenLocationStraight = board->isClearRank(*currentLocation, location);
                }
            }
        }
        else {
            if (currentFile == futureFile) {
                canMoveToGivenLocationStraight = board->isClearFile(*currentLocation, location);
            }
            else {
                canMoveToGivenLocationStraight = board->isClearRank(*currentLocation, location);
            }
        }
    }

    return (canMoveToGivenLocationDiagonal && canMoveToGivenLocationStraight);

}

string Queen::toString() {
    return "Q";
}