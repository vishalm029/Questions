class Solution {
public:
//Recursion Solution
    //  int SolveRec(int &m,int &n,int x, int y,vector<vector<int>>& obstacleGrid){
    //     if(x<0 || x>=m || y<0 || y>=n)
    //         return 0;
    //     if (obstacleGrid[x][y] == 1)
    //         return 0;
    //     if (x == m-1 and y == n-1)
    //         return 1;
        
        
    //     int down = SolveRec(m,n,x+1,y,obstacleGrid);
    //     int right = SolveRec(m,n,x,y+1,obstacleGrid);

    //     return down+right;;

    // }
//Memomization
int SolveMemo(int &m,int &n,int x, int y,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp){
    if(x<0 || x>=m || y<0 || y>=n)
            return 0;
        if (obstacleGrid[x][y] == 1)
            return 0;
        if (x == m-1 and y == n-1)
            return 1;
     if (dp[x][y] != -1)
        return dp[x][y];

    int down = SolveMemo(m,n,x+1,y,obstacleGrid,dp);
    int right = SolveMemo(m,n,x,y+1,obstacleGrid,dp);

    return dp[x][y] = down + right;
}


//Tabulation
//  int SolveTab(int &m,int &n,vector<vector<int>>& obstacleGrid){
//     vector<vector<int>> dp(m,vector<int>(n, 0));
//     dp[m-1][n-1]=1;
//     for(int i=m-2;i>=0;--i){
//         for(int j=n-2;j>=0;--j){
//             int ans=0;
//             if(obstacleGrid[i][j]==0)
//                 continue;
//             if(obstacleGrid[i+1][j]==0)
//                 ans += dp[i+1][j];
//             if(obstacleGrid[i][j+1]==0)
//                 ans += dp[i][j+1];
//             dp[i][j]=ans;
//         }
//     }
//      return dp[0][0];

//  }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1)
            return 0;
        vector<vector<int>> dp(m,vector<int>(n, -1));

        //return SolveRec(m,n,0,0,obstacleGrid);
        return SolveMemo(m,n,0,0,obstacleGrid,dp);
        //return SolveTab(m,n,obstacleGrid);
        
    }
};