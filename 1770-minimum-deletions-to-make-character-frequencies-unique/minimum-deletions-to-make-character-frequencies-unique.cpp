class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        map<int,int>mpch;int cnt=0;
        for(auto it:mp){
            while(mpch[it.second]>0){
                cnt++;
                it.second--;
            }
            if(it.second!=0){
            mpch[it.second]++;}
        }
        return cnt;
    }
};