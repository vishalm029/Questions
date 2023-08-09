class Solution {
public:
    int countPrimes(int n) {
        if(n>=2)
        {
            vector<bool> arr(n-2,true);
            int j=2; 
            int count =0;
            while(j<n)
            {
              
                if(arr[j-2]==true)//prime == true
                {
                    int i=2;
                    while((j*i)<n)
                    {
                         arr[((i*j)-2)]=false;//make false for all multple 
                         i++;
                    }
                    count++;
                   
                }
                j++;
            }
            return count;
        }
        return 0;
    }
};