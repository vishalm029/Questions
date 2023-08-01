class Solution {
public:
// recursive solution
    void Solve(int i,int n,int k,vector<int>&vec,vector<vector<int>> &ans)
    {
        if(k==0)
        {
            ans.push_back(vec);
            return;
        }
        if (k > n - i + 1)
            return;
        if (i > n)
            return;
        
        //including ith element
        vec.push_back(i);
        Solve(i+1,n,k-1,vec,ans);
        
        //skiping ith element
        vec.pop_back();
        Solve(i+1,n,k,vec,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> vec;
        vector<vector<int>> ans;
        Solve(1,n,k,vec,ans);
        return ans;
    }
};
