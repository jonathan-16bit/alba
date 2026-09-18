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

// Algebraic square names
// For converting internal representation into text
char *square_to_coords[] = {
    "a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8", "i8", "j8", "k8", "l8", "m8", "n8", "o8", "p8",
    "a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7", "i7", "j7", "k7", "l7", "m7", "n7", "o7", "p7",
    "a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6", "i6", "j6", "k6", "l6", "m6", "n6", "o6", "p6",
    "a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5", "i5", "j5", "k5", "l5", "m5", "n5", "o5", "p5",
    "a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4", "i4", "j4", "k4", "l4", "m4", "n4", "o4", "p4",
    "a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3", "i3", "j3", "k3", "l3", "m3", "n3", "o3", "p3",
    "a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2", "i2", "j2", "k2", "l2", "m2", "n2", "o2", "p2",
    "a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1", "i1", "j1", "k1", "l1", "m1", "n1", "o1", "p1"
};
