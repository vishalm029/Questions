class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        // dp[i]: min number of taps that should be open to water garden [0 .. i]
        // init with some max values
        vector<int> dp(n + 1, n + 1);
        // no tap is needed to water no garden
        dp[0] = 0;
        for (int i = 0; i <= n; i++) {
            // we can water garden [i - ranges[i] .. i + ranges[i]] with tap i
            // rmb to handle the boundary ...
            int l = max(0, i - ranges[i]), r = min(i + ranges[i], n);
            for (int j = l; j <= r; j++) {
                // check we can use less number of taps from [l .. r]
                // i.e. can i water [0 .. j] just using dp[j] taps
                // or I need to water dp[0 .. l] `dp[l]` times 
                // and use one more tap to water [l + 1 .. j]
                dp[j] = min(dp[j], dp[l] + 1);
            }
        }
        // if min number of taps not found, return -1, else return dp[n]
        return dp[n] == n + 1 ? -1 : dp[n];
    }
};