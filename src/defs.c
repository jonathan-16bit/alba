#include "alba.h"

// Chess board representation
int board[128];
int king_square[2] = {E1, E8};
int side =  WHITE;
int enpassant = NONE;
int castle = 15;

// Castling rights masks
int castling_rights[128] = {
     7, 15, 15, 15,  3, 15, 15, 11,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    15, 15, 15, 15, 15, 15, 15, 15,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE,
    13, 15, 15, 15, 12, 15, 15, 14,  NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE
};
