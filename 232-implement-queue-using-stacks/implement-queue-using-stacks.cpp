class MyQueue {
public:
    vector<int> vec;
    int head=-1,tail=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        vec.push_back(x);
        tail+=1;
        if(head==-1){
            head++;
        } 
    }
    
    int pop() {
        head++;
        return vec[head-1];
    }
    
    int peek() {
        return vec[head];
    }
    
    bool empty() {
        if(head==-1 or head>tail){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */