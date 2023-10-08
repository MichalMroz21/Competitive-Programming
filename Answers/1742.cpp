class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        int maxNumber{};
        unordered_map<int, int> freq{};

        for(int i = lowLimit; i <= highLimit; i++){

            int sum{}, iCopy{i};
            
            while(iCopy){
                sum += iCopy % 10;
                iCopy /= 10;
            }

            freq[sum]++;
            maxNumber = max(freq[sum], maxNumber);

        }

        return maxNumber;
    }
};