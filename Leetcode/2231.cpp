class Solution {
public:
    int largestInteger(int num) {
        
        vector<bool> evenOddPattern{};
        priority_queue<char> evenHeap{}, oddHeap{};

        while(num){
            int currDigit = num % 10;

            if(currDigit % 2) oddHeap.push(currDigit);
            else evenHeap.push(currDigit);

            evenOddPattern.push_back(currDigit % 2);

            num /= 10;
        }

        int result{};

        for(auto pattern = evenOddPattern.rbegin(); pattern != evenOddPattern.rend(); pattern++){
            result *= 10;

            if(*pattern){
                result += oddHeap.top();
                oddHeap.pop();
            }
            else{
                result += evenHeap.top();
                evenHeap.pop();
            }
        }

        return result;
    }
};