# `0x88` Board Representation
A chess board has 64 squares (8 * 8).  

`0x88` uses 128 array slots, and uses hex representation (and bitwise operations) for simpler boundary checks.  

# Terminology
Rank: row  
File: column  

---

# Encoding a Position
Encoding = `rank * 16 + file`  
Both `rank` and `file` are in the range `[0, 7]`.  

# Fall-Off Check
If `square & 0x88` produces `0`, it is on the board. If not, it is off the board.  
(To understand, look at the bit representation of `0x88`: `1000 1000`).  

Moving right off the board: moves into the invalid half.  
Moving left off the board: wraps into the previous 16-slot block, caught by the `& 0x88` operation.  

---

# Movement
Horizontal: add or subtract **1**  
Vertical: add or subtract **16**  
