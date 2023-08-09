class Solution {
public:
    bool isPerfectSquare(int num) {
        int sr=sqrt(num);
        if(sr*sr==num)
            return true;
        else
            return false;
    }
int main(){
    int num;
    bool perfect = false;
    cout<<"num = ";
    cin>>num;
    perfect=isPerfectSquare(num);
    if(perfect){
        return true;
    }
    else{
        return false;
    }
    return true;
}
};