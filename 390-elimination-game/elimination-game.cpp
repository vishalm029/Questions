class Solution {
public:
    int algo(int n) {
        if (n <= 2) {
            return (n-1);
        }
        if (n % 2 == 1) {
            return (n-2-2*algo((n-1)/2));
        }
        else{
            return (n-1-2*algo(n/2));
        }
    }
    int lastRemaining(int n) {
        return algo(n) + 1;
    }
};