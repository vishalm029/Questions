class Solution {
public:
    int addMinimum(string word) {
        string s="";
        int count=0;
        int n = word.size();
        if(word[0] == 'b'){
            count+=1;
        }else if(word[0] ==  'c'){
            count+=2;
        }
        for(int i=1;i<word.size();i++){
            if(word[i] == 'a' && word[i-1] == 'a') count+=2;
            if(word[i] == 'a' && word[i-1] == 'b') count+=1;
            if(word[i] == 'b' && word[i-1] == 'b') count+=2;
            if(word[i] == 'b' && word[i-1] == 'c') count+=1;
            if(word[i] == 'c' && word[i-1] == 'c') count+=2;
            if(word[i] == 'c' && word[i-1] == 'a') count+=1;
        }
        if(word[n-1] == 'a'){
            count+=2;
        }else if(word[n-1] == 'b'){
            count+=1;
        }
        return count;
    }
};