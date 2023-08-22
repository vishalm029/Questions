class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num;
        string ans;
        while(columnNumber>0){
            num=columnNumber%26;
            if(num==0){

                ans.push_back('Z');
                columnNumber-=26;
            }
            else{
                ans.push_back('A'+num-1);
                columnNumber-=num;
            }
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};