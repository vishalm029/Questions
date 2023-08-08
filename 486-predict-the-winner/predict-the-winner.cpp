//RECURSION
// class Solution {
// public:
//    int solve(int i,int j,vector<int>&nums){
//        //base case
//        if(i>j){
//            return 0;
//        }
//        if(i==j){
//            return nums[i];
//        } 
//        int option1 = nums[i]+ min(solve(i+2,j,nums),solve(i+1,j-1,nums));
//        int option2 = nums[j]+ min(solve(i,j-2,nums),solve(i+1,j-1,nums));
//        return max(option1,option2);
//    }
//     bool predictTheWinner(vector<int>& nums) {
//         int n=nums.size();
//         //sum of all the values lying in a range
//         int total_score= accumulate(nums.begin(),nums.end(),0);
//         int player1= solve(0,n-1,nums);
        
//         int player2= total_score-player1;
//         return player1>=player2;
//     }
// };

//Tabulation

class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();


        vector<int> dp(n);

        for (int i = n - 1; i >= 0; i--) {
            dp[i] = nums[i];
            for (int j = i + 1; j < n; j++) {
                int option1 = nums[i] - dp[j];
                int option2 = nums[j] - dp[j - 1];
                dp[j] = max(option1, option2);
            }
        }

        return dp[n - 1] >= 0;
    }
};