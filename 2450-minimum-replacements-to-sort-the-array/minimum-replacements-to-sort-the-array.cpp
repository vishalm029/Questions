class Solution {
public:
 
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        int pre=nums[n-1];
        for(int i=n-2; i>=0; --i){
            if(nums[i]>pre){
                int x=ceil((double)nums[i]/pre);
                ans+=(x-1);
                pre=nums[i]/x;
            }else{
                pre=nums[i];
            }
            
        }
        return ans;
    }
};