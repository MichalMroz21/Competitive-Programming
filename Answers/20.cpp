class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char,char> bracketsClosing{
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        stack<char> myStack{};

        for(auto i : s){

            auto a = bracketsClosing.find(i);

            if(a != bracketsClosing.end()) myStack.push(i);

            else if(!myStack.empty()) {

                if(bracketsClosing[myStack.top()] == i) myStack.pop();
                else return false; 
                
            }
            
            else return false;
        }

        if(myStack.empty()) return true;
        return false;

    }
};