class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ch=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                continue;
            }
            else{
                if((i-1<0 || flowerbed[i-1]==0) &&
                 (i+1==flowerbed.size() || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                ch++;
                }
            }
        }
        return ch>=n; 
    }
};