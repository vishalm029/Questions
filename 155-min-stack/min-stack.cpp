class MinStack {
public:
   stack<int> st1,st2;

    MinStack() {
        
    }
    
    void push(int val) {
        st1.push(val);
        
        if(st2.empty())
        st2.push(val);
        else{
            if(st2.top()<=val)
            st2.push(st2.top());
            else
            st2.push(val);
        }
    }
    
    void pop() {
        st1.pop();
        st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// class MinStack {
//     stack <int> s;
//     int mini;
// public:
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         //for first element
//         if(s.empty()){
//             s.push(val);
//             mini=val;
//         }
//         else{
//             if(val<mini){
//                 s.push(2*val - mini);
//                 mini=val;
//             }
//             else{
//                 s.push(val);
//             }
//         }
        
//     }
    
//     void pop() {
//         if(s.empty()){
//             //return -1;
//         }
//         int curr = s.top();
//         s.pop();
//         if(curr>mini){
//             //return curr;
//         }
//         else{
//             int prevMin=mini;
//             int data=2*mini - curr;
//             mini=data;
//             //return prevMin;
//         }
        
//     }
    
//     int top() {
//         if(s.empty()){
//             return -1;
//         }
//         int curr=s.top();
//         if(curr<mini){
//             return mini;
//         }
//         else{
//             return curr;
//         }
        
//     }
    
//     int getMin() {
//         if(s.empty()){
//             return -1;
//         }
//         return mini;
        
//     }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */