class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(vector<string> &board, int row, int col) {

        int n = board.size();

        // vertical up
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') return false;
        }

        // diagonal left up
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }

        // diagonal right up
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }

        return true;
    }

    void Queens(vector<string> &board, int row) {

        int n = board.size();

        // base case
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j)) {
                board[row][j] = 'Q';
                Queens(board, row + 1);
                board[row][j] = '.'; // backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        Queens(board, 0);
        return ans;
    }
};