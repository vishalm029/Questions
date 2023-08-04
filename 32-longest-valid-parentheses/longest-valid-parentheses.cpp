class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.empty()){
            return 0;
        }
        stack<int> vis;
        vis.push(-1);
        int t=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            vis.push(t);
            else{
                //for closed braces
                if(!vis.empty() && vis.top()!=-1 && s[vis.top()]=='('){
                    vis.pop();
                    ans=max(ans,abs(t-vis.top()));
                }
                else{
                    vis.push(t);
                }
            }
            t++;
        }
        //with invalid expression
        // int a=0, b=0;
        // while(!vis.empty()){
        //     if(vis.top()=='('){
        //         b++;
        //     }
        //     else{
        //         a++;
        //     }
        //     vis.pop();
        // }
        // int ans=a+b ;
        // return s.size()-ans;
        return ans;
    }
};