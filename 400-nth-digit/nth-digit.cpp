class Solution {
public:
    int findNthDigit(int n) {
        int i = 0;
        long long count = 0;
        while(n - count > 0){
            n -= count;
            i ++;
            count = 9 * pow(10, i - 1) * i;
        }

        int base = pow(10, i - 1);
        int val = base + n / i;
        if(n % i == 0){
            return to_string(val - 1).back() - '0';
        }
        return to_string(val)[n % i - 1] - '0';
        
    }
};