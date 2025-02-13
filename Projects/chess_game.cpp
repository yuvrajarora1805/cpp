#include <iostream>
#include <vector>
#include <string>

enum class PieceType {
    EMPTY,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

enum class Color {
    NONE,
    WHITE,
    BLACK
};

struct Piece {
    PieceType type;
    Color color;

    // Constructor
    Piece(PieceType t, Color c) : type(t), color(c) {}
};

class ChessBoard {
private:
    std::vector<std::vector<Piece>> board;

public:
    ChessBoard() {
        // Initialize an 8x8 chessboard with empty pieces
        board = std::vector<std::vector<Piece>>(8, std::vector<Piece>(8, Piece(PieceType::EMPTY, Color::NONE)));

        // Place pawns
        for (int i = 0; i < 8; ++i) {
            board[1][i] = Piece(PieceType::PAWN, Color::WHITE);
            board[6][i] = Piece(PieceType::PAWN, Color::BLACK);
        }

        // Place rooks
        board[0][0] = board[0][7] = Piece(PieceType::ROOK, Color::WHITE);
        board[7][0] = board[7][7] = Piece(PieceType::ROOK, Color::BLACK);

        // Place knights
        board[0][1] = board[0][6] = Piece(PieceType::KNIGHT, Color::WHITE);
        board[7][1] = board[7][6] = Piece(PieceType::KNIGHT, Color::BLACK);

        // Place bishops
        board[0][2] = board[0][5] = Piece(PieceType::BISHOP, Color::WHITE);
        board[7][2] = board[7][5] = Piece(PieceType::BISHOP, Color::BLACK);

        // Place queens
        board[0][3] = Piece(PieceType::QUEEN, Color::WHITE);
        board[7][3] = Piece(PieceType::QUEEN, Color::BLACK);

        // Place kings
        board[0][4] = Piece(PieceType::KING, Color::WHITE);
        board[7][4] = Piece(PieceType::KING, Color::BLACK);
    }

    void displayBoard() const {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                switch (board[i][j].type) {
                    case PieceType::EMPTY: std::cout << ". "; break;
                    case PieceType::PAWN:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "P " : "p ");
                        break;
                    case PieceType::ROOK:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "R " : "r ");
                        break;
                    case PieceType::KNIGHT:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "N " : "n ");
                        break;
                    case PieceType::BISHOP:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "B " : "b ");
                        break;
                    case PieceType::QUEEN:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "Q " : "q ");
                        break;
                    case PieceType::KING:
                        std::cout << ((board[i][j].color == Color::WHITE) ? "K " : "k ");
                        break;
                }
            }
            std::cout << std::endl;
        }
    }

    bool movePiece(int startX, int startY, int endX, int endY) {
        if (startX < 0 || startX >= 8 || startY < 0 || startY >= 8 ||
            endX < 0 || endX >= 8 || endY < 0 || endY >= 8) {
            return false;
        }

        Piece& startPiece = board[startX][startY];
        if (startPiece.type == PieceType::EMPTY) {
            return false;
        }

        // Simple move validation (no piece-specific rules)
        board[endX][endY] = startPiece;
        board[startX][startY] = Piece(PieceType::EMPTY, Color::NONE);
        return true;
    }
};

int main() {
    ChessBoard chessBoard;
    chessBoard.displayBoard();

    int startX, startY, endX, endY;

    while (true) {
        std::cout << "Enter move (startX startY endX endY): ";
        std::cin >> startX >> startY >> endX >> endY;

        if (chessBoard.movePiece(startX, startY, endX, endY)) {
            chessBoard.displayBoard();
        } else {
            std::cout << "Invalid move!" << std::endl;
        }
    }

    return 0;
}