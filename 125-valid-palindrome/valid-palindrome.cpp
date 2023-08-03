class Solution {
public:
    bool isPalindrome(string s) {
       
    std::string result;
    for (char c : s) {
        
        if (std::isalnum(c)) {
            result += c;
        }
    }
        
        for(int i=0;i<result.length();i++)
        {
            result[i] = tolower(result[i]);
        }
        int size=result.length();


        int t=size-1;
        int i=0;

        bool value=true;
        while( i < size && t >= 0 )
        {
            if(result[i] != result[t])
            {
                value=false;
            }
            i++;
            t--;
        }
        return value;
    }
};