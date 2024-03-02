class MinStack {
public:

    stack<int> values{};
    stack<int> minValues{};

    MinStack() {
        
    }
    
    void push(int val) {
        values.push(val);
        if(minValues.size() == 0) minValues.push(val);
        else if(val <= minValues.top()) minValues.push(val);
    }
    
    void pop() {
        if(values.size() != 0){
            if(values.top() == minValues.top()){
                minValues.pop();
            }
            values.pop();
        }
    }
    
    int top() {
        if(values.size() != 0)
        return values.top();

        return 0;
    }
    
    int getMin() {
        if(minValues.size() != 0)
        return minValues.top();

        return 0;
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