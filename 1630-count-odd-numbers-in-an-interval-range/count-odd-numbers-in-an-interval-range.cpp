// class Solution {
// public:
//     int countOdds(int low, int high) {
//         int ch=0;
//         for(int i=low;i <= high;i++){
//             if(i%2 != 0){
//                 ch++;
//             }

//         }
//         return ch;
//     }
// };
class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0 && high%2==0){
            return (high-low)/2;

        }
        return (high-low)/2 + 1;
        
    }
};

  