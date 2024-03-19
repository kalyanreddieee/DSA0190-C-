#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

bool isSafe(vector<vector<int>>& board, int row, int col, int num) {

    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num || 
            board[3 * (row / 3) + x / 3][3 * (col / 3) + x % 3] == num) {
            return false;
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>>& board) {
    int row, col;

    bool found = false;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) return true;

    for (int num = 1; num <= 9; num++) {
   
        if (isSafe(board, row, col, num)) {
        
            board[row][col] = num;
            if (solveSudoku(board)) return true;
            board[row][col] = 0;
        }
    }

    return false;
}

void printBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Original Sudoku Board:" << endl;
    printBoard(board);
    cout << endl;

    if (solveSudoku(board)) {
        cout << "Sudoku solved successfully:" << endl;
        printBoard(board);
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}

