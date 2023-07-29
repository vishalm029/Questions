class Solution {
public:
    // int solveRec(int amount,vector<int>& coins){
    //     //Base Case
    //     if(amount==0){
    //         return 0;
    //     }
    //     if(amount<0){
    //         return INT_MAX;
    //     }
    //     int n=coins.size();
    //     int maxi=INT_MAX;
    //     int ans;
    //     for(int i=0;i<n;i++){
    //         ans=solveRec(amount-coins[i],coins);
    //         if(ans!=INT_MAX)
    //             maxi=min(maxi,ans+1);
            
    //     }

    //     return maxi;
    // }

    // int solveMem(int amount,vector<int>& coins,vector<int>& dp){
    //     //Base Case
    //     if(amount==0){
    //         return 0;
    //     }
    //     if(amount<0){
    //         return INT_MAX;
    //     }
    //     if(dp[amount]!=-1){
    //         return dp[amount];
    //     }
    //     int n=coins.size();
    //     int maxi=INT_MAX;
    //     int ans;
    //     for(int i=0;i<n;i++){
    //         //ans=Recur(amount-coins[i],coins);
    //         ans=solveMem(amount-coins[i],coins,dp);
    //         if(ans!=INT_MAX)
    //             maxi=min(maxi,ans+1);
            
    //     }

    //     return dp[amount]=maxi;
    // }

    int solveTab(vector<int>&coins,int amount){
        vector<int>dp(amount+1,0);
        for(int a=1;a<=amount;a++){
            int maxi=INT_MAX;
            int ans;
            for(int i=0;i<coins.size();i++){
                if(a-coins[i]<0)
                    ans=INT_MAX;
                else
                    ans=dp[a-coins[i]];
                if(ans!=INT_MAX)
                        maxi=min(maxi,ans+1);
            
            }
            dp[a]=maxi;
        }
        return dp[amount];
    }

     int coinChange(vector<int>& coins, int amount) {
        int res=solveTab(coins,amount);
        //  vector<int> dp(amount+1, -1);
       	// int res = solveMem(amount,coins,dp);
        // int res=solveRec(amount,coins);
        if(res==INT_MAX)
            return -1;
        return res;
   
    }
};