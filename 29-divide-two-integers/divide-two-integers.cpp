class Solution {
public:
    int divide(int dividend, int divisor) {
        
        int mx = pow(2,31)-1;
        int mn = pow(-2,31);
        if(dividend == mn && divisor == -1)
        {
            return mx;
        }

        int ans = dividend/divisor;
        return ans;
    }
};