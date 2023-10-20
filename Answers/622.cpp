class MyCircularQueue {
public:

    int front{}, back{}, n{}, k{};
    vector<int> cirQueue;

    MyCircularQueue(int k) : cirQueue(k), k(k) {}
    
    void incPtr(int& ptr){
        ptr++;
        if(ptr == k) ptr = 0;
    }

    bool enQueue(int value) {
        if(isFull()) return false;
        incPtr(back);
        cirQueue[back] = value;
        if(n == 0) front = back;
        n++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        incPtr(front);
        n--;
        return true;
    }
    
    int Front() {
        if(n == 0) return -1;
        return cirQueue[front];
    }
    
    int Rear() {
        if(n == 0) return -1;
        return cirQueue[back];
    }
    
    bool isEmpty() {
        return n == 0;
    }
    
    bool isFull() {
        return n == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
