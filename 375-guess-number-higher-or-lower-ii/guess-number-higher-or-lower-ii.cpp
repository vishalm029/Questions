class Solution {
public:
    vector<vector<int>>dp;
    int getMoneyAmount(int n) {
        dp.resize(n+1,vector<int>(n+1,-1));
        
        int start=1;
        int end=n;
        return fun(start,end);  
    }
   int fun(int start,int end)
   {
        if(start>end)
        return INT_MIN;

        if(start==end)    //only possible ans of that subtree
        return 0;
        
        if(dp[start][end]!=-1) return dp[start][end];
       
        int ans=INT_MAX;

        for(int i=start;i<=end;i++)
        {
          ans=min(ans,i+max(fun(start,i-1),fun(i+1,end)));	
        }
	    return dp[start][end] =ans;
   }
};