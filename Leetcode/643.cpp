class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    
        int L{}, R{}, n = nums.size(), currSum{}, maxAvg{numeric_limits<int>::min()};

        while(R <= L + k - 1) currSum += nums[R++];

        while(R < n){

            maxAvg = max(maxAvg, currSum);
            currSum += nums[R++] - nums[L++];

        }

        maxAvg = max(maxAvg, currSum);

        return static_cast<double>(maxAvg) / k;
    }
};