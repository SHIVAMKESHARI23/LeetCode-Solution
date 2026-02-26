class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        
        int m = grid.size();
        int n = grid[0].size();

        // Out of bounds
        if (i >= m || j >= n)
            return INT_MAX;

        // Destination reached
        if (i == m - 1 && j == n - 1)
            return grid[i][j];

        // Already computed
        if (dp[i][j] != -1)
            return dp[i][j];

        int down = helper(i + 1, j, grid, dp);
        int right = helper(i, j + 1, grid, dp);

        return dp[i][j] = grid[i][j] + min(down, right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return helper(0, 0, grid, dp);
    }
};