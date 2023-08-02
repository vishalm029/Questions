class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); 
        // Sort the array in ascending order to get the first permutation

        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return result;
    }
};