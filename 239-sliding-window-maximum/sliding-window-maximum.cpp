class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int N=nums.size();
        deque <int> dq;
        vector<int> ans;

        //Process first window of k size
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
            dq.push_back(i);
        }

        ans.push_back(nums[dq.front()]);

        // //stores answer of first k sized window
        // if(dq.size()>0){
        //     ans.push_back(nums[dq.front()]);
        // }
        // else{
        //     ans.push_back(0);
        // }

        //process for remaining windows
        for(int i=k;i<N;i++){
            //removal
            while(!dq.empty() && i-dq.front()>=k)
                dq.pop_front();

            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();

            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};