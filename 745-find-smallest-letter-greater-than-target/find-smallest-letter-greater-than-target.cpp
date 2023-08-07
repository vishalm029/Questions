class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l =0, r = letters.size()-1;
        int res = 0;
        while(l <= r)
        {
            int m =  l + (r - l) / 2;
            if(letters[m] > target)
            {
                r = m-1;
                res = m;
            } else if(letters[m] <= target){
                l = m+1;
            }
        }

        return letters[res];
    }
};