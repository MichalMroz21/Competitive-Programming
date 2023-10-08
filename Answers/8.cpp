class Solution {
public:
    int myAtoi(string s) {
        
        bool isPositive{true}, numberStarted{false}, signAlreadyMet{false};
        auto it = s.begin();
        int res{};
        int max = numeric_limits<int>::max();
        int min = numeric_limits<int>::min();

        while(it != s.end()){

            char c = *it;

            if(isdigit(c)){

                if(numberStarted == false) numberStarted = true;

                if(res > max/10 || res < min/10){
                    if (isPositive) res = max;
                    else res = min;
                } 
                
                else res *= 10;

                int valueToAdd = c - '0';

                if(isPositive){
                    if(res > max - valueToAdd) res = max;
                    else res += valueToAdd;
                }

                else {
                    valueToAdd *= -1;
                    if(res < min - valueToAdd) res = min;
                    else res += valueToAdd;
                }

            }

            else{

                if(signAlreadyMet) break;
                if(numberStarted) break;

                if(c == '-' || c == '+'){
                    it++;
                    isPositive = (c == '+');
                    signAlreadyMet = true;
                    continue;
                } 

                if(c == ' '){
                    it++;
                    continue;
                }

                break;
            }

            it++;
        }
        return res;
    }
};
