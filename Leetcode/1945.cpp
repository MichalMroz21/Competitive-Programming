class Solution {
public:

    int getSumOfNumbers(int number){

        int sum{};

        while(number){
            sum += number % 10;
            number /= 10;
        }

        return sum;
    }

    int getLucky(string s, int k) {
        
        int currSum{};

        while(k){

            if(currSum == 0){
                for(auto ch : s) 
                    currSum += getSumOfNumbers(ch - 'a' + 1); 
            }   

            else currSum = getSumOfNumbers(currSum);

            if(currSum < 10) break;

            k--;
        }

        return currSum;
    }
};