class Solution {
public:

    bool isSafe(vector<vector<char>> &arr, char digit, int row, int col) {

        // row & column check
        for (int i = 0; i < 9; i++) {
            if (arr[row][i] == digit) return false;
            if (arr[i][col] == digit) return false;
        }

        // 3x3 box check
        int strow = (row / 3) * 3;
        int stcol = (col / 3) * 3;

        for (int i = strow; i < strow + 3; i++) {
            for (int j = stcol; j < stcol + 3; j++) {
                if (arr[i][j] == digit) return false;
            }
        }

        return true;
    }

    bool sudukosolver(vector<vector<char>> &arr, int row, int col) {

        // base case
        if (row == 9) return true;

        int nextrow = row;
        int nextcol = col + 1;

        if (col + 1 == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }

        // skip filled cell
        if (arr[row][col] != '.') {
            return sudukosolver(arr, nextrow, nextcol);
        }

        // try digits
        for (char ch = '1'; ch <= '9'; ch++) {

            if (isSafe(arr, ch, row, col)) {

                arr[row][col] = ch;

                if (sudukosolver(arr, nextrow, nextcol)) {
                    return true;
                }

                // backtrack
                arr[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        sudukosolver(board, 0, 0);
    }
};