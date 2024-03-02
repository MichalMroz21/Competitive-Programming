class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {

        int maxScore{-1}, divisor{};

        for(auto i : divisors){

            int currScore{};

            for(auto j : nums) if(j % i == 0) currScore++;
            
            if(currScore >= maxScore){
                if(currScore == maxScore){
                    divisor = min(divisor, i);
                }
                else{
                    divisor = i;
                    maxScore = currScore;
                }          
            }
        }

        return divisor;
    }
};