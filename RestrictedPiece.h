// ldelamotte17@georgefox.edu
// Assignment 7
// 2019-03-19


#ifndef _RESTRICTEDPIECE_H
#define _RESTRICTEDPIECE_H

class Piece;
class Player;
class Square;

/**
 * Implements the RestrictedPiece object.
 */
class RestrictedPiece: public Piece {

    public:

        /**
         * Moves a Piece to a given location.
         *
         * @param location the Square in which the Piece is to be moved to.
         * @param byPlayer the Player that is to make the move.
         * @return whether or not the move was successful.
         */
        virtual bool moveTo(Square& location, Player& byPlayer) = 0;

    protected:

        /**
         * Returns whether or not the Piece called upon has moved.
         *
         * @return whether or not the Piece called upon has moved.
         */
        bool hasMoved();

    private:

        /**
         * Whether or not the Restricted Piece has moved yet.
         */
        bool moved = false;
};

#endif //_RESTRICTEDPIECE_H