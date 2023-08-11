class Solution {
public:
    string reverseWords(string s) {
        vector<string> result;
        string str = "", ans = "";

        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                result.push_back(str);
                str = "";
            }
            else str += s[i];
        }
        result.push_back(str);
        reverse(result.begin(), result.end());

        for(int i=0; i<result.size(); i++){
            if(result[i].size()>0){
            ans += result[i] + ' ';
            }
            else continue;
        }

        return ans.substr(0, ans.length()-1);
    }
};