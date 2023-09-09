class Solution {
public:
    //int Recur(vector<int> &num,int target){
    int RecurMemo(vector<int> &num,int target,vector<int> &dp){
        //base case
        if(target<0){
            return 0;
        }
        if (target==0){
            return 1;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int ans=0;
        for(int i=0;i<num.size();i++){
            ans+=RecurMemo(num,target-num[i],dp);
        }
        dp[target]=ans;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        return RecurMemo(nums,target,dp);
        //return Recur(nums,target);
    }
};