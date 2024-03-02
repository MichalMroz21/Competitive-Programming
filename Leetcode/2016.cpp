class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int minVal{INT_MAX},
            maxVal{-1};

        for(auto i : nums){

            if(i <= minVal) minVal = i;
            else maxVal = max(maxVal, i - minVal);

        }

        return maxVal;
    }
};
