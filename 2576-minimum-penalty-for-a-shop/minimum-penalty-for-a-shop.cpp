class Solution {
public:
    int bestClosingTime(string customers) {
        int yes=0;
        for (int i=0; i<customers.size(); i++){
            if (customers[i]=='Y'){
                yes++;
            }
        }
        int ans= 0; int pen= yes; int no=0;
        for (int i=0; i<customers.size(); i++){
            if (customers[i]=='N'){
                no++;
            }
            else{
                yes--;
            } 
            int curr_pen= yes + no;
            if (curr_pen<pen){
                ans= i+1;
                pen= curr_pen;
            } 
        }
        return ans;
    }
};