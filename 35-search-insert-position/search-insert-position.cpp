class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n;
        int mid=s+(e-s)/2;
        int ans =-1;
        while(s<e){
            if(nums[mid]<target){
                s=mid+1;
            }
            else{
                ans=e;
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        if(s < n && nums[s] < target) {
            s++;
        }
        return s;
        
    }
};
