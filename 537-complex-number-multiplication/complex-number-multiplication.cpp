class Solution {
public:
    string complexNumberMultiply(string n1 , string n2){
        int x1 , y1 , x2 , y2;
        char c;
        istringstream s1(n1) , s2(n2);
        s1 >> x1 >> c >> y1 >> c; 
        s2 >> x2 >> c >> y2 >> c;
        return to_string(x1*x2-y1*y2)+'+'+to_string(x1*y2+x2*y1)+'i';
    }
};