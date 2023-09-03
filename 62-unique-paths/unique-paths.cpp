class Solution {
public: 
    int uniquePaths(int m, int n) {
        vector<int> cur(n,1);
        vector<int> prev(n,1);
        //vector<vector<int>> dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
             for(int j=1;j<n;j++){
                 //dp[i][j]=dp[i][j-1]+dp[i-1][j]; 
                 cur[j]=cur[j-1]+prev[j];
             }
             prev=cur;
        }
        return cur[n-1];
    }
};