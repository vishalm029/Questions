class Solution {
public:
    int minOperations(int n) {
       int k=0,s=0;
       //int i=n/2;
       int max=n;
        for(int j=0;j<n/2;j++){
           s+=max-2*j-1;

        }
        return s;   
    }
};