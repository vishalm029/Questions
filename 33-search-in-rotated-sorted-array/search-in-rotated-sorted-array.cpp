class Solution {
public:
    int pivot(vector<int>& nums){
        int n = nums.size();
        int s = 0 , e = n-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid+1;
            }else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int piv = pivot(nums);
        if(target>=nums[piv] && target<=nums[nums.size()-1]){
            int s = piv,e = nums.size()-1;
            int mid = s + (e-s)/2;
            while(s<=e){
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]<target){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
                mid = s + (e-s)/2;
            }
        }
        else{
            int s = 0,e = piv-1;
            int mid = s + (e-s)/2;
            while(s<=e){
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]<target){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
                mid = s + (e-s)/2;
            }
        }
        return -1;
    }
};