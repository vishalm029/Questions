class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& b) {
        int i=0;
        stack<int> st;
        int ch=0;
        for(int j=0;j<a.size();j++){
            ch=0;
            if(a[j]==b[i]){
                i++;
                ch=1;
                
            }
            while(!st.empty() and st.top()==b[i]){
                st.pop();
                i+=1;
            }
            if(!ch){
                st.push(a[j]);
            }
           
            
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};