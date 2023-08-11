class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1){
            return s;
        }
        vector<vector<char>> vec(numRows);
        int dir=-1;
        int index=0;
        int Row_index=0;
        for(int i=0;i<n;i++){
            vec[Row_index].push_back(s[i]);
            if(Row_index==0 || Row_index==numRows-1){
                dir*=-1;
            }
            Row_index+=dir;
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<vec[i].size();j++){
                ans+=vec[i][j];
            }
        }
        return ans;

    }
};