#ifndef ALBA_H
#define ALBA_H

#include <string.h>
#include <sys/time.h>
#include <sys/select.h>

#define START_POSITION "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 "

// Snapshot of current board state
typedef struct {
  int board[128];  // 0x88 board rep
  int king_square[2];
  int side;  // Side to move next
  int enpassant;
  int castle;
} Position;

// List of generated moves
typedef struct {
  int moves[256];
  int count;  // Of moves in the array
} Movelist;

// 0x88 encoded board squares
enum squares {
  A8 = 0,   B8, C8, D8, E8, F8, G8, H8,
  A7 = 16,  B7, C7, D7, E7, F7, G7, H7,
  A6 = 32,  B6, C6, D6, E6, F6, G6, H6,
  A5 = 48,  B5, C5, D5, E5, F5, G5, H5,
  A4 = 64,  B4, C4, D4, E4, F4, G4, H4,
  A3 = 80,  B3, C3, D3, E3, F3, G3, H3,
  A2 = 96,  B2, C2, D2, E2, F2, G2, H2,
  A1 = 112, B1, C1, D1, E1, F1, G1, H1
};

#endif
