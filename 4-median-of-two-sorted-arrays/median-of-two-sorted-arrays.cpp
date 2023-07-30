class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int ele:nums1){
            merge.push_back(ele);
        }
        for(int ele:nums2){
            merge.push_back(ele);
        }
        sort(merge.begin(),merge.end());
        int n=merge.size();
        if(n%2!=0){
            return merge[n/2];
        }
        else{
            return (merge[n/2 - 1]+merge[n/2 ])/2.0;

        }

        
        
    }
};