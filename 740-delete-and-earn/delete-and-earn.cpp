class Solution {
public:

    int deleteAndEarn(vector<int>& nums) {
        int m=0;
        for(int num : nums){
            m = max(num, m);
        }
        int a[m+1],i,n=nums.size();
        for(int &t:a){
            t=0;
        }
        for(int k : nums){
            a[k]+=k;
        }
        for(i=2;i<m+1;i++){
            a[i]=max(a[i-1],a[i]+a[i-2]);
        }
        return a[i-1];
    }
};