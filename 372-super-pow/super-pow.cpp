class Solution {
public:
    int superPow(int a, vector<int>& b) {
       long long num=0;
       //According to Euler's theorem if gcd(a,n) = 1, then aφ(n) ≡ 1 (mod n)
       //1337=(191)(7)
       //x(N)=(191-1)(7-1) = (190)*(6) = 1140
        for(int i=0;i<b.size();i++) {
          num=(num*10+b[i])%1140; 
        }
        a=a%1337;
        long long ans=1;
        for(int i=0;i<num;i++)  
            ans=1LL*(ans*a)%1337;
        return ans;
      
        // long long n=b.size();
        // long long p=0;
        // long long ans;
        // for(int i=0;i<n;i++){
        //   p += b[i]*(pow)(10,(n-i-1));
        //   //p=p%1337;
        // }
        // ans=pow(a,p);
        // return ans%1337;
    }
};