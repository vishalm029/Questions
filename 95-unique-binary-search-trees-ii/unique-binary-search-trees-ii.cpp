/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> gen(vector<int>v,int l,int r)
    {
        // if(l==r)
        //     return {new TreeNode(v[l])};
        if(r<l)
            return {NULL};
        vector<TreeNode*>ans;
        for(int i=l;i<=r;i++)
        {
            for(auto it1:gen(v,l,i-1))
            {
                for(auto it2:gen(v,i+1,r))
                {
                    TreeNode*newnode=new TreeNode(v[i]);
                    newnode->left=it1;
                    newnode->right=it2;
                    ans.push_back(newnode);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*>ans;
        int i;
        vector<int>v;
        for(i=1;i<=n;i++)
            v.push_back(i);
        ans=gen(v,0,v.size()-1);
        return ans;
    }
};