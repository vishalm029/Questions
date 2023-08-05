class Solution {
 public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    unordered_map<int, int> numToNextGreater;
    stack<int> stack;  

    for (const int num : nums2) {
      while (!stack.empty() && stack.top() < num)
        numToNextGreater[stack.top()] = num, stack.pop();
      stack.push(num);
    }

    for (const int num : nums1)
      if (const auto it = numToNextGreater.find(num);
          it != numToNextGreater.cend())
        ans.push_back(it->second);
      else
        ans.push_back(-1);

    return ans;
      // stack<int> s;
      //   s.push(-1);
      //   int n=nums1.size();
      //   vector<int> ans(n);
      //   int curr;
      //   for(int i=0;i<n;i++){
      //       for(int j=0;j<nums2.size();j++){
      //           if(nums1[i]==nums2[j]){
      //               int curr=nums1[i];
      //               while(s.top()<=curr){
      //                   s.pop();
      //               }
      //           }
      //           ans[i]=s.top();
      //           s.push(curr);
      //       }

      //   }
      //   return ans;
  }
};
