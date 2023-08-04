class Solution {
public:
    //Recursion + Memoization
    bool RecMemo(int ind, int n, vector<string> &words, string s, vector<int> &dp) {
        if(ind == n){
            return true;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }

        for(auto word: words) {
            if(s.substr(ind, word.size()) == word and RecMemo(ind + word.size(), n, words, s, dp))
                return dp[ind] = true;
        }
        
        return dp[ind] = false;
    }

    // bool wordBreak(string s, vector<string>& words) {
    //     int n = s.size();
    //     vector<int> dp(n, -1);
    //     return RecMemo(0, n, words, s, dp);
    // }

    //Tabulation
    bool wordBreak(string s, vector<string>& words) {
        int n = s.size();
        vector<bool> dp(n + 1, 0);
        dp[n] = true;

        for(int i = n - 1; i >= 0; i--) {
            for(auto word: words) {
                if(i + word.size() <= n and s.substr(i, word.size()) == word and dp[i + word.size()])
                    dp[i] = true;
                if(dp[i]) break;
            }
        }

      return dp[0];
    }
};