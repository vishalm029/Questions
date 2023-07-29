class Solution {
public:
    //Recursion
    // int SolRec(vector<int>& coins, int n, int amount)
    // {
    //     if(n==0)
    //         return 0;
    //     if(amount == 0)
    //     {
    //         return 1;
    //     }
    //     if(coins[n-1] > amount)
    //     {
    //         return SolRec(coins, n-1, amount);
    //     }
    //     return SolRec(coins, n, amount-coins[n-1]) + SolRec(coins, n-1, amount);
    // }


    int change(int amount, vector<int>& coins) 
    {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return SolveMemo(coins,n,amount,dp);
    }
    int SolveMemo(vector<int>& coins,int n,int amount,vector<vector<int>>& dp)
    {
        if(n==0){
            return 0;
        }
        if(amount==0){
            return 1;
        }
        if(amount<0){
            return 0; 
        }
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        return dp[n][amount]=SolveMemo(coins,n-1,amount,dp)+SolveMemo(coins,n,amount-coins[n-1],dp); 
    }
};