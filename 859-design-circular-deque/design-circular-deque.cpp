class MyCircularDeque {
    deque<int> dq;
    int full = 0, count = 0;
public:
    MyCircularDeque(int k) {
        full = k;
    }
    
    bool insertFront(int value) {
        if (count < full) { // Corrected 'cout' to 'count'
            dq.push_front(value);
            count++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if (count < full) { // Corrected 'cout' to 'count'
            dq.push_back(value);
            count++;
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if (count > 0) {
            dq.pop_front();
            count--;
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if (count > 0) {
            dq.pop_back();
            count--;
            return true;
        }
        return false;
    }
    
    int getFront() {
        if (dq.empty()) return -1;
        return dq.front();
    }
    
    int getRear() {
        if (dq.empty()) return -1;
        return dq.back();
    }
    
    bool isEmpty() {
        return dq.size() == 0;
    }
    
    bool isFull() {
        return dq.size() == full;
    }
};


/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */