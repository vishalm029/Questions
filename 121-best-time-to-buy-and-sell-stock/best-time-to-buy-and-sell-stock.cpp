class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int Max=0;
        int profit=Max-min;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
            {
                min=prices[i];
                Max=-1;
            }
            else{
                Max=max(Max,prices[i]);
            }
            profit=max(profit,Max-min);
        }
        if(profit<0)
        return 0;
        return profit;
    }
};