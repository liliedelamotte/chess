cmake_minimum_required(VERSION 3.13)
project(chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -g -Og")

add_executable(chess main.cpp Bishop.cpp Bishop.h Board.cpp Board.h Game.cpp Game.h King.cpp King.h
        Knight.cpp Knight.h Pawn.cpp Pawn.h Piece.cpp Piece.h Player.cpp Player.h Queen.cpp Queen.h
        RestrictedPiece.cpp RestrictedPiece.h Rook.cpp Rook.h Square.cpp Square.h)