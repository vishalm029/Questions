class Solution {
public:
    int minimumSize(vector<int>& arr, int max_operation) {
       int low=1,high= *max_element(arr.begin(),arr.end());
       
       while(low<=high){
           int op=0;
           int mid=low+(high-low)/2;
           for(auto a:arr){
               op+=(a-1)/mid;
           }
          if(op>max_operation){
              low=mid+1;
          }
          else{
              high=mid-1;
          }
       }
       return low;
    }
};