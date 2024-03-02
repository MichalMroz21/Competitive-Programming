class Solution {
public:
    int maximum69Number (int num) {
        
        stack<int> numStack{};

        while(num != 0){

            numStack.push(num % 10);
            num /= 10;
        }

        bool oneSixFound = false;
        int result{};

        while(!numStack.empty()){

            result *= 10;
            int curr = numStack.top();
            numStack.pop();

            if(curr == 6 && oneSixFound == false){
                curr = 9; oneSixFound = true;
            }

            result += curr;
        }

        return result;
    }
};