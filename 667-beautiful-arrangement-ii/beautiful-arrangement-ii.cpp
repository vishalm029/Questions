class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int>a;
		//filling rest numbers which only constitute adjacent absolute differnce of 1 as k>=1
        for(int i=n;i>k;i--)
        {
            a.push_back(i);
        }
		//here the last element of a is k + 1 so start with a negative sign and alternate it for each value of k
        bool sign = 0;
        while(a.size()<n && k>0)
        {
            if(!sign)
            {
                a.push_back(a.back()-k);
                sign = 1;
            }
            else a.push_back(a.back()+k),sign = 0;
            k--;
        }
        return a;
    }
};