class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec;
        vector<int> tem;
        tem=candies;
        sort(tem.begin(),tem.end());
        int x= tem[candies.size()-1];
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+ extraCandies >= x){
                vec.push_back(true);
            }
            else
                vec.push_back(false);
        }
        return vec;
    }
};