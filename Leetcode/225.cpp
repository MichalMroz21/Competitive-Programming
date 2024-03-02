class MyStack {
public:

    queue<int>a{};
    queue<int>b{};

    queue<int>* current; 

    MyStack() {
        current = &a;
    }
    
    void push(int x) {
        current->push(x);
    }
    
    int pop() {
        
        int curr{};
        queue<int>* another = (current == &a) ? &b : &a;

        curr = current->front();
        current->pop();

        while(!current->empty()){

            another->push(curr);
            curr = current->front();
            current->pop();
        }
      
        current = another;
        return curr;
    }
    
    int top() {
         
        int curr{};
        queue<int>* another = (current == &a) ? &b : &a;

        while(!current->empty()){

            curr = current->front();
            current->pop();
            another->push(curr);
            
        }
      
        current = another;
        return curr;
    }
    
    bool empty() {
        return current->empty();
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