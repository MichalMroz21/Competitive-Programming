class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int mostNegative{}, currSum{};

        for(auto i : nums){
            currSum += i;
            mostNegative = min(mostNegative, currSum);
        }

        if(mostNegative >= 0) return 1;
        else return 1 + (-mostNegative);

    }
};