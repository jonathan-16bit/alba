# Description
A compact text representation of the current board state and chess position.  

# Example: The Starting Position
```c
#define START_POSITION "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1 "
```

Contains 6 fields, the first of which is the board state.  

## Board State
Empty spaces denoted by numbers. Black and White denoted by lowercase and uppercase letters respectively.  
`/` separates ranks, listed from `8` to `1`.  

## Side to Move
`w` for **white** to move next, `b` for **black**.  

## Castling Rights
`KQ`: White can castle kingside and queenside  
`kq`: Black can castle kingside and queenside  
`-`: no castling rights

## En Passant Target Square
Stores the en passant target square.  
`-`: no target square for a possible en passant capture  

## Halfmove Clock
For the fifty-move rule. It counts how many half-moves (single player moves) have occurred since the last 
pawn move or capture.  

## Fullmove Number
Counts the game's move number, increments after every Black move.  
