class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        
    }
    
    int pop() {
        queue<int> val;
        while(q.size()!=1){
            val.push(q.front());
            q.pop();
        }
        int x=q.front();
        q=val;
        return x;
    }
    
    int top() {
        return q.back();
        
    }
    
    bool empty() {
        return q.empty();
        
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */