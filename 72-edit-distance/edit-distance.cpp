class Solution {
public:
    int dfs(int i, int j, string s, string t, vector<vector<int>>& dp) {
        if (i == 0) return j;
        if (j == 0) return i;
        if (dp[i][j] != -1) return dp[i][j];
        if (s[i-1] == t[j-1]) return dp[i][j] = 0 + dfs(i-1, j-1, s, t, dp);
        return dp[i][j] = 1 + min(dfs(i, j-1, s, t, dp), min(dfs(i-1, j, s, t, dp), dfs(i-1, j-1, s, t, dp)));
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return dfs(n, m, word1, word2, dp);
    }
};