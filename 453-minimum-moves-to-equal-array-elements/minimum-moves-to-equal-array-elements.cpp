class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        // sorting the array to get min at the first
        sort(nums.begin(), nums.end());
        int count = 0;
        
        // Now we have to make min equal to every number and keep adding the count
        for(int i = 1; i < nums.size(); i++)
            count += nums[i] - nums[0];
        
        return count;
    }
};