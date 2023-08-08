class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(auto ele:nums)
            q.push(ele);
        while(--k){
            q.pop();
        }
        return q.top();
    }
};