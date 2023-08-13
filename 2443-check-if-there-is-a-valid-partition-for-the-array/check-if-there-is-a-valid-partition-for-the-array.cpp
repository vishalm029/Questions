class Solution {
public:
    bool solve(int ind,vector<int> &nums,vector<int> &memo){
        int n = nums.size();
        if(ind >= n) return true;
        if(memo[ind] != -1) return memo[ind];
         
        bool ans = false;
        if(ind+1 < n && nums[ind+1] == nums[ind]) {
            ans = ans | solve(ind+2,nums,memo);
        }
        
        if(ind+2 < n && nums[ind+2] == nums[ind+1] && nums[ind+1] == nums[ind]){
            ans = ans | solve(ind+3,nums,memo);
        }
        
        if(ind+2 < n && nums[ind+2] - nums[ind+1] == 1 && nums[ind+1] - nums[ind] == 1){
            ans = ans | solve(ind+3,nums,memo);
        }
       
        return memo[ind] = ans;
        
    }
    
    bool validPartition(vector<int>& nums) {
        vector<int> memo(nums.size()+1,-1);
        return solve(0,nums,memo);
    }
};