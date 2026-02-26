class Solution {
public:
    int helper(int row, int col, vector<vector<int>>& dp) {
        // Base case
        if (row == 0 && col == 0)
            return 1;

        // If already calculated
        if (dp[row][col] != -1)
            return dp[row][col];

        int left = 0;
        int top = 0;

        // Move left
        if (col - 1 >= 0)
            left = helper(row, col - 1, dp);

        // Move up
        if (row - 1 >= 0)
            top = helper(row - 1, col, dp);

        return dp[row][col] = left + top;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(m - 1, n - 1, dp);
    }
};