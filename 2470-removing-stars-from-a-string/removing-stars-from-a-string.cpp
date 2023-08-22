// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char> ans;
//         string val;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='*' && !ans.empty()){
//                 ans.pop();
//             }
//             else{
//                 ans.push(s[i]);
                
//             }
//         }
//         while(ans.empty()==0){
//             char k =ans.top();
//             cout<<ans.top();
//             ans.pop();

//             val.push_back(k);
//         }
//         reverse(val.begin(),val.end());
//         return val;
        
//     }
// };
class Solution {
public:
    string removeStars(string s) {
        string ans;
         for(int i=0;i<s.size();i++){
             if(s[i]=='*' && !ans.empty()){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
                
            }
        }
        return ans;
        
    }
};