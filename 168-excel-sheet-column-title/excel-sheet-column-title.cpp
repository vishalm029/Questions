class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num;
        string ans;
        while(columnNumber>0){
            --columnNumber;
            num=columnNumber%26;
            ans.push_back('A'+num);
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};