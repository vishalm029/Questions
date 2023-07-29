class Solution {
public:
//RECURSION SOLUTION
    // int SolveRec(int n,vector<int>& days, vector<int>& costs,int index){
    //     // base Case
    //     if(index>=n){
    //         return 0;
    //     }
    //     //1 day pass
    //     int option1=costs[0]+SolveRec(n,days,costs,index+1);
    //     int i;
    //     int option2=INT_MAX,option3=INT_MAX;
        
    //     //7 days pass
    //     for(i=index;i<n && days[i]<days[index]+7;i++);
    //     option2 = costs[1]+SolveRec(n,days,costs,i);

    //     //30 days pass
    //     for(i=index;i<n && days[i]<days[index]+30;i++);
    //     option3 = costs[2]+SolveRec(n,days,costs,i);

    //     return min(option1,min(option2,option3));
    // }

//Memoization
//  int SolveMemo(int n,vector<int>& days, vector<int>& costs,int index,vector<int> &dp){
//          // base Case
//         if(index>=n){
//             return 0;
//         }
//         if(dp[index]!=-1){
//             return dp[index];
//         }
//         //1 day pass
//         int option1=costs[0]+SolveMemo(n,days,costs,index+1,dp);
//         int i;
//         int option2,option3;
        
//         //7 days pass
//         for(i=index;i<n && days[i]<days[index]+7;i++);
//         option2 = costs[1]+SolveMemo(n,days,costs,i,dp);

//         //30 days pass
//         for(i=index;i<n && days[i]<days[index]+30;i++);
//         option3 = costs[2]+SolveMemo(n,days,costs,i,dp);

//         dp[index]=min(option1,min(option2,option3));
//         return dp[index];
//     }

    // Tabulation
    int SolveTab(int n,vector<int>& days, vector<int>& costs){
        vector<int> dp(n+1,0);
        for(int index=n-1;index>=0;index--){
             //1 day pass
        int option1=costs[0]+dp[index+1];
        int i;
        int option2,option3;
        
        //7 days pass
        for(i=index;i<n && days[i]<days[index]+7;i++);
        option2 = costs[1]+dp[i];

        //30 days pass
        for(i=index;i<n && days[i]<days[index]+30;i++);
        option3 = costs[2]+dp[i];

        dp[index]=min(option1,min(option2,option3));
    }
    return dp[0];

        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        //vector<int> dp(n,-1);
        //return SolveRec(n,days,costs,0);
        //return SolveMemo(n,days,costs,0,dp);
        return SolveTab(n,days,costs);
    }
};