//////////////TLE//////////////////
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> ans;
//         int n=nums.size();
//         while(k){
//             nums.pop_back();
//             nums.insert(nums.begin(),nums[n-1]);
//             k--;
//         }
        
//     }
// };
class Solution{
    public:
    void rotate(vector<int>&nums,int k){
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());

    }
};