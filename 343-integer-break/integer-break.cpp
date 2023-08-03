#define ll long long

class Solution {
public:
    int fun(int n ,vector<int> &dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans =n;
    for(int i=1;i<n;i++){
        ans =max(ans,i*fun(n-i,dp));
    }
    return dp[n]=ans ;
}
    int integerBreak(int n) {
        if(n<4) return n-1;
        vector<int> dp(n+1,-1);
        return fun(n,dp);
    }
};
        // if(n<=3) return n-1;
        
        // vector<vector<ll>> dp(n+1,vector<ll>(n+1, 1));
        
        // for(int i=2;i<=n;i++){
        //     for(int j=1;j<= n;j++){
                
        //         ll pro= INT_MIN;
        //         if(j<=i){
        //             pro= dp[i-j][j]*j ;
        //         }
        //         dp[i][j]= max(pro, dp[i][j-1]);
        //     }
        // }
        
        // // for(auto &x:dp){
        // //     for(auto y:x)cout<<y<<" ";
        // //     cout<<"\n";
        // // }
        
        // return dp[n][n];
        
 