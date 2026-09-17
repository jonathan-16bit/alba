#include "alba.h"

// Chess board representation
int board[128];
int king_square[2] = {E1, E8};
int side =  WHITE;
int enpassant = NONE;
int castle = 15;
