class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int minimum = 0, maximum = nums[nums.size()-1]-nums[0];
        int mid,count=0;
        int n=nums.size(),ans;
        while(minimum<=maximum){
            mid = (maximum-minimum)/2 + minimum;
            count = 0;
            for(int i = 0; i < n-1; i++){
                if(nums[i+1]-nums[i] <= mid){
                    count++;
                    i++;
                }
            }
            if(count >= p){
                ans = mid;
                maximum = mid-1;
            }else{
                minimum = mid+1;
            }
        }
        return ans;
    }
};
