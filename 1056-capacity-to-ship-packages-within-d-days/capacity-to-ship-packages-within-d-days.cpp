class Solution {
public:
    int capacity(int t,vector<int>& v,int k)
    {
        int div=0,sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            if(v[i]>t){
                return 0;
            }
            if(sum>t){
                sum=v[i];
                div++;
            }
        }

        return div<=k;
    }
    
    int shipWithinDays(vector<int>& v, int k) {
        int start=0,end=0;
        
        for(auto x:v){
            end+=x;
        }
        while(start<=end)
        {
            int mid=(start+end)/2;
            
            if(capacity(mid,v,k-1))
                end=mid-1;
            else
               start=mid+1;  
        }
        
        return start;
        
    }
};