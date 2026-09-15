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

#endif
