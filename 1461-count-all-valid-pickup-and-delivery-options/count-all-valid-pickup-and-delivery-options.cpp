class Solution {
    int len;
    int mod = 1000000000+7;
    
public:
    int pick(long long n){
        if(n==1){
            return 1;
        }
        return (n*pick(n-1)*(2*n-1))%mod;
    }
    int countOrders(int n) {
        //len=n;
        return pick(n);
       
        
    }
};
// class Solution {
//     int size;
//     int mod = 1000000000+7;
// public:
//     int f(long long n){
//         if(n == 1)  return 1;
//         return (n*f(n-1)*(2*n-1))%mod;
        
//     }
//     int countOrders(int n) {
//         // size = n;
//         return f(n);
//     }
// };

// class Solution {
// public:
//     int countOrders(int n) {
//         vector<long long> dp(n + 1);
//         dp[0] = 1;

//         for (int i = 1; i <= n; i++) {
//             long long k = i * (i + (i - 1));
//             dp[i] = (dp[i - 1] * k) % 1000000007;
//         }

//         return static_cast<int>(dp[n]);
//     }
// };