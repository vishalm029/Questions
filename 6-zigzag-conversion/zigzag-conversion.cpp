class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1){
            return s;
        }
        vector<string> vec(numRows,"");
        int dir=-1;
        int index=0;
        int Row_index=0;
        for(int i=0;i<n;i++){
            vec[Row_index]+=s[i];
            if(Row_index==0 || Row_index==numRows-1){
                dir*=-1;
            }
            Row_index+=dir;
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            ans+=vec[i];
        }
        return ans;

    }
};