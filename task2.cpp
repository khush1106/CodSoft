#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Function to print the board
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            cout <<"|"<<board[i][j]<<" ";
        }
        cout<<"|"<<endl;
        cout<<"|__|__|__|"<<endl;
    }
}

// Function to check for a winner
bool checkWinner(const vector<vector<char>>& board, char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the move is valid
bool isValidMove(const vector<vector<char>>& board, int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    return board[row][col] == ' ';
}

int main() {
     cout<<"\n\t\t----------Welcome to the TIC TAC TOE GAME----------\n"<<endl;
     for(int i=0;i<=787496900;i++);
    //pattern to start game
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########" << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#      #   ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#       #  ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#        # ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         # ";
    std::cout << "    ";
    std::cout << "    #     " << std::endl;
    for(int i=0;i<=787496900;i++);
    vector<vector<char>> board = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
cout<<endl;
    while (true) {
        printBoard(board);
        int move;
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        // Check if the move is valid
        while (!isValidMove(board, move)) {
            cout << "Invalid move, try again: ";
            cin >> move;
        }

        // Update the board
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        board[row][col] = currentPlayer;

        // Check for a winner
        if (checkWinner(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Check for a draw
        bool isDraw = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    isDraw = false;
                    break;
                }
            }
            if (!isDraw) break;
        }
        if (isDraw) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}