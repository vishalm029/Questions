class Solution {
public:
    int minOperations(int n) {
       int s=0;
       int max=n;
        for(int j=0;j<n/2;j++){
           s+=max-2*j-1;

        }
        return s;   
    }
};