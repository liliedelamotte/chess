cmake_minimum_required(VERSION 3.13)
project(chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -g -Og")

add_executable(chess Bishop.cpp Board.cpp Game.cpp King.cpp Knight.cpp Pawn.cpp
        Piece.cpp Player.cpp Queen.cpp RestrictedPiece.cpp Rook.cpp Square.cpp chess.cpp)