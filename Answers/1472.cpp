class BrowserHistory {
public:

    stack<string> history1{};
    stack<string> history2{};

    BrowserHistory(string homepage) {
        history1.push(homepage);
    }
    
    void visit(string url) {
        
        while(!history2.empty()){
            history2.pop();
        }
        history1.push(url);
       
    }
    
    string back(int steps) {

        while(steps && !history1.empty()){

            history2.push(history1.top());
            history1.pop();

            steps--;
        }

        if(history1.empty()) {history1.push(history2.top()); history2.pop();}
        return history1.top();

    }
    
    string forward(int steps) {
       
        while(steps && !history2.empty()){

            history1.push(history2.top());
            history2.pop();

            steps--;
        }

        return history1.top();

    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */