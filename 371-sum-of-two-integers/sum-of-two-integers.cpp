class Solution {
public:
    int getSum(int a, int b) {
        int c = abs(b);
        for(int i=0; i < c; i++) {
            if(a >= 0  && b >= 0)
                a++;
            else if( (a < 0  && b > 0) || (a > 0  && b < 0) ) {
               
                if(a < 0  && b > 0)
                    a++;
                else
                    a--;
            }
            else
                a--;
        }        
    return a;
    }
};