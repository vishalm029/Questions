class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str="";
        int curr=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            //Check if position is equal or not
            if(str.find(s[i])==string::npos){
                curr++;
                str+=s[i];
                ans=max(curr,ans);
            }
            else{
                int j=str.find(s[i])+1;
                curr-=j;
                str.erase(0,j);
                str+=s[i];
                curr++;

            }
        }
        return ans;
        
    }
};