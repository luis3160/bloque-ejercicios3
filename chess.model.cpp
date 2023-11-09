#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase para representar una pieza de ajedrez
class ChessPiece {
public:
    ChessPiece(char symbol, string name) : symbol(symbol), name(name) {}
    char getSymbol() const { return symbol; }
    string getName() const { return name; }
private:
    char symbol;
    string name;
};

// Clase para representar el tablero de ajedrez
class ChessBoard {
public:
    ChessBoard() {
        // Inicializar el tablero con piezas vacías
        board.resize(8, vector<ChessPiece>(8, ChessPiece(' ', " ")));
    }

    // Método para imprimir el tablero
    void printBoard() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cout << "[" << board[i][j].getSymbol() << "]";
            }
            cout << endl;
        }
    }

    // Método para colocar una pieza en el tablero
    void placePiece(int row, int col, const ChessPiece& piece) {
        board[row][col] = piece;
    }

private:
    vector<vector<ChessPiece>> board;
};

int main() {
    ChessBoard board;

    // Inicializar y colocar algunas piezas de ajedrez en el tablero
    ChessPiece whiteKing('K', "White King");
    ChessPiece blackPawn('P', "Black Pawn");

    board.placePiece(0, 0, whiteKing);
    board.placePiece(6, 3, blackPawn);

    // Imprimir el tablero
    board.printBoard();

    return 0;
}