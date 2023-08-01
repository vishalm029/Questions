class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        long sum=0;
        long ans=0;
        for(int i=0;i<n;i++){
            //sum+=nums[i]-1;
            sum+=nums[i];
            //sum+=nums[i-1]+1;
            long a=(sum+i)/(i+1);

            ans=max(ans,a);
        }
        return ans;
    }
};