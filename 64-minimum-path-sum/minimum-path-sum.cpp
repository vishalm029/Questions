//RECURSION
// class Solution {
// public:
//     int getMinPath(vector<vector<int>>& grid,int i,int j){
//         if (i == 0 && j == 0) {
//             return grid[i][j];
//         }
//         int ans = INT_MAX;
//         if (j > 0) {
//             ans = grid[i][j] + getMinPath(grid, i, j - 1);
//         }
//         if (i > 0) {
//             int s = grid[i][j] + getMinPath(grid, i - 1, j);
//             ans = min(ans, s);
//         }
//         return ans;
//         }
//     int minPathSum(vector<vector<int>>& grid) {
//         return minPathSum(grid);
        
//     }
// };


// Memoization
// class Solution
// {
//         
//         // Time Complexity : O(m*n)
//         // Space Complexity : O(m-1, n-1) + O(m*n)

// private:
//     int m, n;
//     int getMinPath(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
//     {
//         if (i < 0 || i >= m || j < 0 || j >= n)
//             return INT_MAX;
//         if (i == 0 && j == 0)
//             return dp[i][j] = grid[i][j];

//         if (dp[i][j] != -1)
//             return dp[i][j];

//         // Go Up
//         int up = getMinPath(i - 1, j, grid, dp);

//         // Go Left
//         int left = getMinPath(i, j - 1, grid, dp);

//         return dp[i][j] = min(up, left) + grid[i][j];
//     }

// public:
//     int minPathSum(vector<vector<int>> &grid)
//     {
//         m = grid.size(), n = grid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, -1));

//         getMinPath(m - 1, n - 1, grid, dp);

//         return dp[m - 1][n - 1];
//     }
// };

//Tabluation
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = grid[0][0];

        for (int i = 1; i < m; i++) dp[i][0] = dp[i - 1][0] + grid[i][0];
        for (int j = 1; j < n; j++) dp[0][j] = dp[0][j - 1] + grid[0][j];

        for (int i = 1; i < m; i++){
            for (int j = 1; j < n; j++){
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        
        return dp[m-1][n-1];
    }
};
