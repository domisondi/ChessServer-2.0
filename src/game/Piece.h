//
// insert file header here
//

#ifndef CHESS_GAME_PIECE_H_
#define CHESS_GAME_PIECE_H_

namespace chess {



enum PieceIdentifier
{
    NONE,
    PAWN,
    BISHOP,
    KNIGHT,
    ROOK,
    QUEEN,
    KING
};


class ChessBoard
{
    PieceIdentifier board[8][8];
public:
};



class Piece
{
public:
    virtual ~Piece(void);

    // TODO: add more here
};


class Bishop : public Piece
{
public:
    // TODO: add more here
};


}


#endif // CHESS_GAME_PIECE_H_


